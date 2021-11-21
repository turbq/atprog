import sys
import time


global g_in_debug_mode
g_in_debug_mode = False

global g_is_running
g_is_running = False

global g_cpu_name_to_index_map
g_cpu_name_to_index_map = {
  "R0": 0,
  "R1": 1,
  "R2": 2,
  "R3": 3,
  "R4": 4,
  "R5": 5,
  "R6": 6,
  "R7": 7,
  "R8": 8,
  "R9": 9,
  "R10": 10,
  "R11": 11,
  "R12": 12,
  "SP": 13,
  "LR": 14,
  "PC": 15,
  "PSR": 16,
  "MSP": 17,
  "MSP": 17,
  "PSP": 18,
  "PRIMASK": 20,
  "FAULTMASK": 20,
  "BASEPRI": 20,
  "CONTROL": 20,
  "APSR": 21,
  "EPSR": 22,
  "IPSR": 23
}

# log is a global object injected by MPLAB
log.getLogLevelThreshold()
log.setShowOutput(False)

# jlink is a global object injected by MPLAB

log.info("ATSAME70 debugger")


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4ProgramInterface

def set_program_exec(address, data):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Program exec at 0x%x, is %d bytes long" & (address, len(data)))

def set_debug_exec(address, data):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Debug exec at 0x%x, is %d bytes long" & (address, len(data)))

def blank_check():
  log.info("RI4ProgramInterface: Blank check")

def erase():
  # looks like JLink erases as it goes. No need for a whole cheap erase
  log.info("RI4ProgramInterface: Erase")
  pass


def hold_in_reset():
  log.info("RI4ProgramInterface: Hold in reset")

def release_from_reset():
  log.info("RI4ProgramInterface: Release from reset")


def write_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  jlink.WriteMem(address, data, 0, length)

def read_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Reading %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  jlink.ReadMem(address, data, 0, length)

def verify_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Verifying %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))

def end_of_operations():
  log.info("RI4ProgramInterface: End of operations")
  jlink.Reset()
  jlink.Halt()


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4DebugInterfaceWithBP


def init_debug_session():
  log.info("Debug:: Init debug session")
  global g_in_debug_mode
  g_in_debug_mode = True
  global g_is_running
  g_is_running = False

def debug_read_target_memory(mem_type, start, end, data):
  length = end-start+1
  log.log(LEVEL_INFO, "Debug:: Reading %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
  res = jlink.ReadMem(start, data, 0, length)
  if res == 1:
    raise Exception("Failed to read %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))

def debug_write_target_memory(mem_type, start, end, data):
  length = end-start+1
  log.log(LEVEL_INFO, "Debug:: Writing %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
  res = jlink.WriteMem(start, data, 0, length)
  if res < 0:
    raise Exception("Failed to write %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))

def is_target_in_debug_mode():
  log.log(LEVEL_INFO, "Debug:: Is target in debug mode? %s" % g_in_debug_mode)
  return g_in_debug_mode

def get_pc():
  return jlink.ReadReg(15)

def run_target():
  log.info("Debug:: Target to be set to running")
  res = jlink.GoEx(1, 1)
  if res != 0:
    raise Exception("Failed to run target")
  global g_is_running
  g_is_running = True

def halt_target():
  log.info("Debug:: Target to be halted ")
  res = jlink.Halt()
  if res != 0:
    raise Exception("Failed to halt target")
  global g_is_running
  g_is_running = False

def step_target():
  log.info("Debug:: Step")
  res = jlink.Step()
  if res != 0:
    raise Exception("Failed to step target")

def set_pc(pc):
  log.log(LEVEL_INFO, "Debug:: set pc to 0x%0x" % pc)

def set_sw_bp(address, instruction, flags):
  """
    * Sets/clears a software breakpoint
    * @param address -> the address of the software breakpoin
    * @param instruction -> the instruction to be programmed (either the software breakpoint
    * opcode or the original instruction the software breakopint was replacing).
    * @param flags -> One or more of the SWBPFlags listed below
    * @return returns the original/old opcode at address
  """
  log.log(LEVEL_INFO, "Debug:: set bp at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (address, instruction, flags))

def reset_target():
  log.log(LEVEL_INFO, "Debug:: reset")
  jlink.Reset()

def is_running():
  res = jlink.IsHalted()
  global g_is_running
  g_is_running = res != 1
  return g_is_running

def debug_read_named_register(name, buf):
  if name in g_cpu_name_to_index_map.keys():
    index = g_cpu_name_to_index_map[name]
    val = jlink.ReadReg(index, buf)
    
def debug_write_named_register(name, buf):
  if name in g_cpu_name_to_index_map.keys():
    index = g_cpu_name_to_index_map[name]
    jlink.WriteReg(index, buf)

from com.microchip.mplab.mdbcore.JLink.gen4.Test.JLinkBPInfo import action
from com.microchip.mplab.mdbcore.JLink.gen4.Test.JLinkBPInfo import type as b_type
from com.microchip.mplab.mdbcore.JLink.gen4.Test.JLinkBPInfo import mode


def send_customer_bp_info(info):
  if info.bpAction == action.set:
    if info.bpType == b_type.program:
      m = 1
      if info.bpMode == mode.two:
        m = 2
      log.info("Setting PGM at 0x%x mode = %d" % (info.address, -16L | m))
      jlink.SetBPEx(info.address,  -16L | m )
    else:
      log.info("Setting DATA")
  else:
    log.info("Clearing breakpoint")
    jlink.ClearBPEx(-1)
    jlink.ClearDataEvent(-1)

def end_debug_session():
  global g_in_debug_mode
  g_in_debug_mode = False
  log.info("Debug:: End debug session")
