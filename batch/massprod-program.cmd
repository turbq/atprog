@echo off
IF "%~3" == "" (
  echo Not enough arguments
  echo "Usage massprod-program.bat <target> <clk> <path>"
  echo where: 
  echo target - target device
  echo clk - clock frequency in MHz
  echo path - path to binary firmware file
  echo Example: massprod-program.bat attiny13 "8 kHz" "..\binaries\program.elf"
  pause
  exit /b
)
Set _fGreen=[32m
Set _fRed=[31m
Set _RESET=[0m
set "target=%~1"
set "clk=%~2"
set "bin=%~3"

if /i ["%target%"] == ["atsam4sd32b"] (
  atprogram -t atmelice -i swd -cl "%clk%" -d %target% write -fs --values 0x02 program -c --verify -f %bin%
) else if ["%target%"] == ["attiny13"] (
  atprogram -t atmelice -i isp -cl "%clk%" -d %target% program -c -f %bin%
) else if ["%target%"] == ["atxmega256a3u"] (
  atprogram -t atmelice -i pdi -cl "%clk%" -d %target% program -c -f %bin%
) else (
  echo target not supported
  exit /b 1
)
