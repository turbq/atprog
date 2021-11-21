/**
 * \file
 *
 * \brief Component description for PMC
 *
 * Copyright (c) 2017 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2017-07-05T18:00:00Z */
#ifndef _SAMG51_PMC_COMPONENT_H_
#define _SAMG51_PMC_COMPONENT_H_
#define _SAMG51_PMC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMG_SAMG51 Power Management Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PMC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PMC_11116                      /**< (PMC) Module ID */
#define REV_PMC T                      /**< (PMC) Module revision */

/* -------- PMC_SCER : (PMC Offset: 0x00) (/W 32) System Clock Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK0:1;                    /**< bit:      8  Programmable Clock 0 Output Enable       */
    uint32_t PCK1:1;                    /**< bit:      9  Programmable Clock 1 Output Enable       */
    uint32_t PCK2:1;                    /**< bit:     10  Programmable Clock 2 Output Enable       */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK:3;                     /**< bit:  8..10  Programmable Clock 2 Output Enable       */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SCER_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SCER_OFFSET                     (0x00)                                        /**<  (PMC_SCER) System Clock Enable Register  Offset */

#define PMC_SCER_PCK0_Pos                   8                                              /**< (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                   (_U_(0x1) << PMC_SCER_PCK0_Pos)                /**< (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0                       PMC_SCER_PCK0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_PCK0_Msk instead */
#define PMC_SCER_PCK1_Pos                   9                                              /**< (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                   (_U_(0x1) << PMC_SCER_PCK1_Pos)                /**< (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1                       PMC_SCER_PCK1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_PCK1_Msk instead */
#define PMC_SCER_PCK2_Pos                   10                                             /**< (PMC_SCER) Programmable Clock 2 Output Enable Position */
#define PMC_SCER_PCK2_Msk                   (_U_(0x1) << PMC_SCER_PCK2_Pos)                /**< (PMC_SCER) Programmable Clock 2 Output Enable Mask */
#define PMC_SCER_PCK2                       PMC_SCER_PCK2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_PCK2_Msk instead */
#define PMC_SCER_MASK                       _U_(0x700)                                     /**< \deprecated (PMC_SCER) Register MASK  (Use PMC_SCER_Msk instead)  */
#define PMC_SCER_Msk                        _U_(0x700)                                     /**< (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                    8                                              /**< (PMC_SCER Position) Programmable Clock 2 Output Enable */
#define PMC_SCER_PCK_Msk                    (_U_(0x7) << PMC_SCER_PCK_Pos)                 /**< (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                 (PMC_SCER_PCK_Msk & ((value) << PMC_SCER_PCK_Pos))  

/* -------- PMC_SCDR : (PMC Offset: 0x04) (/W 32) System Clock Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK0:1;                    /**< bit:      8  Programmable Clock 0 Output Disable      */
    uint32_t PCK1:1;                    /**< bit:      9  Programmable Clock 1 Output Disable      */
    uint32_t PCK2:1;                    /**< bit:     10  Programmable Clock 2 Output Disable      */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK:3;                     /**< bit:  8..10  Programmable Clock 2 Output Disable      */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SCDR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SCDR_OFFSET                     (0x04)                                        /**<  (PMC_SCDR) System Clock Disable Register  Offset */

#define PMC_SCDR_PCK0_Pos                   8                                              /**< (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                   (_U_(0x1) << PMC_SCDR_PCK0_Pos)                /**< (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0                       PMC_SCDR_PCK0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_PCK0_Msk instead */
#define PMC_SCDR_PCK1_Pos                   9                                              /**< (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                   (_U_(0x1) << PMC_SCDR_PCK1_Pos)                /**< (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1                       PMC_SCDR_PCK1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_PCK1_Msk instead */
#define PMC_SCDR_PCK2_Pos                   10                                             /**< (PMC_SCDR) Programmable Clock 2 Output Disable Position */
#define PMC_SCDR_PCK2_Msk                   (_U_(0x1) << PMC_SCDR_PCK2_Pos)                /**< (PMC_SCDR) Programmable Clock 2 Output Disable Mask */
#define PMC_SCDR_PCK2                       PMC_SCDR_PCK2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_PCK2_Msk instead */
#define PMC_SCDR_MASK                       _U_(0x700)                                     /**< \deprecated (PMC_SCDR) Register MASK  (Use PMC_SCDR_Msk instead)  */
#define PMC_SCDR_Msk                        _U_(0x700)                                     /**< (PMC_SCDR) Register Mask  */

#define PMC_SCDR_PCK_Pos                    8                                              /**< (PMC_SCDR Position) Programmable Clock 2 Output Disable */
#define PMC_SCDR_PCK_Msk                    (_U_(0x7) << PMC_SCDR_PCK_Pos)                 /**< (PMC_SCDR Mask) PCK */
#define PMC_SCDR_PCK(value)                 (PMC_SCDR_PCK_Msk & ((value) << PMC_SCDR_PCK_Pos))  

/* -------- PMC_SCSR : (PMC Offset: 0x08) (R/ 32) System Clock Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK0:1;                    /**< bit:      8  Programmable Clock 0 Output Status       */
    uint32_t PCK1:1;                    /**< bit:      9  Programmable Clock 1 Output Status       */
    uint32_t PCK2:1;                    /**< bit:     10  Programmable Clock 2 Output Status       */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK:3;                     /**< bit:  8..10  Programmable Clock 2 Output Status       */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SCSR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SCSR_OFFSET                     (0x08)                                        /**<  (PMC_SCSR) System Clock Status Register  Offset */

#define PMC_SCSR_PCK0_Pos                   8                                              /**< (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                   (_U_(0x1) << PMC_SCSR_PCK0_Pos)                /**< (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0                       PMC_SCSR_PCK0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_PCK0_Msk instead */
#define PMC_SCSR_PCK1_Pos                   9                                              /**< (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                   (_U_(0x1) << PMC_SCSR_PCK1_Pos)                /**< (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1                       PMC_SCSR_PCK1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_PCK1_Msk instead */
#define PMC_SCSR_PCK2_Pos                   10                                             /**< (PMC_SCSR) Programmable Clock 2 Output Status Position */
#define PMC_SCSR_PCK2_Msk                   (_U_(0x1) << PMC_SCSR_PCK2_Pos)                /**< (PMC_SCSR) Programmable Clock 2 Output Status Mask */
#define PMC_SCSR_PCK2                       PMC_SCSR_PCK2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_PCK2_Msk instead */
#define PMC_SCSR_MASK                       _U_(0x700)                                     /**< \deprecated (PMC_SCSR) Register MASK  (Use PMC_SCSR_Msk instead)  */
#define PMC_SCSR_Msk                        _U_(0x700)                                     /**< (PMC_SCSR) Register Mask  */

#define PMC_SCSR_PCK_Pos                    8                                              /**< (PMC_SCSR Position) Programmable Clock 2 Output Status */
#define PMC_SCSR_PCK_Msk                    (_U_(0x7) << PMC_SCSR_PCK_Pos)                 /**< (PMC_SCSR Mask) PCK */
#define PMC_SCSR_PCK(value)                 (PMC_SCSR_PCK_Msk & ((value) << PMC_SCSR_PCK_Pos))  

/* -------- PMC_PCER0 : (PMC Offset: 0x10) (/W 32) Peripheral Clock Enable Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PID8:1;                    /**< bit:      8  Peripheral Clock 8 Enable                */
    uint32_t PID9:1;                    /**< bit:      9  Peripheral Clock 9 Enable                */
    uint32_t PID10:1;                   /**< bit:     10  Peripheral Clock 10 Enable               */
    uint32_t PID11:1;                   /**< bit:     11  Peripheral Clock 11 Enable               */
    uint32_t PID12:1;                   /**< bit:     12  Peripheral Clock 12 Enable               */
    uint32_t PID13:1;                   /**< bit:     13  Peripheral Clock 13 Enable               */
    uint32_t PID14:1;                   /**< bit:     14  Peripheral Clock 14 Enable               */
    uint32_t PID15:1;                   /**< bit:     15  Peripheral Clock 15 Enable               */
    uint32_t PID16:1;                   /**< bit:     16  Peripheral Clock 16 Enable               */
    uint32_t PID17:1;                   /**< bit:     17  Peripheral Clock 17 Enable               */
    uint32_t PID18:1;                   /**< bit:     18  Peripheral Clock 18 Enable               */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral Clock 19 Enable               */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral Clock 20 Enable               */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral Clock 21 Enable               */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral Clock 22 Enable               */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral Clock 23 Enable               */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral Clock 24 Enable               */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral Clock 25 Enable               */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral Clock 26 Enable               */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral Clock 27 Enable               */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral Clock 28 Enable               */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral Clock 29 Enable               */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PID:22;                    /**< bit:  8..29  Peripheral Clock 29 Enable               */
    uint32_t :2;                        /**< bit: 30..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCER0_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCER0_OFFSET                    (0x10)                                        /**<  (PMC_PCER0) Peripheral Clock Enable Register 0  Offset */

#define PMC_PCER0_PID8_Pos                  8                                              /**< (PMC_PCER0) Peripheral Clock 8 Enable Position */
#define PMC_PCER0_PID8_Msk                  (_U_(0x1) << PMC_PCER0_PID8_Pos)               /**< (PMC_PCER0) Peripheral Clock 8 Enable Mask */
#define PMC_PCER0_PID8                      PMC_PCER0_PID8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID8_Msk instead */
#define PMC_PCER0_PID9_Pos                  9                                              /**< (PMC_PCER0) Peripheral Clock 9 Enable Position */
#define PMC_PCER0_PID9_Msk                  (_U_(0x1) << PMC_PCER0_PID9_Pos)               /**< (PMC_PCER0) Peripheral Clock 9 Enable Mask */
#define PMC_PCER0_PID9                      PMC_PCER0_PID9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID9_Msk instead */
#define PMC_PCER0_PID10_Pos                 10                                             /**< (PMC_PCER0) Peripheral Clock 10 Enable Position */
#define PMC_PCER0_PID10_Msk                 (_U_(0x1) << PMC_PCER0_PID10_Pos)              /**< (PMC_PCER0) Peripheral Clock 10 Enable Mask */
#define PMC_PCER0_PID10                     PMC_PCER0_PID10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID10_Msk instead */
#define PMC_PCER0_PID11_Pos                 11                                             /**< (PMC_PCER0) Peripheral Clock 11 Enable Position */
#define PMC_PCER0_PID11_Msk                 (_U_(0x1) << PMC_PCER0_PID11_Pos)              /**< (PMC_PCER0) Peripheral Clock 11 Enable Mask */
#define PMC_PCER0_PID11                     PMC_PCER0_PID11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID11_Msk instead */
#define PMC_PCER0_PID12_Pos                 12                                             /**< (PMC_PCER0) Peripheral Clock 12 Enable Position */
#define PMC_PCER0_PID12_Msk                 (_U_(0x1) << PMC_PCER0_PID12_Pos)              /**< (PMC_PCER0) Peripheral Clock 12 Enable Mask */
#define PMC_PCER0_PID12                     PMC_PCER0_PID12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID12_Msk instead */
#define PMC_PCER0_PID13_Pos                 13                                             /**< (PMC_PCER0) Peripheral Clock 13 Enable Position */
#define PMC_PCER0_PID13_Msk                 (_U_(0x1) << PMC_PCER0_PID13_Pos)              /**< (PMC_PCER0) Peripheral Clock 13 Enable Mask */
#define PMC_PCER0_PID13                     PMC_PCER0_PID13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID13_Msk instead */
#define PMC_PCER0_PID14_Pos                 14                                             /**< (PMC_PCER0) Peripheral Clock 14 Enable Position */
#define PMC_PCER0_PID14_Msk                 (_U_(0x1) << PMC_PCER0_PID14_Pos)              /**< (PMC_PCER0) Peripheral Clock 14 Enable Mask */
#define PMC_PCER0_PID14                     PMC_PCER0_PID14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID14_Msk instead */
#define PMC_PCER0_PID15_Pos                 15                                             /**< (PMC_PCER0) Peripheral Clock 15 Enable Position */
#define PMC_PCER0_PID15_Msk                 (_U_(0x1) << PMC_PCER0_PID15_Pos)              /**< (PMC_PCER0) Peripheral Clock 15 Enable Mask */
#define PMC_PCER0_PID15                     PMC_PCER0_PID15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID15_Msk instead */
#define PMC_PCER0_PID16_Pos                 16                                             /**< (PMC_PCER0) Peripheral Clock 16 Enable Position */
#define PMC_PCER0_PID16_Msk                 (_U_(0x1) << PMC_PCER0_PID16_Pos)              /**< (PMC_PCER0) Peripheral Clock 16 Enable Mask */
#define PMC_PCER0_PID16                     PMC_PCER0_PID16_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID16_Msk instead */
#define PMC_PCER0_PID17_Pos                 17                                             /**< (PMC_PCER0) Peripheral Clock 17 Enable Position */
#define PMC_PCER0_PID17_Msk                 (_U_(0x1) << PMC_PCER0_PID17_Pos)              /**< (PMC_PCER0) Peripheral Clock 17 Enable Mask */
#define PMC_PCER0_PID17                     PMC_PCER0_PID17_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID17_Msk instead */
#define PMC_PCER0_PID18_Pos                 18                                             /**< (PMC_PCER0) Peripheral Clock 18 Enable Position */
#define PMC_PCER0_PID18_Msk                 (_U_(0x1) << PMC_PCER0_PID18_Pos)              /**< (PMC_PCER0) Peripheral Clock 18 Enable Mask */
#define PMC_PCER0_PID18                     PMC_PCER0_PID18_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID18_Msk instead */
#define PMC_PCER0_PID19_Pos                 19                                             /**< (PMC_PCER0) Peripheral Clock 19 Enable Position */
#define PMC_PCER0_PID19_Msk                 (_U_(0x1) << PMC_PCER0_PID19_Pos)              /**< (PMC_PCER0) Peripheral Clock 19 Enable Mask */
#define PMC_PCER0_PID19                     PMC_PCER0_PID19_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID19_Msk instead */
#define PMC_PCER0_PID20_Pos                 20                                             /**< (PMC_PCER0) Peripheral Clock 20 Enable Position */
#define PMC_PCER0_PID20_Msk                 (_U_(0x1) << PMC_PCER0_PID20_Pos)              /**< (PMC_PCER0) Peripheral Clock 20 Enable Mask */
#define PMC_PCER0_PID20                     PMC_PCER0_PID20_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID20_Msk instead */
#define PMC_PCER0_PID21_Pos                 21                                             /**< (PMC_PCER0) Peripheral Clock 21 Enable Position */
#define PMC_PCER0_PID21_Msk                 (_U_(0x1) << PMC_PCER0_PID21_Pos)              /**< (PMC_PCER0) Peripheral Clock 21 Enable Mask */
#define PMC_PCER0_PID21                     PMC_PCER0_PID21_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID21_Msk instead */
#define PMC_PCER0_PID22_Pos                 22                                             /**< (PMC_PCER0) Peripheral Clock 22 Enable Position */
#define PMC_PCER0_PID22_Msk                 (_U_(0x1) << PMC_PCER0_PID22_Pos)              /**< (PMC_PCER0) Peripheral Clock 22 Enable Mask */
#define PMC_PCER0_PID22                     PMC_PCER0_PID22_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID22_Msk instead */
#define PMC_PCER0_PID23_Pos                 23                                             /**< (PMC_PCER0) Peripheral Clock 23 Enable Position */
#define PMC_PCER0_PID23_Msk                 (_U_(0x1) << PMC_PCER0_PID23_Pos)              /**< (PMC_PCER0) Peripheral Clock 23 Enable Mask */
#define PMC_PCER0_PID23                     PMC_PCER0_PID23_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID23_Msk instead */
#define PMC_PCER0_PID24_Pos                 24                                             /**< (PMC_PCER0) Peripheral Clock 24 Enable Position */
#define PMC_PCER0_PID24_Msk                 (_U_(0x1) << PMC_PCER0_PID24_Pos)              /**< (PMC_PCER0) Peripheral Clock 24 Enable Mask */
#define PMC_PCER0_PID24                     PMC_PCER0_PID24_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID24_Msk instead */
#define PMC_PCER0_PID25_Pos                 25                                             /**< (PMC_PCER0) Peripheral Clock 25 Enable Position */
#define PMC_PCER0_PID25_Msk                 (_U_(0x1) << PMC_PCER0_PID25_Pos)              /**< (PMC_PCER0) Peripheral Clock 25 Enable Mask */
#define PMC_PCER0_PID25                     PMC_PCER0_PID25_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID25_Msk instead */
#define PMC_PCER0_PID26_Pos                 26                                             /**< (PMC_PCER0) Peripheral Clock 26 Enable Position */
#define PMC_PCER0_PID26_Msk                 (_U_(0x1) << PMC_PCER0_PID26_Pos)              /**< (PMC_PCER0) Peripheral Clock 26 Enable Mask */
#define PMC_PCER0_PID26                     PMC_PCER0_PID26_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID26_Msk instead */
#define PMC_PCER0_PID27_Pos                 27                                             /**< (PMC_PCER0) Peripheral Clock 27 Enable Position */
#define PMC_PCER0_PID27_Msk                 (_U_(0x1) << PMC_PCER0_PID27_Pos)              /**< (PMC_PCER0) Peripheral Clock 27 Enable Mask */
#define PMC_PCER0_PID27                     PMC_PCER0_PID27_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID27_Msk instead */
#define PMC_PCER0_PID28_Pos                 28                                             /**< (PMC_PCER0) Peripheral Clock 28 Enable Position */
#define PMC_PCER0_PID28_Msk                 (_U_(0x1) << PMC_PCER0_PID28_Pos)              /**< (PMC_PCER0) Peripheral Clock 28 Enable Mask */
#define PMC_PCER0_PID28                     PMC_PCER0_PID28_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID28_Msk instead */
#define PMC_PCER0_PID29_Pos                 29                                             /**< (PMC_PCER0) Peripheral Clock 29 Enable Position */
#define PMC_PCER0_PID29_Msk                 (_U_(0x1) << PMC_PCER0_PID29_Pos)              /**< (PMC_PCER0) Peripheral Clock 29 Enable Mask */
#define PMC_PCER0_PID29                     PMC_PCER0_PID29_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID29_Msk instead */
#define PMC_PCER0_MASK                      _U_(0x3FFFFF00)                                /**< \deprecated (PMC_PCER0) Register MASK  (Use PMC_PCER0_Msk instead)  */
#define PMC_PCER0_Msk                       _U_(0x3FFFFF00)                                /**< (PMC_PCER0) Register Mask  */

#define PMC_PCER0_PID_Pos                   8                                              /**< (PMC_PCER0 Position) Peripheral Clock 29 Enable */
#define PMC_PCER0_PID_Msk                   (_U_(0x3FFFFF) << PMC_PCER0_PID_Pos)           /**< (PMC_PCER0 Mask) PID */
#define PMC_PCER0_PID(value)                (PMC_PCER0_PID_Msk & ((value) << PMC_PCER0_PID_Pos))  

/* -------- PMC_PCDR0 : (PMC Offset: 0x14) (/W 32) Peripheral Clock Disable Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PID8:1;                    /**< bit:      8  Peripheral Clock 8 Disable               */
    uint32_t PID9:1;                    /**< bit:      9  Peripheral Clock 9 Disable               */
    uint32_t PID10:1;                   /**< bit:     10  Peripheral Clock 10 Disable              */
    uint32_t PID11:1;                   /**< bit:     11  Peripheral Clock 11 Disable              */
    uint32_t PID12:1;                   /**< bit:     12  Peripheral Clock 12 Disable              */
    uint32_t PID13:1;                   /**< bit:     13  Peripheral Clock 13 Disable              */
    uint32_t PID14:1;                   /**< bit:     14  Peripheral Clock 14 Disable              */
    uint32_t PID15:1;                   /**< bit:     15  Peripheral Clock 15 Disable              */
    uint32_t PID16:1;                   /**< bit:     16  Peripheral Clock 16 Disable              */
    uint32_t PID17:1;                   /**< bit:     17  Peripheral Clock 17 Disable              */
    uint32_t PID18:1;                   /**< bit:     18  Peripheral Clock 18 Disable              */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral Clock 19 Disable              */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral Clock 20 Disable              */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral Clock 21 Disable              */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral Clock 22 Disable              */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral Clock 23 Disable              */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral Clock 24 Disable              */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral Clock 25 Disable              */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral Clock 26 Disable              */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral Clock 27 Disable              */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral Clock 28 Disable              */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral Clock 29 Disable              */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PID:22;                    /**< bit:  8..29  Peripheral Clock 29 Disable              */
    uint32_t :2;                        /**< bit: 30..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCDR0_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCDR0_OFFSET                    (0x14)                                        /**<  (PMC_PCDR0) Peripheral Clock Disable Register 0  Offset */

#define PMC_PCDR0_PID8_Pos                  8                                              /**< (PMC_PCDR0) Peripheral Clock 8 Disable Position */
#define PMC_PCDR0_PID8_Msk                  (_U_(0x1) << PMC_PCDR0_PID8_Pos)               /**< (PMC_PCDR0) Peripheral Clock 8 Disable Mask */
#define PMC_PCDR0_PID8                      PMC_PCDR0_PID8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID8_Msk instead */
#define PMC_PCDR0_PID9_Pos                  9                                              /**< (PMC_PCDR0) Peripheral Clock 9 Disable Position */
#define PMC_PCDR0_PID9_Msk                  (_U_(0x1) << PMC_PCDR0_PID9_Pos)               /**< (PMC_PCDR0) Peripheral Clock 9 Disable Mask */
#define PMC_PCDR0_PID9                      PMC_PCDR0_PID9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID9_Msk instead */
#define PMC_PCDR0_PID10_Pos                 10                                             /**< (PMC_PCDR0) Peripheral Clock 10 Disable Position */
#define PMC_PCDR0_PID10_Msk                 (_U_(0x1) << PMC_PCDR0_PID10_Pos)              /**< (PMC_PCDR0) Peripheral Clock 10 Disable Mask */
#define PMC_PCDR0_PID10                     PMC_PCDR0_PID10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID10_Msk instead */
#define PMC_PCDR0_PID11_Pos                 11                                             /**< (PMC_PCDR0) Peripheral Clock 11 Disable Position */
#define PMC_PCDR0_PID11_Msk                 (_U_(0x1) << PMC_PCDR0_PID11_Pos)              /**< (PMC_PCDR0) Peripheral Clock 11 Disable Mask */
#define PMC_PCDR0_PID11                     PMC_PCDR0_PID11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID11_Msk instead */
#define PMC_PCDR0_PID12_Pos                 12                                             /**< (PMC_PCDR0) Peripheral Clock 12 Disable Position */
#define PMC_PCDR0_PID12_Msk                 (_U_(0x1) << PMC_PCDR0_PID12_Pos)              /**< (PMC_PCDR0) Peripheral Clock 12 Disable Mask */
#define PMC_PCDR0_PID12                     PMC_PCDR0_PID12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID12_Msk instead */
#define PMC_PCDR0_PID13_Pos                 13                                             /**< (PMC_PCDR0) Peripheral Clock 13 Disable Position */
#define PMC_PCDR0_PID13_Msk                 (_U_(0x1) << PMC_PCDR0_PID13_Pos)              /**< (PMC_PCDR0) Peripheral Clock 13 Disable Mask */
#define PMC_PCDR0_PID13                     PMC_PCDR0_PID13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID13_Msk instead */
#define PMC_PCDR0_PID14_Pos                 14                                             /**< (PMC_PCDR0) Peripheral Clock 14 Disable Position */
#define PMC_PCDR0_PID14_Msk                 (_U_(0x1) << PMC_PCDR0_PID14_Pos)              /**< (PMC_PCDR0) Peripheral Clock 14 Disable Mask */
#define PMC_PCDR0_PID14                     PMC_PCDR0_PID14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID14_Msk instead */
#define PMC_PCDR0_PID15_Pos                 15                                             /**< (PMC_PCDR0) Peripheral Clock 15 Disable Position */
#define PMC_PCDR0_PID15_Msk                 (_U_(0x1) << PMC_PCDR0_PID15_Pos)              /**< (PMC_PCDR0) Peripheral Clock 15 Disable Mask */
#define PMC_PCDR0_PID15                     PMC_PCDR0_PID15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID15_Msk instead */
#define PMC_PCDR0_PID16_Pos                 16                                             /**< (PMC_PCDR0) Peripheral Clock 16 Disable Position */
#define PMC_PCDR0_PID16_Msk                 (_U_(0x1) << PMC_PCDR0_PID16_Pos)              /**< (PMC_PCDR0) Peripheral Clock 16 Disable Mask */
#define PMC_PCDR0_PID16                     PMC_PCDR0_PID16_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID16_Msk instead */
#define PMC_PCDR0_PID17_Pos                 17                                             /**< (PMC_PCDR0) Peripheral Clock 17 Disable Position */
#define PMC_PCDR0_PID17_Msk                 (_U_(0x1) << PMC_PCDR0_PID17_Pos)              /**< (PMC_PCDR0) Peripheral Clock 17 Disable Mask */
#define PMC_PCDR0_PID17                     PMC_PCDR0_PID17_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID17_Msk instead */
#define PMC_PCDR0_PID18_Pos                 18                                             /**< (PMC_PCDR0) Peripheral Clock 18 Disable Position */
#define PMC_PCDR0_PID18_Msk                 (_U_(0x1) << PMC_PCDR0_PID18_Pos)              /**< (PMC_PCDR0) Peripheral Clock 18 Disable Mask */
#define PMC_PCDR0_PID18                     PMC_PCDR0_PID18_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID18_Msk instead */
#define PMC_PCDR0_PID19_Pos                 19                                             /**< (PMC_PCDR0) Peripheral Clock 19 Disable Position */
#define PMC_PCDR0_PID19_Msk                 (_U_(0x1) << PMC_PCDR0_PID19_Pos)              /**< (PMC_PCDR0) Peripheral Clock 19 Disable Mask */
#define PMC_PCDR0_PID19                     PMC_PCDR0_PID19_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID19_Msk instead */
#define PMC_PCDR0_PID20_Pos                 20                                             /**< (PMC_PCDR0) Peripheral Clock 20 Disable Position */
#define PMC_PCDR0_PID20_Msk                 (_U_(0x1) << PMC_PCDR0_PID20_Pos)              /**< (PMC_PCDR0) Peripheral Clock 20 Disable Mask */
#define PMC_PCDR0_PID20                     PMC_PCDR0_PID20_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID20_Msk instead */
#define PMC_PCDR0_PID21_Pos                 21                                             /**< (PMC_PCDR0) Peripheral Clock 21 Disable Position */
#define PMC_PCDR0_PID21_Msk                 (_U_(0x1) << PMC_PCDR0_PID21_Pos)              /**< (PMC_PCDR0) Peripheral Clock 21 Disable Mask */
#define PMC_PCDR0_PID21                     PMC_PCDR0_PID21_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID21_Msk instead */
#define PMC_PCDR0_PID22_Pos                 22                                             /**< (PMC_PCDR0) Peripheral Clock 22 Disable Position */
#define PMC_PCDR0_PID22_Msk                 (_U_(0x1) << PMC_PCDR0_PID22_Pos)              /**< (PMC_PCDR0) Peripheral Clock 22 Disable Mask */
#define PMC_PCDR0_PID22                     PMC_PCDR0_PID22_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID22_Msk instead */
#define PMC_PCDR0_PID23_Pos                 23                                             /**< (PMC_PCDR0) Peripheral Clock 23 Disable Position */
#define PMC_PCDR0_PID23_Msk                 (_U_(0x1) << PMC_PCDR0_PID23_Pos)              /**< (PMC_PCDR0) Peripheral Clock 23 Disable Mask */
#define PMC_PCDR0_PID23                     PMC_PCDR0_PID23_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID23_Msk instead */
#define PMC_PCDR0_PID24_Pos                 24                                             /**< (PMC_PCDR0) Peripheral Clock 24 Disable Position */
#define PMC_PCDR0_PID24_Msk                 (_U_(0x1) << PMC_PCDR0_PID24_Pos)              /**< (PMC_PCDR0) Peripheral Clock 24 Disable Mask */
#define PMC_PCDR0_PID24                     PMC_PCDR0_PID24_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID24_Msk instead */
#define PMC_PCDR0_PID25_Pos                 25                                             /**< (PMC_PCDR0) Peripheral Clock 25 Disable Position */
#define PMC_PCDR0_PID25_Msk                 (_U_(0x1) << PMC_PCDR0_PID25_Pos)              /**< (PMC_PCDR0) Peripheral Clock 25 Disable Mask */
#define PMC_PCDR0_PID25                     PMC_PCDR0_PID25_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID25_Msk instead */
#define PMC_PCDR0_PID26_Pos                 26                                             /**< (PMC_PCDR0) Peripheral Clock 26 Disable Position */
#define PMC_PCDR0_PID26_Msk                 (_U_(0x1) << PMC_PCDR0_PID26_Pos)              /**< (PMC_PCDR0) Peripheral Clock 26 Disable Mask */
#define PMC_PCDR0_PID26                     PMC_PCDR0_PID26_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID26_Msk instead */
#define PMC_PCDR0_PID27_Pos                 27                                             /**< (PMC_PCDR0) Peripheral Clock 27 Disable Position */
#define PMC_PCDR0_PID27_Msk                 (_U_(0x1) << PMC_PCDR0_PID27_Pos)              /**< (PMC_PCDR0) Peripheral Clock 27 Disable Mask */
#define PMC_PCDR0_PID27                     PMC_PCDR0_PID27_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID27_Msk instead */
#define PMC_PCDR0_PID28_Pos                 28                                             /**< (PMC_PCDR0) Peripheral Clock 28 Disable Position */
#define PMC_PCDR0_PID28_Msk                 (_U_(0x1) << PMC_PCDR0_PID28_Pos)              /**< (PMC_PCDR0) Peripheral Clock 28 Disable Mask */
#define PMC_PCDR0_PID28                     PMC_PCDR0_PID28_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID28_Msk instead */
#define PMC_PCDR0_PID29_Pos                 29                                             /**< (PMC_PCDR0) Peripheral Clock 29 Disable Position */
#define PMC_PCDR0_PID29_Msk                 (_U_(0x1) << PMC_PCDR0_PID29_Pos)              /**< (PMC_PCDR0) Peripheral Clock 29 Disable Mask */
#define PMC_PCDR0_PID29                     PMC_PCDR0_PID29_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID29_Msk instead */
#define PMC_PCDR0_MASK                      _U_(0x3FFFFF00)                                /**< \deprecated (PMC_PCDR0) Register MASK  (Use PMC_PCDR0_Msk instead)  */
#define PMC_PCDR0_Msk                       _U_(0x3FFFFF00)                                /**< (PMC_PCDR0) Register Mask  */

#define PMC_PCDR0_PID_Pos                   8                                              /**< (PMC_PCDR0 Position) Peripheral Clock 29 Disable */
#define PMC_PCDR0_PID_Msk                   (_U_(0x3FFFFF) << PMC_PCDR0_PID_Pos)           /**< (PMC_PCDR0 Mask) PID */
#define PMC_PCDR0_PID(value)                (PMC_PCDR0_PID_Msk & ((value) << PMC_PCDR0_PID_Pos))  

/* -------- PMC_PCSR0 : (PMC Offset: 0x18) (R/ 32) Peripheral Clock Status Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PID8:1;                    /**< bit:      8  Peripheral Clock 8 Status                */
    uint32_t PID9:1;                    /**< bit:      9  Peripheral Clock 9 Status                */
    uint32_t PID10:1;                   /**< bit:     10  Peripheral Clock 10 Status               */
    uint32_t PID11:1;                   /**< bit:     11  Peripheral Clock 11 Status               */
    uint32_t PID12:1;                   /**< bit:     12  Peripheral Clock 12 Status               */
    uint32_t PID13:1;                   /**< bit:     13  Peripheral Clock 13 Status               */
    uint32_t PID14:1;                   /**< bit:     14  Peripheral Clock 14 Status               */
    uint32_t PID15:1;                   /**< bit:     15  Peripheral Clock 15 Status               */
    uint32_t PID16:1;                   /**< bit:     16  Peripheral Clock 16 Status               */
    uint32_t PID17:1;                   /**< bit:     17  Peripheral Clock 17 Status               */
    uint32_t PID18:1;                   /**< bit:     18  Peripheral Clock 18 Status               */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral Clock 19 Status               */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral Clock 20 Status               */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral Clock 21 Status               */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral Clock 22 Status               */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral Clock 23 Status               */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral Clock 24 Status               */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral Clock 25 Status               */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral Clock 26 Status               */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral Clock 27 Status               */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral Clock 28 Status               */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral Clock 29 Status               */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PID:22;                    /**< bit:  8..29  Peripheral Clock 29 Status               */
    uint32_t :2;                        /**< bit: 30..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCSR0_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCSR0_OFFSET                    (0x18)                                        /**<  (PMC_PCSR0) Peripheral Clock Status Register 0  Offset */

#define PMC_PCSR0_PID8_Pos                  8                                              /**< (PMC_PCSR0) Peripheral Clock 8 Status Position */
#define PMC_PCSR0_PID8_Msk                  (_U_(0x1) << PMC_PCSR0_PID8_Pos)               /**< (PMC_PCSR0) Peripheral Clock 8 Status Mask */
#define PMC_PCSR0_PID8                      PMC_PCSR0_PID8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID8_Msk instead */
#define PMC_PCSR0_PID9_Pos                  9                                              /**< (PMC_PCSR0) Peripheral Clock 9 Status Position */
#define PMC_PCSR0_PID9_Msk                  (_U_(0x1) << PMC_PCSR0_PID9_Pos)               /**< (PMC_PCSR0) Peripheral Clock 9 Status Mask */
#define PMC_PCSR0_PID9                      PMC_PCSR0_PID9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID9_Msk instead */
#define PMC_PCSR0_PID10_Pos                 10                                             /**< (PMC_PCSR0) Peripheral Clock 10 Status Position */
#define PMC_PCSR0_PID10_Msk                 (_U_(0x1) << PMC_PCSR0_PID10_Pos)              /**< (PMC_PCSR0) Peripheral Clock 10 Status Mask */
#define PMC_PCSR0_PID10                     PMC_PCSR0_PID10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID10_Msk instead */
#define PMC_PCSR0_PID11_Pos                 11                                             /**< (PMC_PCSR0) Peripheral Clock 11 Status Position */
#define PMC_PCSR0_PID11_Msk                 (_U_(0x1) << PMC_PCSR0_PID11_Pos)              /**< (PMC_PCSR0) Peripheral Clock 11 Status Mask */
#define PMC_PCSR0_PID11                     PMC_PCSR0_PID11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID11_Msk instead */
#define PMC_PCSR0_PID12_Pos                 12                                             /**< (PMC_PCSR0) Peripheral Clock 12 Status Position */
#define PMC_PCSR0_PID12_Msk                 (_U_(0x1) << PMC_PCSR0_PID12_Pos)              /**< (PMC_PCSR0) Peripheral Clock 12 Status Mask */
#define PMC_PCSR0_PID12                     PMC_PCSR0_PID12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID12_Msk instead */
#define PMC_PCSR0_PID13_Pos                 13                                             /**< (PMC_PCSR0) Peripheral Clock 13 Status Position */
#define PMC_PCSR0_PID13_Msk                 (_U_(0x1) << PMC_PCSR0_PID13_Pos)              /**< (PMC_PCSR0) Peripheral Clock 13 Status Mask */
#define PMC_PCSR0_PID13                     PMC_PCSR0_PID13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID13_Msk instead */
#define PMC_PCSR0_PID14_Pos                 14                                             /**< (PMC_PCSR0) Peripheral Clock 14 Status Position */
#define PMC_PCSR0_PID14_Msk                 (_U_(0x1) << PMC_PCSR0_PID14_Pos)              /**< (PMC_PCSR0) Peripheral Clock 14 Status Mask */
#define PMC_PCSR0_PID14                     PMC_PCSR0_PID14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID14_Msk instead */
#define PMC_PCSR0_PID15_Pos                 15                                             /**< (PMC_PCSR0) Peripheral Clock 15 Status Position */
#define PMC_PCSR0_PID15_Msk                 (_U_(0x1) << PMC_PCSR0_PID15_Pos)              /**< (PMC_PCSR0) Peripheral Clock 15 Status Mask */
#define PMC_PCSR0_PID15                     PMC_PCSR0_PID15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID15_Msk instead */
#define PMC_PCSR0_PID16_Pos                 16                                             /**< (PMC_PCSR0) Peripheral Clock 16 Status Position */
#define PMC_PCSR0_PID16_Msk                 (_U_(0x1) << PMC_PCSR0_PID16_Pos)              /**< (PMC_PCSR0) Peripheral Clock 16 Status Mask */
#define PMC_PCSR0_PID16                     PMC_PCSR0_PID16_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID16_Msk instead */
#define PMC_PCSR0_PID17_Pos                 17                                             /**< (PMC_PCSR0) Peripheral Clock 17 Status Position */
#define PMC_PCSR0_PID17_Msk                 (_U_(0x1) << PMC_PCSR0_PID17_Pos)              /**< (PMC_PCSR0) Peripheral Clock 17 Status Mask */
#define PMC_PCSR0_PID17                     PMC_PCSR0_PID17_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID17_Msk instead */
#define PMC_PCSR0_PID18_Pos                 18                                             /**< (PMC_PCSR0) Peripheral Clock 18 Status Position */
#define PMC_PCSR0_PID18_Msk                 (_U_(0x1) << PMC_PCSR0_PID18_Pos)              /**< (PMC_PCSR0) Peripheral Clock 18 Status Mask */
#define PMC_PCSR0_PID18                     PMC_PCSR0_PID18_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID18_Msk instead */
#define PMC_PCSR0_PID19_Pos                 19                                             /**< (PMC_PCSR0) Peripheral Clock 19 Status Position */
#define PMC_PCSR0_PID19_Msk                 (_U_(0x1) << PMC_PCSR0_PID19_Pos)              /**< (PMC_PCSR0) Peripheral Clock 19 Status Mask */
#define PMC_PCSR0_PID19                     PMC_PCSR0_PID19_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID19_Msk instead */
#define PMC_PCSR0_PID20_Pos                 20                                             /**< (PMC_PCSR0) Peripheral Clock 20 Status Position */
#define PMC_PCSR0_PID20_Msk                 (_U_(0x1) << PMC_PCSR0_PID20_Pos)              /**< (PMC_PCSR0) Peripheral Clock 20 Status Mask */
#define PMC_PCSR0_PID20                     PMC_PCSR0_PID20_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID20_Msk instead */
#define PMC_PCSR0_PID21_Pos                 21                                             /**< (PMC_PCSR0) Peripheral Clock 21 Status Position */
#define PMC_PCSR0_PID21_Msk                 (_U_(0x1) << PMC_PCSR0_PID21_Pos)              /**< (PMC_PCSR0) Peripheral Clock 21 Status Mask */
#define PMC_PCSR0_PID21                     PMC_PCSR0_PID21_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID21_Msk instead */
#define PMC_PCSR0_PID22_Pos                 22                                             /**< (PMC_PCSR0) Peripheral Clock 22 Status Position */
#define PMC_PCSR0_PID22_Msk                 (_U_(0x1) << PMC_PCSR0_PID22_Pos)              /**< (PMC_PCSR0) Peripheral Clock 22 Status Mask */
#define PMC_PCSR0_PID22                     PMC_PCSR0_PID22_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID22_Msk instead */
#define PMC_PCSR0_PID23_Pos                 23                                             /**< (PMC_PCSR0) Peripheral Clock 23 Status Position */
#define PMC_PCSR0_PID23_Msk                 (_U_(0x1) << PMC_PCSR0_PID23_Pos)              /**< (PMC_PCSR0) Peripheral Clock 23 Status Mask */
#define PMC_PCSR0_PID23                     PMC_PCSR0_PID23_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID23_Msk instead */
#define PMC_PCSR0_PID24_Pos                 24                                             /**< (PMC_PCSR0) Peripheral Clock 24 Status Position */
#define PMC_PCSR0_PID24_Msk                 (_U_(0x1) << PMC_PCSR0_PID24_Pos)              /**< (PMC_PCSR0) Peripheral Clock 24 Status Mask */
#define PMC_PCSR0_PID24                     PMC_PCSR0_PID24_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID24_Msk instead */
#define PMC_PCSR0_PID25_Pos                 25                                             /**< (PMC_PCSR0) Peripheral Clock 25 Status Position */
#define PMC_PCSR0_PID25_Msk                 (_U_(0x1) << PMC_PCSR0_PID25_Pos)              /**< (PMC_PCSR0) Peripheral Clock 25 Status Mask */
#define PMC_PCSR0_PID25                     PMC_PCSR0_PID25_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID25_Msk instead */
#define PMC_PCSR0_PID26_Pos                 26                                             /**< (PMC_PCSR0) Peripheral Clock 26 Status Position */
#define PMC_PCSR0_PID26_Msk                 (_U_(0x1) << PMC_PCSR0_PID26_Pos)              /**< (PMC_PCSR0) Peripheral Clock 26 Status Mask */
#define PMC_PCSR0_PID26                     PMC_PCSR0_PID26_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID26_Msk instead */
#define PMC_PCSR0_PID27_Pos                 27                                             /**< (PMC_PCSR0) Peripheral Clock 27 Status Position */
#define PMC_PCSR0_PID27_Msk                 (_U_(0x1) << PMC_PCSR0_PID27_Pos)              /**< (PMC_PCSR0) Peripheral Clock 27 Status Mask */
#define PMC_PCSR0_PID27                     PMC_PCSR0_PID27_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID27_Msk instead */
#define PMC_PCSR0_PID28_Pos                 28                                             /**< (PMC_PCSR0) Peripheral Clock 28 Status Position */
#define PMC_PCSR0_PID28_Msk                 (_U_(0x1) << PMC_PCSR0_PID28_Pos)              /**< (PMC_PCSR0) Peripheral Clock 28 Status Mask */
#define PMC_PCSR0_PID28                     PMC_PCSR0_PID28_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID28_Msk instead */
#define PMC_PCSR0_PID29_Pos                 29                                             /**< (PMC_PCSR0) Peripheral Clock 29 Status Position */
#define PMC_PCSR0_PID29_Msk                 (_U_(0x1) << PMC_PCSR0_PID29_Pos)              /**< (PMC_PCSR0) Peripheral Clock 29 Status Mask */
#define PMC_PCSR0_PID29                     PMC_PCSR0_PID29_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID29_Msk instead */
#define PMC_PCSR0_MASK                      _U_(0x3FFFFF00)                                /**< \deprecated (PMC_PCSR0) Register MASK  (Use PMC_PCSR0_Msk instead)  */
#define PMC_PCSR0_Msk                       _U_(0x3FFFFF00)                                /**< (PMC_PCSR0) Register Mask  */

#define PMC_PCSR0_PID_Pos                   8                                              /**< (PMC_PCSR0 Position) Peripheral Clock 29 Status */
#define PMC_PCSR0_PID_Msk                   (_U_(0x3FFFFF) << PMC_PCSR0_PID_Pos)           /**< (PMC_PCSR0 Mask) PID */
#define PMC_PCSR0_PID(value)                (PMC_PCSR0_PID_Msk & ((value) << PMC_PCSR0_PID_Pos))  

/* -------- CKGR_MOR : (PMC Offset: 0x20) (R/W 32) Main Oscillator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MOSCXTEN:1;                /**< bit:      0  Main Crystal Oscillator Enable           */
    uint32_t MOSCXTBY:1;                /**< bit:      1  Main Crystal Oscillator Bypass           */
    uint32_t WAITMODE:1;                /**< bit:      2  Wait Mode Command (Write-only)           */
    uint32_t MOSCRCEN:1;                /**< bit:      3  Main On-Chip RC Oscillator Enable        */
    uint32_t MOSCRCF:3;                 /**< bit:   4..6  Main On-Chip RC Oscillator Frequency Selection */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t MOSCXTST:8;                /**< bit:  8..15  Main Crystal Oscillator Start-up Time    */
    uint32_t KEY:8;                     /**< bit: 16..23  Write Access Password                    */
    uint32_t MOSCSEL:1;                 /**< bit:     24  Main Oscillator Selection                */
    uint32_t CFDEN:1;                   /**< bit:     25  Clock Failure Detector Enable            */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CKGR_MOR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CKGR_MOR_OFFSET                     (0x20)                                        /**<  (CKGR_MOR) Main Oscillator Register  Offset */

#define CKGR_MOR_MOSCXTEN_Pos               0                                              /**< (CKGR_MOR) Main Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk               (_U_(0x1) << CKGR_MOR_MOSCXTEN_Pos)            /**< (CKGR_MOR) Main Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN                   CKGR_MOR_MOSCXTEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCXTEN_Msk instead */
#define CKGR_MOR_MOSCXTBY_Pos               1                                              /**< (CKGR_MOR) Main Crystal Oscillator Bypass Position */
#define CKGR_MOR_MOSCXTBY_Msk               (_U_(0x1) << CKGR_MOR_MOSCXTBY_Pos)            /**< (CKGR_MOR) Main Crystal Oscillator Bypass Mask */
#define CKGR_MOR_MOSCXTBY                   CKGR_MOR_MOSCXTBY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCXTBY_Msk instead */
#define CKGR_MOR_WAITMODE_Pos               2                                              /**< (CKGR_MOR) Wait Mode Command (Write-only) Position */
#define CKGR_MOR_WAITMODE_Msk               (_U_(0x1) << CKGR_MOR_WAITMODE_Pos)            /**< (CKGR_MOR) Wait Mode Command (Write-only) Mask */
#define CKGR_MOR_WAITMODE                   CKGR_MOR_WAITMODE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_WAITMODE_Msk instead */
#define CKGR_MOR_MOSCRCEN_Pos               3                                              /**< (CKGR_MOR) Main On-Chip RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk               (_U_(0x1) << CKGR_MOR_MOSCRCEN_Pos)            /**< (CKGR_MOR) Main On-Chip RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN                   CKGR_MOR_MOSCRCEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCRCEN_Msk instead */
#define CKGR_MOR_MOSCRCF_Pos                4                                              /**< (CKGR_MOR) Main On-Chip RC Oscillator Frequency Selection Position */
#define CKGR_MOR_MOSCRCF_Msk                (_U_(0x7) << CKGR_MOR_MOSCRCF_Pos)             /**< (CKGR_MOR) Main On-Chip RC Oscillator Frequency Selection Mask */
#define CKGR_MOR_MOSCRCF(value)             (CKGR_MOR_MOSCRCF_Msk & ((value) << CKGR_MOR_MOSCRCF_Pos))
#define   CKGR_MOR_MOSCRCF_8_MHz_Val        _U_(0x0)                                       /**< (CKGR_MOR) The Fast RC Oscillator frequency is at 8 MHz (default)  */
#define   CKGR_MOR_MOSCRCF_16_MHz_Val       _U_(0x1)                                       /**< (CKGR_MOR) The Fast RC Oscillator frequency is at 16 MHz  */
#define   CKGR_MOR_MOSCRCF_24_MHz_Val       _U_(0x2)                                       /**< (CKGR_MOR) The Fast RC Oscillator frequency is at 24 MHz  */
#define CKGR_MOR_MOSCRCF_8_MHz              (CKGR_MOR_MOSCRCF_8_MHz_Val << CKGR_MOR_MOSCRCF_Pos)  /**< (CKGR_MOR) The Fast RC Oscillator frequency is at 8 MHz (default) Position  */
#define CKGR_MOR_MOSCRCF_16_MHz             (CKGR_MOR_MOSCRCF_16_MHz_Val << CKGR_MOR_MOSCRCF_Pos)  /**< (CKGR_MOR) The Fast RC Oscillator frequency is at 16 MHz Position  */
#define CKGR_MOR_MOSCRCF_24_MHz             (CKGR_MOR_MOSCRCF_24_MHz_Val << CKGR_MOR_MOSCRCF_Pos)  /**< (CKGR_MOR) The Fast RC Oscillator frequency is at 24 MHz Position  */
#define CKGR_MOR_MOSCXTST_Pos               8                                              /**< (CKGR_MOR) Main Crystal Oscillator Start-up Time Position */
#define CKGR_MOR_MOSCXTST_Msk               (_U_(0xFF) << CKGR_MOR_MOSCXTST_Pos)           /**< (CKGR_MOR) Main Crystal Oscillator Start-up Time Mask */
#define CKGR_MOR_MOSCXTST(value)            (CKGR_MOR_MOSCXTST_Msk & ((value) << CKGR_MOR_MOSCXTST_Pos))
#define CKGR_MOR_KEY_Pos                    16                                             /**< (CKGR_MOR) Write Access Password Position */
#define CKGR_MOR_KEY_Msk                    (_U_(0xFF) << CKGR_MOR_KEY_Pos)                /**< (CKGR_MOR) Write Access Password Mask */
#define CKGR_MOR_KEY(value)                 (CKGR_MOR_KEY_Msk & ((value) << CKGR_MOR_KEY_Pos))
#define   CKGR_MOR_KEY_PASSWD_Val           _U_(0x37)                                      /**< (CKGR_MOR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define CKGR_MOR_KEY_PASSWD                 (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)  /**< (CKGR_MOR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define CKGR_MOR_MOSCSEL_Pos                24                                             /**< (CKGR_MOR) Main Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                (_U_(0x1) << CKGR_MOR_MOSCSEL_Pos)             /**< (CKGR_MOR) Main Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL                    CKGR_MOR_MOSCSEL_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCSEL_Msk instead */
#define CKGR_MOR_CFDEN_Pos                  25                                             /**< (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                  (_U_(0x1) << CKGR_MOR_CFDEN_Pos)               /**< (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN                      CKGR_MOR_CFDEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_CFDEN_Msk instead */
#define CKGR_MOR_MASK                       _U_(0x3FFFF7F)                                 /**< \deprecated (CKGR_MOR) Register MASK  (Use CKGR_MOR_Msk instead)  */
#define CKGR_MOR_Msk                        _U_(0x3FFFF7F)                                 /**< (CKGR_MOR) Register Mask  */


/* -------- CKGR_MCFR : (PMC Offset: 0x24) (R/W 32) Main Clock Frequency Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MAINF:16;                  /**< bit:  0..15  Main Clock Frequency                     */
    uint32_t MAINFRDY:1;                /**< bit:     16  Main Clock Frequency Measure Ready       */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t RCMEAS:1;                  /**< bit:     20  RC Oscillator Frequency Measure (write-only) */
    uint32_t :11;                       /**< bit: 21..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CKGR_MCFR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CKGR_MCFR_OFFSET                    (0x24)                                        /**<  (CKGR_MCFR) Main Clock Frequency Register  Offset */

#define CKGR_MCFR_MAINF_Pos                 0                                              /**< (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                 (_U_(0xFFFF) << CKGR_MCFR_MAINF_Pos)           /**< (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)              (CKGR_MCFR_MAINF_Msk & ((value) << CKGR_MCFR_MAINF_Pos))
#define CKGR_MCFR_MAINFRDY_Pos              16                                             /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk              (_U_(0x1) << CKGR_MCFR_MAINFRDY_Pos)           /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY                  CKGR_MCFR_MAINFRDY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MCFR_MAINFRDY_Msk instead */
#define CKGR_MCFR_RCMEAS_Pos                20                                             /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                (_U_(0x1) << CKGR_MCFR_RCMEAS_Pos)             /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS                    CKGR_MCFR_RCMEAS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MCFR_RCMEAS_Msk instead */
#define CKGR_MCFR_MASK                      _U_(0x11FFFF)                                  /**< \deprecated (CKGR_MCFR) Register MASK  (Use CKGR_MCFR_Msk instead)  */
#define CKGR_MCFR_Msk                       _U_(0x11FFFF)                                  /**< (CKGR_MCFR) Register Mask  */


/* -------- CKGR_PLLAR : (PMC Offset: 0x28) (R/W 32) PLLA Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PLLAEN:8;                  /**< bit:   0..7  PLLA Control                             */
    uint32_t PLLACOUNT:6;               /**< bit:  8..13  PLLA Counter                             */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t MULA:12;                   /**< bit: 16..27  PLLA Multiplier                          */
    uint32_t :1;                        /**< bit:     28  Reserved */
    uint32_t ZERO:1;                    /**< bit:     29                                           */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CKGR_PLLAR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CKGR_PLLAR_OFFSET                   (0x28)                                        /**<  (CKGR_PLLAR) PLLA Register  Offset */

#define CKGR_PLLAR_PLLAEN_Pos               0                                              /**< (CKGR_PLLAR) PLLA Control Position */
#define CKGR_PLLAR_PLLAEN_Msk               (_U_(0xFF) << CKGR_PLLAR_PLLAEN_Pos)           /**< (CKGR_PLLAR) PLLA Control Mask */
#define CKGR_PLLAR_PLLAEN(value)            (CKGR_PLLAR_PLLAEN_Msk & ((value) << CKGR_PLLAR_PLLAEN_Pos))
#define CKGR_PLLAR_PLLACOUNT_Pos            8                                              /**< (CKGR_PLLAR) PLLA Counter Position */
#define CKGR_PLLAR_PLLACOUNT_Msk            (_U_(0x3F) << CKGR_PLLAR_PLLACOUNT_Pos)        /**< (CKGR_PLLAR) PLLA Counter Mask */
#define CKGR_PLLAR_PLLACOUNT(value)         (CKGR_PLLAR_PLLACOUNT_Msk & ((value) << CKGR_PLLAR_PLLACOUNT_Pos))
#define CKGR_PLLAR_MULA_Pos                 16                                             /**< (CKGR_PLLAR) PLLA Multiplier Position */
#define CKGR_PLLAR_MULA_Msk                 (_U_(0xFFF) << CKGR_PLLAR_MULA_Pos)            /**< (CKGR_PLLAR) PLLA Multiplier Mask */
#define CKGR_PLLAR_MULA(value)              (CKGR_PLLAR_MULA_Msk & ((value) << CKGR_PLLAR_MULA_Pos))
#define CKGR_PLLAR_ZERO_Pos                 29                                             /**< (CKGR_PLLAR)  Position */
#define CKGR_PLLAR_ZERO_Msk                 (_U_(0x1) << CKGR_PLLAR_ZERO_Pos)              /**< (CKGR_PLLAR)  Mask */
#define CKGR_PLLAR_ZERO                     CKGR_PLLAR_ZERO_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_PLLAR_ZERO_Msk instead */
#define CKGR_PLLAR_MASK                     _U_(0x2FFF3FFF)                                /**< \deprecated (CKGR_PLLAR) Register MASK  (Use CKGR_PLLAR_Msk instead)  */
#define CKGR_PLLAR_Msk                      _U_(0x2FFF3FFF)                                /**< (CKGR_PLLAR) Register Mask  */


/* -------- PMC_MCKR : (PMC Offset: 0x30) (R/W 32) Master Clock Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CSS:2;                     /**< bit:   0..1  Master Clock Source Selection            */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t PRES:3;                    /**< bit:   4..6  Processor Clock Prescaler                */
    uint32_t :5;                        /**< bit:  7..11  Reserved */
    uint32_t PLLADIV2:1;                /**< bit:     12  PLLA Divisor by 2                        */
    uint32_t :19;                       /**< bit: 13..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_MCKR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_MCKR_OFFSET                     (0x30)                                        /**<  (PMC_MCKR) Master Clock Register  Offset */

#define PMC_MCKR_CSS_Pos                    0                                              /**< (PMC_MCKR) Master Clock Source Selection Position */
#define PMC_MCKR_CSS_Msk                    (_U_(0x3) << PMC_MCKR_CSS_Pos)                 /**< (PMC_MCKR) Master Clock Source Selection Mask */
#define PMC_MCKR_CSS(value)                 (PMC_MCKR_CSS_Msk & ((value) << PMC_MCKR_CSS_Pos))
#define   PMC_MCKR_CSS_SLOW_CLK_Val         _U_(0x0)                                       /**< (PMC_MCKR) Slow Clock is selected  */
#define   PMC_MCKR_CSS_MAIN_CLK_Val         _U_(0x1)                                       /**< (PMC_MCKR) Main Clock is selected  */
#define   PMC_MCKR_CSS_PLLA_CLK_Val         _U_(0x2)                                       /**< (PMC_MCKR) PLLA Clock is selected  */
#define PMC_MCKR_CSS_SLOW_CLK               (PMC_MCKR_CSS_SLOW_CLK_Val << PMC_MCKR_CSS_Pos)  /**< (PMC_MCKR) Slow Clock is selected Position  */
#define PMC_MCKR_CSS_MAIN_CLK               (PMC_MCKR_CSS_MAIN_CLK_Val << PMC_MCKR_CSS_Pos)  /**< (PMC_MCKR) Main Clock is selected Position  */
#define PMC_MCKR_CSS_PLLA_CLK               (PMC_MCKR_CSS_PLLA_CLK_Val << PMC_MCKR_CSS_Pos)  /**< (PMC_MCKR) PLLA Clock is selected Position  */
#define PMC_MCKR_PRES_Pos                   4                                              /**< (PMC_MCKR) Processor Clock Prescaler Position */
#define PMC_MCKR_PRES_Msk                   (_U_(0x7) << PMC_MCKR_PRES_Pos)                /**< (PMC_MCKR) Processor Clock Prescaler Mask */
#define PMC_MCKR_PRES(value)                (PMC_MCKR_PRES_Msk & ((value) << PMC_MCKR_PRES_Pos))
#define   PMC_MCKR_PRES_CLK_1_Val           _U_(0x0)                                       /**< (PMC_MCKR) Selected clock  */
#define   PMC_MCKR_PRES_CLK_2_Val           _U_(0x1)                                       /**< (PMC_MCKR) Selected clock divided by 2  */
#define   PMC_MCKR_PRES_CLK_4_Val           _U_(0x2)                                       /**< (PMC_MCKR) Selected clock divided by 4  */
#define   PMC_MCKR_PRES_CLK_8_Val           _U_(0x3)                                       /**< (PMC_MCKR) Selected clock divided by 8  */
#define   PMC_MCKR_PRES_CLK_16_Val          _U_(0x4)                                       /**< (PMC_MCKR) Selected clock divided by 16  */
#define   PMC_MCKR_PRES_CLK_32_Val          _U_(0x5)                                       /**< (PMC_MCKR) Selected clock divided by 32  */
#define   PMC_MCKR_PRES_CLK_64_Val          _U_(0x6)                                       /**< (PMC_MCKR) Selected clock divided by 64  */
#define   PMC_MCKR_PRES_CLK_3_Val           _U_(0x7)                                       /**< (PMC_MCKR) Selected clock divided by 3  */
#define PMC_MCKR_PRES_CLK_1                 (PMC_MCKR_PRES_CLK_1_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock Position  */
#define PMC_MCKR_PRES_CLK_2                 (PMC_MCKR_PRES_CLK_2_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 2 Position  */
#define PMC_MCKR_PRES_CLK_4                 (PMC_MCKR_PRES_CLK_4_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 4 Position  */
#define PMC_MCKR_PRES_CLK_8                 (PMC_MCKR_PRES_CLK_8_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 8 Position  */
#define PMC_MCKR_PRES_CLK_16                (PMC_MCKR_PRES_CLK_16_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 16 Position  */
#define PMC_MCKR_PRES_CLK_32                (PMC_MCKR_PRES_CLK_32_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 32 Position  */
#define PMC_MCKR_PRES_CLK_64                (PMC_MCKR_PRES_CLK_64_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 64 Position  */
#define PMC_MCKR_PRES_CLK_3                 (PMC_MCKR_PRES_CLK_3_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 3 Position  */
#define PMC_MCKR_PLLADIV2_Pos               12                                             /**< (PMC_MCKR) PLLA Divisor by 2 Position */
#define PMC_MCKR_PLLADIV2_Msk               (_U_(0x1) << PMC_MCKR_PLLADIV2_Pos)            /**< (PMC_MCKR) PLLA Divisor by 2 Mask */
#define PMC_MCKR_PLLADIV2                   PMC_MCKR_PLLADIV2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_MCKR_PLLADIV2_Msk instead */
#define PMC_MCKR_MASK                       _U_(0x1073)                                    /**< \deprecated (PMC_MCKR) Register MASK  (Use PMC_MCKR_Msk instead)  */
#define PMC_MCKR_Msk                        _U_(0x1073)                                    /**< (PMC_MCKR) Register Mask  */


/* -------- PMC_PCK : (PMC Offset: 0x40) (R/W 32) Programmable Clock 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CSS:3;                     /**< bit:   0..2  Master Clock Source Selection            */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t PRES:3;                    /**< bit:   4..6  Programmable Clock Prescaler             */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCK_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCK_OFFSET                      (0x40)                                        /**<  (PMC_PCK) Programmable Clock 0 Register 0  Offset */

#define PMC_PCK_CSS_Pos                     0                                              /**< (PMC_PCK) Master Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                     (_U_(0x7) << PMC_PCK_CSS_Pos)                  /**< (PMC_PCK) Master Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                  (PMC_PCK_CSS_Msk & ((value) << PMC_PCK_CSS_Pos))
#define   PMC_PCK_CSS_SLOW_CLK_Val          _U_(0x0)                                       /**< (PMC_PCK) Slow Clock is selected  */
#define   PMC_PCK_CSS_MAIN_CLK_Val          _U_(0x1)                                       /**< (PMC_PCK) Main Clock is selected  */
#define   PMC_PCK_CSS_PLLA_CLK_Val          _U_(0x2)                                       /**< (PMC_PCK) PLLA Clock is selected  */
#define   PMC_PCK_CSS_MCK_Val               _U_(0x4)                                       /**< (PMC_PCK) Master Clock is selected  */
#define PMC_PCK_CSS_SLOW_CLK                (PMC_PCK_CSS_SLOW_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) Slow Clock is selected Position  */
#define PMC_PCK_CSS_MAIN_CLK                (PMC_PCK_CSS_MAIN_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) Main Clock is selected Position  */
#define PMC_PCK_CSS_PLLA_CLK                (PMC_PCK_CSS_PLLA_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) PLLA Clock is selected Position  */
#define PMC_PCK_CSS_MCK                     (PMC_PCK_CSS_MCK_Val << PMC_PCK_CSS_Pos)       /**< (PMC_PCK) Master Clock is selected Position  */
#define PMC_PCK_PRES_Pos                    4                                              /**< (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                    (_U_(0x7) << PMC_PCK_PRES_Pos)                 /**< (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                 (PMC_PCK_PRES_Msk & ((value) << PMC_PCK_PRES_Pos))
#define   PMC_PCK_PRES_CLK_1_Val            _U_(0x0)                                       /**< (PMC_PCK) Selected clock  */
#define   PMC_PCK_PRES_CLK_2_Val            _U_(0x1)                                       /**< (PMC_PCK) Selected clock divided by 2  */
#define   PMC_PCK_PRES_CLK_4_Val            _U_(0x2)                                       /**< (PMC_PCK) Selected clock divided by 4  */
#define   PMC_PCK_PRES_CLK_8_Val            _U_(0x3)                                       /**< (PMC_PCK) Selected clock divided by 8  */
#define   PMC_PCK_PRES_CLK_16_Val           _U_(0x4)                                       /**< (PMC_PCK) Selected clock divided by 16  */
#define   PMC_PCK_PRES_CLK_32_Val           _U_(0x5)                                       /**< (PMC_PCK) Selected clock divided by 32  */
#define   PMC_PCK_PRES_CLK_64_Val           _U_(0x6)                                       /**< (PMC_PCK) Selected clock divided by 64  */
#define PMC_PCK_PRES_CLK_1                  (PMC_PCK_PRES_CLK_1_Val << PMC_PCK_PRES_Pos)   /**< (PMC_PCK) Selected clock Position  */
#define PMC_PCK_PRES_CLK_2                  (PMC_PCK_PRES_CLK_2_Val << PMC_PCK_PRES_Pos)   /**< (PMC_PCK) Selected clock divided by 2 Position  */
#define PMC_PCK_PRES_CLK_4                  (PMC_PCK_PRES_CLK_4_Val << PMC_PCK_PRES_Pos)   /**< (PMC_PCK) Selected clock divided by 4 Position  */
#define PMC_PCK_PRES_CLK_8                  (PMC_PCK_PRES_CLK_8_Val << PMC_PCK_PRES_Pos)   /**< (PMC_PCK) Selected clock divided by 8 Position  */
#define PMC_PCK_PRES_CLK_16                 (PMC_PCK_PRES_CLK_16_Val << PMC_PCK_PRES_Pos)  /**< (PMC_PCK) Selected clock divided by 16 Position  */
#define PMC_PCK_PRES_CLK_32                 (PMC_PCK_PRES_CLK_32_Val << PMC_PCK_PRES_Pos)  /**< (PMC_PCK) Selected clock divided by 32 Position  */
#define PMC_PCK_PRES_CLK_64                 (PMC_PCK_PRES_CLK_64_Val << PMC_PCK_PRES_Pos)  /**< (PMC_PCK) Selected clock divided by 64 Position  */
#define PMC_PCK_MASK                        _U_(0x77)                                      /**< \deprecated (PMC_PCK) Register MASK  (Use PMC_PCK_Msk instead)  */
#define PMC_PCK_Msk                         _U_(0x77)                                      /**< (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x60) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  Main Crystal Oscillator Status Interrupt Enable */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Interrupt Enable               */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Ready Interrupt Enable      */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready 0 Interrupt Enable */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready 1 Interrupt Enable */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready 2 Interrupt Enable */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Oscillator Selection Status Interrupt Enable */
    uint32_t MOSCRCS:1;                 /**< bit:     17  Main On-Chip RC Status Interrupt Enable  */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event Interrupt Enable */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready x Interrupt Enable */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_IER_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_IER_OFFSET                      (0x60)                                        /**<  (PMC_IER) Interrupt Enable Register  Offset */

#define PMC_IER_MOSCXTS_Pos                 0                                              /**< (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                 (_U_(0x1) << PMC_IER_MOSCXTS_Pos)              /**< (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS                     PMC_IER_MOSCXTS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MOSCXTS_Msk instead */
#define PMC_IER_LOCKA_Pos                   1                                              /**< (PMC_IER) PLLA Lock Interrupt Enable Position */
#define PMC_IER_LOCKA_Msk                   (_U_(0x1) << PMC_IER_LOCKA_Pos)                /**< (PMC_IER) PLLA Lock Interrupt Enable Mask */
#define PMC_IER_LOCKA                       PMC_IER_LOCKA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_LOCKA_Msk instead */
#define PMC_IER_MCKRDY_Pos                  3                                              /**< (PMC_IER) Master Clock Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                  (_U_(0x1) << PMC_IER_MCKRDY_Pos)               /**< (PMC_IER) Master Clock Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY                      PMC_IER_MCKRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MCKRDY_Msk instead */
#define PMC_IER_PCKRDY0_Pos                 8                                              /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                 (_U_(0x1) << PMC_IER_PCKRDY0_Pos)              /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0                     PMC_IER_PCKRDY0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_PCKRDY0_Msk instead */
#define PMC_IER_PCKRDY1_Pos                 9                                              /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                 (_U_(0x1) << PMC_IER_PCKRDY1_Pos)              /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1                     PMC_IER_PCKRDY1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_PCKRDY1_Msk instead */
#define PMC_IER_PCKRDY2_Pos                 10                                             /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Position */
#define PMC_IER_PCKRDY2_Msk                 (_U_(0x1) << PMC_IER_PCKRDY2_Pos)              /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Mask */
#define PMC_IER_PCKRDY2                     PMC_IER_PCKRDY2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_PCKRDY2_Msk instead */
#define PMC_IER_MOSCSELS_Pos                16                                             /**< (PMC_IER) Main Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                (_U_(0x1) << PMC_IER_MOSCSELS_Pos)             /**< (PMC_IER) Main Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS                    PMC_IER_MOSCSELS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MOSCSELS_Msk instead */
#define PMC_IER_MOSCRCS_Pos                 17                                             /**< (PMC_IER) Main On-Chip RC Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                 (_U_(0x1) << PMC_IER_MOSCRCS_Pos)              /**< (PMC_IER) Main On-Chip RC Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS                     PMC_IER_MOSCRCS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MOSCRCS_Msk instead */
#define PMC_IER_CFDEV_Pos                   18                                             /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                   (_U_(0x1) << PMC_IER_CFDEV_Pos)                /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV                       PMC_IER_CFDEV_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_CFDEV_Msk instead */
#define PMC_IER_MASK                        _U_(0x7070B)                                   /**< \deprecated (PMC_IER) Register MASK  (Use PMC_IER_Msk instead)  */
#define PMC_IER_Msk                         _U_(0x7070B)                                   /**< (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                  8                                              /**< (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                  (_U_(0x7) << PMC_IER_PCKRDY_Pos)               /**< (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)               (PMC_IER_PCKRDY_Msk & ((value) << PMC_IER_PCKRDY_Pos))  

/* -------- PMC_IDR : (PMC Offset: 0x64) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  Main Crystal Oscillator Status Interrupt Disable */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Interrupt Disable              */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Ready Interrupt Disable     */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready 0 Interrupt Disable */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready 1 Interrupt Disable */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready 2 Interrupt Disable */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Oscillator Selection Status Interrupt Disable */
    uint32_t MOSCRCS:1;                 /**< bit:     17  Main On-Chip RC Status Interrupt Disable */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event Interrupt Disable */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready x Interrupt Disable */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_IDR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_IDR_OFFSET                      (0x64)                                        /**<  (PMC_IDR) Interrupt Disable Register  Offset */

#define PMC_IDR_MOSCXTS_Pos                 0                                              /**< (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                 (_U_(0x1) << PMC_IDR_MOSCXTS_Pos)              /**< (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS                     PMC_IDR_MOSCXTS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MOSCXTS_Msk instead */
#define PMC_IDR_LOCKA_Pos                   1                                              /**< (PMC_IDR) PLLA Lock Interrupt Disable Position */
#define PMC_IDR_LOCKA_Msk                   (_U_(0x1) << PMC_IDR_LOCKA_Pos)                /**< (PMC_IDR) PLLA Lock Interrupt Disable Mask */
#define PMC_IDR_LOCKA                       PMC_IDR_LOCKA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_LOCKA_Msk instead */
#define PMC_IDR_MCKRDY_Pos                  3                                              /**< (PMC_IDR) Master Clock Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                  (_U_(0x1) << PMC_IDR_MCKRDY_Pos)               /**< (PMC_IDR) Master Clock Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY                      PMC_IDR_MCKRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MCKRDY_Msk instead */
#define PMC_IDR_PCKRDY0_Pos                 8                                              /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Position */
#define PMC_IDR_PCKRDY0_Msk                 (_U_(0x1) << PMC_IDR_PCKRDY0_Pos)              /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY0                     PMC_IDR_PCKRDY0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_PCKRDY0_Msk instead */
#define PMC_IDR_PCKRDY1_Pos                 9                                              /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Position */
#define PMC_IDR_PCKRDY1_Msk                 (_U_(0x1) << PMC_IDR_PCKRDY1_Pos)              /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY1                     PMC_IDR_PCKRDY1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_PCKRDY1_Msk instead */
#define PMC_IDR_PCKRDY2_Pos                 10                                             /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Position */
#define PMC_IDR_PCKRDY2_Msk                 (_U_(0x1) << PMC_IDR_PCKRDY2_Pos)              /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY2                     PMC_IDR_PCKRDY2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_PCKRDY2_Msk instead */
#define PMC_IDR_MOSCSELS_Pos                16                                             /**< (PMC_IDR) Main Oscillator Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                (_U_(0x1) << PMC_IDR_MOSCSELS_Pos)             /**< (PMC_IDR) Main Oscillator Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS                    PMC_IDR_MOSCSELS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MOSCSELS_Msk instead */
#define PMC_IDR_MOSCRCS_Pos                 17                                             /**< (PMC_IDR) Main On-Chip RC Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                 (_U_(0x1) << PMC_IDR_MOSCRCS_Pos)              /**< (PMC_IDR) Main On-Chip RC Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS                     PMC_IDR_MOSCRCS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MOSCRCS_Msk instead */
#define PMC_IDR_CFDEV_Pos                   18                                             /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                   (_U_(0x1) << PMC_IDR_CFDEV_Pos)                /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV                       PMC_IDR_CFDEV_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_CFDEV_Msk instead */
#define PMC_IDR_MASK                        _U_(0x7070B)                                   /**< \deprecated (PMC_IDR) Register MASK  (Use PMC_IDR_Msk instead)  */
#define PMC_IDR_Msk                         _U_(0x7070B)                                   /**< (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                  8                                              /**< (PMC_IDR Position) Programmable Clock Ready x Interrupt Disable */
#define PMC_IDR_PCKRDY_Msk                  (_U_(0x7) << PMC_IDR_PCKRDY_Pos)               /**< (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)               (PMC_IDR_PCKRDY_Msk & ((value) << PMC_IDR_PCKRDY_Pos))  

/* -------- PMC_SR : (PMC Offset: 0x68) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  Main Crystal Oscillator Status           */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Status                         */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Status                      */
    uint32_t :3;                        /**< bit:   4..6  Reserved */
    uint32_t OSCSELS:1;                 /**< bit:      7  Slow Clock Oscillator Selection          */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready Status          */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready Status          */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready Status          */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Oscillator Selection Status         */
    uint32_t MOSCRCS:1;                 /**< bit:     17  Main On-Chip RC Oscillator Status        */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event             */
    uint32_t CFDS:1;                    /**< bit:     19  Clock Failure Detector Status            */
    uint32_t FOS:1;                     /**< bit:     20  Clock Failure Detector Fault Output Status */
    uint32_t :11;                       /**< bit: 21..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready Status          */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SR_OFFSET                       (0x68)                                        /**<  (PMC_SR) Status Register  Offset */

#define PMC_SR_MOSCXTS_Pos                  0                                              /**< (PMC_SR) Main Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                  (_U_(0x1) << PMC_SR_MOSCXTS_Pos)               /**< (PMC_SR) Main Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS                      PMC_SR_MOSCXTS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MOSCXTS_Msk instead */
#define PMC_SR_LOCKA_Pos                    1                                              /**< (PMC_SR) PLLA Lock Status Position */
#define PMC_SR_LOCKA_Msk                    (_U_(0x1) << PMC_SR_LOCKA_Pos)                 /**< (PMC_SR) PLLA Lock Status Mask */
#define PMC_SR_LOCKA                        PMC_SR_LOCKA_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_LOCKA_Msk instead */
#define PMC_SR_MCKRDY_Pos                   3                                              /**< (PMC_SR) Master Clock Status Position */
#define PMC_SR_MCKRDY_Msk                   (_U_(0x1) << PMC_SR_MCKRDY_Pos)                /**< (PMC_SR) Master Clock Status Mask */
#define PMC_SR_MCKRDY                       PMC_SR_MCKRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MCKRDY_Msk instead */
#define PMC_SR_OSCSELS_Pos                  7                                              /**< (PMC_SR) Slow Clock Oscillator Selection Position */
#define PMC_SR_OSCSELS_Msk                  (_U_(0x1) << PMC_SR_OSCSELS_Pos)               /**< (PMC_SR) Slow Clock Oscillator Selection Mask */
#define PMC_SR_OSCSELS                      PMC_SR_OSCSELS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_OSCSELS_Msk instead */
#define PMC_SR_PCKRDY0_Pos                  8                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                  (_U_(0x1) << PMC_SR_PCKRDY0_Pos)               /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0                      PMC_SR_PCKRDY0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_PCKRDY0_Msk instead */
#define PMC_SR_PCKRDY1_Pos                  9                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                  (_U_(0x1) << PMC_SR_PCKRDY1_Pos)               /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1                      PMC_SR_PCKRDY1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_PCKRDY1_Msk instead */
#define PMC_SR_PCKRDY2_Pos                  10                                             /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY2_Msk                  (_U_(0x1) << PMC_SR_PCKRDY2_Pos)               /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY2                      PMC_SR_PCKRDY2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_PCKRDY2_Msk instead */
#define PMC_SR_MOSCSELS_Pos                 16                                             /**< (PMC_SR) Main Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                 (_U_(0x1) << PMC_SR_MOSCSELS_Pos)              /**< (PMC_SR) Main Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS                     PMC_SR_MOSCSELS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MOSCSELS_Msk instead */
#define PMC_SR_MOSCRCS_Pos                  17                                             /**< (PMC_SR) Main On-Chip RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                  (_U_(0x1) << PMC_SR_MOSCRCS_Pos)               /**< (PMC_SR) Main On-Chip RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS                      PMC_SR_MOSCRCS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MOSCRCS_Msk instead */
#define PMC_SR_CFDEV_Pos                    18                                             /**< (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                    (_U_(0x1) << PMC_SR_CFDEV_Pos)                 /**< (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV                        PMC_SR_CFDEV_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_CFDEV_Msk instead */
#define PMC_SR_CFDS_Pos                     19                                             /**< (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                     (_U_(0x1) << PMC_SR_CFDS_Pos)                  /**< (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS                         PMC_SR_CFDS_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_CFDS_Msk instead */
#define PMC_SR_FOS_Pos                      20                                             /**< (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                      (_U_(0x1) << PMC_SR_FOS_Pos)                   /**< (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS                          PMC_SR_FOS_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_FOS_Msk instead */
#define PMC_SR_MASK                         _U_(0x1F078B)                                  /**< \deprecated (PMC_SR) Register MASK  (Use PMC_SR_Msk instead)  */
#define PMC_SR_Msk                          _U_(0x1F078B)                                  /**< (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                   8                                              /**< (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                   (_U_(0x7) << PMC_SR_PCKRDY_Pos)                /**< (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                (PMC_SR_PCKRDY_Msk & ((value) << PMC_SR_PCKRDY_Pos))  

/* -------- PMC_IMR : (PMC Offset: 0x6c) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  Main Crystal Oscillator Status Interrupt Mask */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Interrupt Mask                 */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Ready Interrupt Mask        */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready 0 Interrupt Mask */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready 1 Interrupt Mask */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready 2 Interrupt Mask */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Oscillator Selection Status Interrupt Mask */
    uint32_t MOSCRCS:1;                 /**< bit:     17  Main On-Chip RC Status Interrupt Mask    */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event Interrupt Mask */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready x Interrupt Mask */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_IMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_IMR_OFFSET                      (0x6C)                                        /**<  (PMC_IMR) Interrupt Mask Register  Offset */

#define PMC_IMR_MOSCXTS_Pos                 0                                              /**< (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                 (_U_(0x1) << PMC_IMR_MOSCXTS_Pos)              /**< (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS                     PMC_IMR_MOSCXTS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MOSCXTS_Msk instead */
#define PMC_IMR_LOCKA_Pos                   1                                              /**< (PMC_IMR) PLLA Lock Interrupt Mask Position */
#define PMC_IMR_LOCKA_Msk                   (_U_(0x1) << PMC_IMR_LOCKA_Pos)                /**< (PMC_IMR) PLLA Lock Interrupt Mask Mask */
#define PMC_IMR_LOCKA                       PMC_IMR_LOCKA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_LOCKA_Msk instead */
#define PMC_IMR_MCKRDY_Pos                  3                                              /**< (PMC_IMR) Master Clock Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                  (_U_(0x1) << PMC_IMR_MCKRDY_Pos)               /**< (PMC_IMR) Master Clock Ready Interrupt Mask Mask */
#define PMC_IMR_MCKRDY                      PMC_IMR_MCKRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MCKRDY_Msk instead */
#define PMC_IMR_PCKRDY0_Pos                 8                                              /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Position */
#define PMC_IMR_PCKRDY0_Msk                 (_U_(0x1) << PMC_IMR_PCKRDY0_Pos)              /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY0                     PMC_IMR_PCKRDY0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_PCKRDY0_Msk instead */
#define PMC_IMR_PCKRDY1_Pos                 9                                              /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Position */
#define PMC_IMR_PCKRDY1_Msk                 (_U_(0x1) << PMC_IMR_PCKRDY1_Pos)              /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY1                     PMC_IMR_PCKRDY1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_PCKRDY1_Msk instead */
#define PMC_IMR_PCKRDY2_Pos                 10                                             /**< (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Position */
#define PMC_IMR_PCKRDY2_Msk                 (_U_(0x1) << PMC_IMR_PCKRDY2_Pos)              /**< (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY2                     PMC_IMR_PCKRDY2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_PCKRDY2_Msk instead */
#define PMC_IMR_MOSCSELS_Pos                16                                             /**< (PMC_IMR) Main Oscillator Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                (_U_(0x1) << PMC_IMR_MOSCSELS_Pos)             /**< (PMC_IMR) Main Oscillator Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS                    PMC_IMR_MOSCSELS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MOSCSELS_Msk instead */
#define PMC_IMR_MOSCRCS_Pos                 17                                             /**< (PMC_IMR) Main On-Chip RC Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                 (_U_(0x1) << PMC_IMR_MOSCRCS_Pos)              /**< (PMC_IMR) Main On-Chip RC Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS                     PMC_IMR_MOSCRCS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MOSCRCS_Msk instead */
#define PMC_IMR_CFDEV_Pos                   18                                             /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                   (_U_(0x1) << PMC_IMR_CFDEV_Pos)                /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV                       PMC_IMR_CFDEV_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_CFDEV_Msk instead */
#define PMC_IMR_MASK                        _U_(0x7070B)                                   /**< \deprecated (PMC_IMR) Register MASK  (Use PMC_IMR_Msk instead)  */
#define PMC_IMR_Msk                         _U_(0x7070B)                                   /**< (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                  8                                              /**< (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                  (_U_(0x7) << PMC_IMR_PCKRDY_Pos)               /**< (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)               (PMC_IMR_PCKRDY_Msk & ((value) << PMC_IMR_PCKRDY_Pos))  

/* -------- PMC_FSMR : (PMC Offset: 0x70) (R/W 32) Fast Startup Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FSTT0:1;                   /**< bit:      0  Fast Startup Input Enable 0              */
    uint32_t FSTT1:1;                   /**< bit:      1  Fast Startup Input Enable 1              */
    uint32_t FSTT2:1;                   /**< bit:      2  Fast Startup Input Enable 2              */
    uint32_t FSTT3:1;                   /**< bit:      3  Fast Startup Input Enable 3              */
    uint32_t FSTT4:1;                   /**< bit:      4  Fast Startup Input Enable 4              */
    uint32_t FSTT5:1;                   /**< bit:      5  Fast Startup Input Enable 5              */
    uint32_t FSTT6:1;                   /**< bit:      6  Fast Startup Input Enable 6              */
    uint32_t FSTT7:1;                   /**< bit:      7  Fast Startup Input Enable 7              */
    uint32_t FSTT8:1;                   /**< bit:      8  Fast Startup Input Enable 8              */
    uint32_t FSTT9:1;                   /**< bit:      9  Fast Startup Input Enable 9              */
    uint32_t FSTT10:1;                  /**< bit:     10  Fast Startup Input Enable 10             */
    uint32_t FSTT11:1;                  /**< bit:     11  Fast Startup Input Enable 11             */
    uint32_t FSTT12:1;                  /**< bit:     12  Fast Startup Input Enable 12             */
    uint32_t FSTT13:1;                  /**< bit:     13  Fast Startup Input Enable 13             */
    uint32_t FSTT14:1;                  /**< bit:     14  Fast Startup Input Enable 14             */
    uint32_t FSTT15:1;                  /**< bit:     15  Fast Startup Input Enable 15             */
    uint32_t RTTAL:1;                   /**< bit:     16  RTT Alarm Enable                         */
    uint32_t RTCAL:1;                   /**< bit:     17  RTC Alarm Enable                         */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t LPM:1;                     /**< bit:     20  Low-power Mode                           */
    uint32_t FLPM:2;                    /**< bit: 21..22  Flash Low-power Mode                     */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t FSTT:16;                   /**< bit:  0..15  Fast Startup Input Enable x              */
    uint32_t :16;                       /**< bit: 16..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_FSMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_FSMR_OFFSET                     (0x70)                                        /**<  (PMC_FSMR) Fast Startup Mode Register  Offset */

#define PMC_FSMR_FSTT0_Pos                  0                                              /**< (PMC_FSMR) Fast Startup Input Enable 0 Position */
#define PMC_FSMR_FSTT0_Msk                  (_U_(0x1) << PMC_FSMR_FSTT0_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 0 Mask */
#define PMC_FSMR_FSTT0                      PMC_FSMR_FSTT0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT0_Msk instead */
#define PMC_FSMR_FSTT1_Pos                  1                                              /**< (PMC_FSMR) Fast Startup Input Enable 1 Position */
#define PMC_FSMR_FSTT1_Msk                  (_U_(0x1) << PMC_FSMR_FSTT1_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 1 Mask */
#define PMC_FSMR_FSTT1                      PMC_FSMR_FSTT1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT1_Msk instead */
#define PMC_FSMR_FSTT2_Pos                  2                                              /**< (PMC_FSMR) Fast Startup Input Enable 2 Position */
#define PMC_FSMR_FSTT2_Msk                  (_U_(0x1) << PMC_FSMR_FSTT2_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 2 Mask */
#define PMC_FSMR_FSTT2                      PMC_FSMR_FSTT2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT2_Msk instead */
#define PMC_FSMR_FSTT3_Pos                  3                                              /**< (PMC_FSMR) Fast Startup Input Enable 3 Position */
#define PMC_FSMR_FSTT3_Msk                  (_U_(0x1) << PMC_FSMR_FSTT3_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 3 Mask */
#define PMC_FSMR_FSTT3                      PMC_FSMR_FSTT3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT3_Msk instead */
#define PMC_FSMR_FSTT4_Pos                  4                                              /**< (PMC_FSMR) Fast Startup Input Enable 4 Position */
#define PMC_FSMR_FSTT4_Msk                  (_U_(0x1) << PMC_FSMR_FSTT4_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 4 Mask */
#define PMC_FSMR_FSTT4                      PMC_FSMR_FSTT4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT4_Msk instead */
#define PMC_FSMR_FSTT5_Pos                  5                                              /**< (PMC_FSMR) Fast Startup Input Enable 5 Position */
#define PMC_FSMR_FSTT5_Msk                  (_U_(0x1) << PMC_FSMR_FSTT5_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 5 Mask */
#define PMC_FSMR_FSTT5                      PMC_FSMR_FSTT5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT5_Msk instead */
#define PMC_FSMR_FSTT6_Pos                  6                                              /**< (PMC_FSMR) Fast Startup Input Enable 6 Position */
#define PMC_FSMR_FSTT6_Msk                  (_U_(0x1) << PMC_FSMR_FSTT6_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 6 Mask */
#define PMC_FSMR_FSTT6                      PMC_FSMR_FSTT6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT6_Msk instead */
#define PMC_FSMR_FSTT7_Pos                  7                                              /**< (PMC_FSMR) Fast Startup Input Enable 7 Position */
#define PMC_FSMR_FSTT7_Msk                  (_U_(0x1) << PMC_FSMR_FSTT7_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 7 Mask */
#define PMC_FSMR_FSTT7                      PMC_FSMR_FSTT7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT7_Msk instead */
#define PMC_FSMR_FSTT8_Pos                  8                                              /**< (PMC_FSMR) Fast Startup Input Enable 8 Position */
#define PMC_FSMR_FSTT8_Msk                  (_U_(0x1) << PMC_FSMR_FSTT8_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 8 Mask */
#define PMC_FSMR_FSTT8                      PMC_FSMR_FSTT8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT8_Msk instead */
#define PMC_FSMR_FSTT9_Pos                  9                                              /**< (PMC_FSMR) Fast Startup Input Enable 9 Position */
#define PMC_FSMR_FSTT9_Msk                  (_U_(0x1) << PMC_FSMR_FSTT9_Pos)               /**< (PMC_FSMR) Fast Startup Input Enable 9 Mask */
#define PMC_FSMR_FSTT9                      PMC_FSMR_FSTT9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT9_Msk instead */
#define PMC_FSMR_FSTT10_Pos                 10                                             /**< (PMC_FSMR) Fast Startup Input Enable 10 Position */
#define PMC_FSMR_FSTT10_Msk                 (_U_(0x1) << PMC_FSMR_FSTT10_Pos)              /**< (PMC_FSMR) Fast Startup Input Enable 10 Mask */
#define PMC_FSMR_FSTT10                     PMC_FSMR_FSTT10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT10_Msk instead */
#define PMC_FSMR_FSTT11_Pos                 11                                             /**< (PMC_FSMR) Fast Startup Input Enable 11 Position */
#define PMC_FSMR_FSTT11_Msk                 (_U_(0x1) << PMC_FSMR_FSTT11_Pos)              /**< (PMC_FSMR) Fast Startup Input Enable 11 Mask */
#define PMC_FSMR_FSTT11                     PMC_FSMR_FSTT11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT11_Msk instead */
#define PMC_FSMR_FSTT12_Pos                 12                                             /**< (PMC_FSMR) Fast Startup Input Enable 12 Position */
#define PMC_FSMR_FSTT12_Msk                 (_U_(0x1) << PMC_FSMR_FSTT12_Pos)              /**< (PMC_FSMR) Fast Startup Input Enable 12 Mask */
#define PMC_FSMR_FSTT12                     PMC_FSMR_FSTT12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT12_Msk instead */
#define PMC_FSMR_FSTT13_Pos                 13                                             /**< (PMC_FSMR) Fast Startup Input Enable 13 Position */
#define PMC_FSMR_FSTT13_Msk                 (_U_(0x1) << PMC_FSMR_FSTT13_Pos)              /**< (PMC_FSMR) Fast Startup Input Enable 13 Mask */
#define PMC_FSMR_FSTT13                     PMC_FSMR_FSTT13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT13_Msk instead */
#define PMC_FSMR_FSTT14_Pos                 14                                             /**< (PMC_FSMR) Fast Startup Input Enable 14 Position */
#define PMC_FSMR_FSTT14_Msk                 (_U_(0x1) << PMC_FSMR_FSTT14_Pos)              /**< (PMC_FSMR) Fast Startup Input Enable 14 Mask */
#define PMC_FSMR_FSTT14                     PMC_FSMR_FSTT14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT14_Msk instead */
#define PMC_FSMR_FSTT15_Pos                 15                                             /**< (PMC_FSMR) Fast Startup Input Enable 15 Position */
#define PMC_FSMR_FSTT15_Msk                 (_U_(0x1) << PMC_FSMR_FSTT15_Pos)              /**< (PMC_FSMR) Fast Startup Input Enable 15 Mask */
#define PMC_FSMR_FSTT15                     PMC_FSMR_FSTT15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT15_Msk instead */
#define PMC_FSMR_RTTAL_Pos                  16                                             /**< (PMC_FSMR) RTT Alarm Enable Position */
#define PMC_FSMR_RTTAL_Msk                  (_U_(0x1) << PMC_FSMR_RTTAL_Pos)               /**< (PMC_FSMR) RTT Alarm Enable Mask */
#define PMC_FSMR_RTTAL                      PMC_FSMR_RTTAL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_RTTAL_Msk instead */
#define PMC_FSMR_RTCAL_Pos                  17                                             /**< (PMC_FSMR) RTC Alarm Enable Position */
#define PMC_FSMR_RTCAL_Msk                  (_U_(0x1) << PMC_FSMR_RTCAL_Pos)               /**< (PMC_FSMR) RTC Alarm Enable Mask */
#define PMC_FSMR_RTCAL                      PMC_FSMR_RTCAL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_RTCAL_Msk instead */
#define PMC_FSMR_LPM_Pos                    20                                             /**< (PMC_FSMR) Low-power Mode Position */
#define PMC_FSMR_LPM_Msk                    (_U_(0x1) << PMC_FSMR_LPM_Pos)                 /**< (PMC_FSMR) Low-power Mode Mask */
#define PMC_FSMR_LPM                        PMC_FSMR_LPM_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_LPM_Msk instead */
#define PMC_FSMR_FLPM_Pos                   21                                             /**< (PMC_FSMR) Flash Low-power Mode Position */
#define PMC_FSMR_FLPM_Msk                   (_U_(0x3) << PMC_FSMR_FLPM_Pos)                /**< (PMC_FSMR) Flash Low-power Mode Mask */
#define PMC_FSMR_FLPM(value)                (PMC_FSMR_FLPM_Msk & ((value) << PMC_FSMR_FLPM_Pos))
#define   PMC_FSMR_FLPM_FLASH_STANDBY_Val   _U_(0x0)                                       /**< (PMC_FSMR) Flash is in Standby Mode when system enters Wait Mode  */
#define   PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val _U_(0x1)                                       /**< (PMC_FSMR) Flash is in Deep-power-down mode when system enters Wait Mode  */
#define   PMC_FSMR_FLPM_FLASH_IDLE_Val      _U_(0x2)                                       /**< (PMC_FSMR) Idle mode  */
#define PMC_FSMR_FLPM_FLASH_STANDBY         (PMC_FSMR_FLPM_FLASH_STANDBY_Val << PMC_FSMR_FLPM_Pos)  /**< (PMC_FSMR) Flash is in Standby Mode when system enters Wait Mode Position  */
#define PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN  (PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val << PMC_FSMR_FLPM_Pos)  /**< (PMC_FSMR) Flash is in Deep-power-down mode when system enters Wait Mode Position  */
#define PMC_FSMR_FLPM_FLASH_IDLE            (PMC_FSMR_FLPM_FLASH_IDLE_Val << PMC_FSMR_FLPM_Pos)  /**< (PMC_FSMR) Idle mode Position  */
#define PMC_FSMR_MASK                       _U_(0x73FFFF)                                  /**< \deprecated (PMC_FSMR) Register MASK  (Use PMC_FSMR_Msk instead)  */
#define PMC_FSMR_Msk                        _U_(0x73FFFF)                                  /**< (PMC_FSMR) Register Mask  */

#define PMC_FSMR_FSTT_Pos                   0                                              /**< (PMC_FSMR Position) Fast Startup Input Enable x */
#define PMC_FSMR_FSTT_Msk                   (_U_(0xFFFF) << PMC_FSMR_FSTT_Pos)             /**< (PMC_FSMR Mask) FSTT */
#define PMC_FSMR_FSTT(value)                (PMC_FSMR_FSTT_Msk & ((value) << PMC_FSMR_FSTT_Pos))  

/* -------- PMC_FSPR : (PMC Offset: 0x74) (R/W 32) Fast Startup Polarity Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FSTP0:1;                   /**< bit:      0  Fast Startup Input Polarityx             */
    uint32_t FSTP1:1;                   /**< bit:      1  Fast Startup Input Polarityx             */
    uint32_t FSTP2:1;                   /**< bit:      2  Fast Startup Input Polarityx             */
    uint32_t FSTP3:1;                   /**< bit:      3  Fast Startup Input Polarityx             */
    uint32_t FSTP4:1;                   /**< bit:      4  Fast Startup Input Polarityx             */
    uint32_t FSTP5:1;                   /**< bit:      5  Fast Startup Input Polarityx             */
    uint32_t FSTP6:1;                   /**< bit:      6  Fast Startup Input Polarityx             */
    uint32_t FSTP7:1;                   /**< bit:      7  Fast Startup Input Polarityx             */
    uint32_t FSTP8:1;                   /**< bit:      8  Fast Startup Input Polarityx             */
    uint32_t FSTP9:1;                   /**< bit:      9  Fast Startup Input Polarityx             */
    uint32_t FSTP10:1;                  /**< bit:     10  Fast Startup Input Polarityx             */
    uint32_t FSTP11:1;                  /**< bit:     11  Fast Startup Input Polarityx             */
    uint32_t FSTP12:1;                  /**< bit:     12  Fast Startup Input Polarityx             */
    uint32_t FSTP13:1;                  /**< bit:     13  Fast Startup Input Polarityx             */
    uint32_t FSTP14:1;                  /**< bit:     14  Fast Startup Input Polarityx             */
    uint32_t FSTP15:1;                  /**< bit:     15  Fast Startup Input Polarityx             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t FSTP:16;                   /**< bit:  0..15  Fast Startup Input Polarityx             */
    uint32_t :16;                       /**< bit: 16..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_FSPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_FSPR_OFFSET                     (0x74)                                        /**<  (PMC_FSPR) Fast Startup Polarity Register  Offset */

#define PMC_FSPR_FSTP0_Pos                  0                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP0_Msk                  (_U_(0x1) << PMC_FSPR_FSTP0_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP0                      PMC_FSPR_FSTP0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP0_Msk instead */
#define PMC_FSPR_FSTP1_Pos                  1                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP1_Msk                  (_U_(0x1) << PMC_FSPR_FSTP1_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP1                      PMC_FSPR_FSTP1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP1_Msk instead */
#define PMC_FSPR_FSTP2_Pos                  2                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP2_Msk                  (_U_(0x1) << PMC_FSPR_FSTP2_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP2                      PMC_FSPR_FSTP2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP2_Msk instead */
#define PMC_FSPR_FSTP3_Pos                  3                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP3_Msk                  (_U_(0x1) << PMC_FSPR_FSTP3_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP3                      PMC_FSPR_FSTP3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP3_Msk instead */
#define PMC_FSPR_FSTP4_Pos                  4                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP4_Msk                  (_U_(0x1) << PMC_FSPR_FSTP4_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP4                      PMC_FSPR_FSTP4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP4_Msk instead */
#define PMC_FSPR_FSTP5_Pos                  5                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP5_Msk                  (_U_(0x1) << PMC_FSPR_FSTP5_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP5                      PMC_FSPR_FSTP5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP5_Msk instead */
#define PMC_FSPR_FSTP6_Pos                  6                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP6_Msk                  (_U_(0x1) << PMC_FSPR_FSTP6_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP6                      PMC_FSPR_FSTP6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP6_Msk instead */
#define PMC_FSPR_FSTP7_Pos                  7                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP7_Msk                  (_U_(0x1) << PMC_FSPR_FSTP7_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP7                      PMC_FSPR_FSTP7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP7_Msk instead */
#define PMC_FSPR_FSTP8_Pos                  8                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP8_Msk                  (_U_(0x1) << PMC_FSPR_FSTP8_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP8                      PMC_FSPR_FSTP8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP8_Msk instead */
#define PMC_FSPR_FSTP9_Pos                  9                                              /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP9_Msk                  (_U_(0x1) << PMC_FSPR_FSTP9_Pos)               /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP9                      PMC_FSPR_FSTP9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP9_Msk instead */
#define PMC_FSPR_FSTP10_Pos                 10                                             /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP10_Msk                 (_U_(0x1) << PMC_FSPR_FSTP10_Pos)              /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP10                     PMC_FSPR_FSTP10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP10_Msk instead */
#define PMC_FSPR_FSTP11_Pos                 11                                             /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP11_Msk                 (_U_(0x1) << PMC_FSPR_FSTP11_Pos)              /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP11                     PMC_FSPR_FSTP11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP11_Msk instead */
#define PMC_FSPR_FSTP12_Pos                 12                                             /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP12_Msk                 (_U_(0x1) << PMC_FSPR_FSTP12_Pos)              /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP12                     PMC_FSPR_FSTP12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP12_Msk instead */
#define PMC_FSPR_FSTP13_Pos                 13                                             /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP13_Msk                 (_U_(0x1) << PMC_FSPR_FSTP13_Pos)              /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP13                     PMC_FSPR_FSTP13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP13_Msk instead */
#define PMC_FSPR_FSTP14_Pos                 14                                             /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP14_Msk                 (_U_(0x1) << PMC_FSPR_FSTP14_Pos)              /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP14                     PMC_FSPR_FSTP14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP14_Msk instead */
#define PMC_FSPR_FSTP15_Pos                 15                                             /**< (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP15_Msk                 (_U_(0x1) << PMC_FSPR_FSTP15_Pos)              /**< (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP15                     PMC_FSPR_FSTP15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP15_Msk instead */
#define PMC_FSPR_MASK                       _U_(0xFFFF)                                    /**< \deprecated (PMC_FSPR) Register MASK  (Use PMC_FSPR_Msk instead)  */
#define PMC_FSPR_Msk                        _U_(0xFFFF)                                    /**< (PMC_FSPR) Register Mask  */

#define PMC_FSPR_FSTP_Pos                   0                                              /**< (PMC_FSPR Position) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP_Msk                   (_U_(0xFFFF) << PMC_FSPR_FSTP_Pos)             /**< (PMC_FSPR Mask) FSTP */
#define PMC_FSPR_FSTP(value)                (PMC_FSPR_FSTP_Msk & ((value) << PMC_FSPR_FSTP_Pos))  

/* -------- PMC_FOCR : (PMC Offset: 0x78) (/W 32) Fault Output Clear Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FOCLR:1;                   /**< bit:      0  Fault Output Clear                       */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_FOCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_FOCR_OFFSET                     (0x78)                                        /**<  (PMC_FOCR) Fault Output Clear Register  Offset */

#define PMC_FOCR_FOCLR_Pos                  0                                              /**< (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                  (_U_(0x1) << PMC_FOCR_FOCLR_Pos)               /**< (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR                      PMC_FOCR_FOCLR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FOCR_FOCLR_Msk instead */
#define PMC_FOCR_MASK                       _U_(0x01)                                      /**< \deprecated (PMC_FOCR) Register MASK  (Use PMC_FOCR_Msk instead)  */
#define PMC_FOCR_Msk                        _U_(0x01)                                      /**< (PMC_FOCR) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_WPMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_WPMR_OFFSET                     (0xE4)                                        /**<  (PMC_WPMR) Write Protection Mode Register  Offset */

#define PMC_WPMR_WPEN_Pos                   0                                              /**< (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                   (_U_(0x1) << PMC_WPMR_WPEN_Pos)                /**< (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN                       PMC_WPMR_WPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_WPMR_WPEN_Msk instead */
#define PMC_WPMR_WPKEY_Pos                  8                                              /**< (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)          /**< (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)               (PMC_WPMR_WPKEY_Msk & ((value) << PMC_WPMR_WPKEY_Pos))
#define   PMC_WPMR_WPKEY_PASSWD_Val         _U_(0x504D43)                                  /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD               (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)  /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PMC_WPMR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (PMC_WPMR) Register MASK  (Use PMC_WPMR_Msk instead)  */
#define PMC_WPMR_Msk                        _U_(0xFFFFFF01)                                /**< (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Violation Status        */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:16;                 /**< bit:  8..23  Write Protection Violation Source        */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_WPSR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_WPSR_OFFSET                     (0xE8)                                        /**<  (PMC_WPSR) Write Protection Status Register  Offset */

#define PMC_WPSR_WPVS_Pos                   0                                              /**< (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                   (_U_(0x1) << PMC_WPSR_WPVS_Pos)                /**< (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS                       PMC_WPSR_WPVS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_WPSR_WPVS_Msk instead */
#define PMC_WPSR_WPVSRC_Pos                 8                                              /**< (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                 (_U_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)           /**< (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)              (PMC_WPSR_WPVSRC_Msk & ((value) << PMC_WPSR_WPVSRC_Pos))
#define PMC_WPSR_MASK                       _U_(0xFFFF01)                                  /**< \deprecated (PMC_WPSR) Register MASK  (Use PMC_WPSR_Msk instead)  */
#define PMC_WPSR_Msk                        _U_(0xFFFF01)                                  /**< (PMC_WPSR) Register Mask  */


/* -------- PMC_OCR : (PMC Offset: 0x110) (R/W 32) Oscillator Calibration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CAL8:7;                    /**< bit:   0..6  RC Oscillator Calibration bits for 8 MHz */
    uint32_t SEL8:1;                    /**< bit:      7  Selection of RC Oscillator Calibration bits for 8 MHz */
    uint32_t CAL16:7;                   /**< bit:  8..14  RC Oscillator Calibration bits for 16 MHz */
    uint32_t SEL16:1;                   /**< bit:     15  Selection of RC Oscillator Calibration bits for 16 MHz */
    uint32_t CAL24:7;                   /**< bit: 16..22  RC Oscillator Calibration bits for 24 MHz */
    uint32_t SEL24:1;                   /**< bit:     23  Selection of RC Oscillator Calibration bits for 24 MHz */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_OCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_OCR_OFFSET                      (0x110)                                       /**<  (PMC_OCR) Oscillator Calibration Register  Offset */

#define PMC_OCR_CAL8_Pos                    0                                              /**< (PMC_OCR) RC Oscillator Calibration bits for 8 MHz Position */
#define PMC_OCR_CAL8_Msk                    (_U_(0x7F) << PMC_OCR_CAL8_Pos)                /**< (PMC_OCR) RC Oscillator Calibration bits for 8 MHz Mask */
#define PMC_OCR_CAL8(value)                 (PMC_OCR_CAL8_Msk & ((value) << PMC_OCR_CAL8_Pos))
#define PMC_OCR_SEL8_Pos                    7                                              /**< (PMC_OCR) Selection of RC Oscillator Calibration bits for 8 MHz Position */
#define PMC_OCR_SEL8_Msk                    (_U_(0x1) << PMC_OCR_SEL8_Pos)                 /**< (PMC_OCR) Selection of RC Oscillator Calibration bits for 8 MHz Mask */
#define PMC_OCR_SEL8                        PMC_OCR_SEL8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_OCR_SEL8_Msk instead */
#define PMC_OCR_CAL16_Pos                   8                                              /**< (PMC_OCR) RC Oscillator Calibration bits for 16 MHz Position */
#define PMC_OCR_CAL16_Msk                   (_U_(0x7F) << PMC_OCR_CAL16_Pos)               /**< (PMC_OCR) RC Oscillator Calibration bits for 16 MHz Mask */
#define PMC_OCR_CAL16(value)                (PMC_OCR_CAL16_Msk & ((value) << PMC_OCR_CAL16_Pos))
#define PMC_OCR_SEL16_Pos                   15                                             /**< (PMC_OCR) Selection of RC Oscillator Calibration bits for 16 MHz Position */
#define PMC_OCR_SEL16_Msk                   (_U_(0x1) << PMC_OCR_SEL16_Pos)                /**< (PMC_OCR) Selection of RC Oscillator Calibration bits for 16 MHz Mask */
#define PMC_OCR_SEL16                       PMC_OCR_SEL16_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_OCR_SEL16_Msk instead */
#define PMC_OCR_CAL24_Pos                   16                                             /**< (PMC_OCR) RC Oscillator Calibration bits for 24 MHz Position */
#define PMC_OCR_CAL24_Msk                   (_U_(0x7F) << PMC_OCR_CAL24_Pos)               /**< (PMC_OCR) RC Oscillator Calibration bits for 24 MHz Mask */
#define PMC_OCR_CAL24(value)                (PMC_OCR_CAL24_Msk & ((value) << PMC_OCR_CAL24_Pos))
#define PMC_OCR_SEL24_Pos                   23                                             /**< (PMC_OCR) Selection of RC Oscillator Calibration bits for 24 MHz Position */
#define PMC_OCR_SEL24_Msk                   (_U_(0x1) << PMC_OCR_SEL24_Pos)                /**< (PMC_OCR) Selection of RC Oscillator Calibration bits for 24 MHz Mask */
#define PMC_OCR_SEL24                       PMC_OCR_SEL24_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_OCR_SEL24_Msk instead */
#define PMC_OCR_MASK                        _U_(0xFFFFFF)                                  /**< \deprecated (PMC_OCR) Register MASK  (Use PMC_OCR_Msk instead)  */
#define PMC_OCR_Msk                         _U_(0xFFFFFF)                                  /**< (PMC_OCR) Register Mask  */


/* -------- PMC_PMMR : (PMC Offset: 0x130) (R/W 32) PLL Maximum Multiplier Value Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PLLA_MMAX:11;              /**< bit:  0..10  PLLA Maximum Allowed Multiplier Value    */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PMMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PMMR_OFFSET                     (0x130)                                       /**<  (PMC_PMMR) PLL Maximum Multiplier Value Register  Offset */

#define PMC_PMMR_PLLA_MMAX_Pos              0                                              /**< (PMC_PMMR) PLLA Maximum Allowed Multiplier Value Position */
#define PMC_PMMR_PLLA_MMAX_Msk              (_U_(0x7FF) << PMC_PMMR_PLLA_MMAX_Pos)         /**< (PMC_PMMR) PLLA Maximum Allowed Multiplier Value Mask */
#define PMC_PMMR_PLLA_MMAX(value)           (PMC_PMMR_PLLA_MMAX_Msk & ((value) << PMC_PMMR_PLLA_MMAX_Pos))
#define PMC_PMMR_MASK                       _U_(0x7FF)                                     /**< \deprecated (PMC_PMMR) Register MASK  (Use PMC_PMMR_Msk instead)  */
#define PMC_PMMR_Msk                        _U_(0x7FF)                                     /**< (PMC_PMMR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PMC hardware registers */
typedef struct {  
  __O  uint32_t PMC_SCER;       /**< (PMC Offset: 0x00) System Clock Enable Register */
  __O  uint32_t PMC_SCDR;       /**< (PMC Offset: 0x04) System Clock Disable Register */
  __I  uint32_t PMC_SCSR;       /**< (PMC Offset: 0x08) System Clock Status Register */
  RoReg8  Reserved1[0x4];
  __O  uint32_t PMC_PCER0;      /**< (PMC Offset: 0x10) Peripheral Clock Enable Register 0 */
  __O  uint32_t PMC_PCDR0;      /**< (PMC Offset: 0x14) Peripheral Clock Disable Register 0 */
  __I  uint32_t PMC_PCSR0;      /**< (PMC Offset: 0x18) Peripheral Clock Status Register 0 */
  RoReg8  Reserved2[0x4];
  __IO uint32_t CKGR_MOR;       /**< (PMC Offset: 0x20) Main Oscillator Register */
  __IO uint32_t CKGR_MCFR;      /**< (PMC Offset: 0x24) Main Clock Frequency Register */
  __IO uint32_t CKGR_PLLAR;     /**< (PMC Offset: 0x28) PLLA Register */
  RoReg8  Reserved3[0x4];
  __IO uint32_t PMC_MCKR;       /**< (PMC Offset: 0x30) Master Clock Register */
  RoReg8  Reserved4[0xC];
  __IO uint32_t PMC_PCK[3];     /**< (PMC Offset: 0x40) Programmable Clock 0 Register 0 */
  RoReg8  Reserved5[0x14];
  __O  uint32_t PMC_IER;        /**< (PMC Offset: 0x60) Interrupt Enable Register */
  __O  uint32_t PMC_IDR;        /**< (PMC Offset: 0x64) Interrupt Disable Register */
  __I  uint32_t PMC_SR;         /**< (PMC Offset: 0x68) Status Register */
  __I  uint32_t PMC_IMR;        /**< (PMC Offset: 0x6C) Interrupt Mask Register */
  __IO uint32_t PMC_FSMR;       /**< (PMC Offset: 0x70) Fast Startup Mode Register */
  __IO uint32_t PMC_FSPR;       /**< (PMC Offset: 0x74) Fast Startup Polarity Register */
  __O  uint32_t PMC_FOCR;       /**< (PMC Offset: 0x78) Fault Output Clear Register */
  RoReg8  Reserved6[0x68];
  __IO uint32_t PMC_WPMR;       /**< (PMC Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t PMC_WPSR;       /**< (PMC Offset: 0xE8) Write Protection Status Register */
  RoReg8  Reserved7[0x24];
  __IO uint32_t PMC_OCR;        /**< (PMC Offset: 0x110) Oscillator Calibration Register */
  RoReg8  Reserved8[0x1C];
  __IO uint32_t PMC_PMMR;       /**< (PMC Offset: 0x130) PLL Maximum Multiplier Value Register */
} Pmc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PMC hardware registers */
typedef struct {  
  __O  PMC_SCER_Type                  PMC_SCER;       /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O  PMC_SCDR_Type                  PMC_SCDR;       /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I  PMC_SCSR_Type                  PMC_SCSR;       /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __I  uint32_t                       Reserved1[1];
  __O  PMC_PCER0_Type                 PMC_PCER0;      /**< Offset: 0x10 ( /W  32) Peripheral Clock Enable Register 0 */
  __O  PMC_PCDR0_Type                 PMC_PCDR0;      /**< Offset: 0x14 ( /W  32) Peripheral Clock Disable Register 0 */
  __I  PMC_PCSR0_Type                 PMC_PCSR0;      /**< Offset: 0x18 (R/   32) Peripheral Clock Status Register 0 */
  __I  uint32_t                       Reserved2[1];
  __IO CKGR_MOR_Type                  CKGR_MOR;       /**< Offset: 0x20 (R/W  32) Main Oscillator Register */
  __IO CKGR_MCFR_Type                 CKGR_MCFR;      /**< Offset: 0x24 (R/W  32) Main Clock Frequency Register */
  __IO CKGR_PLLAR_Type                CKGR_PLLAR;     /**< Offset: 0x28 (R/W  32) PLLA Register */
  __I  uint32_t                       Reserved3[1];
  __IO PMC_MCKR_Type                  PMC_MCKR;       /**< Offset: 0x30 (R/W  32) Master Clock Register */
  __I  uint32_t                       Reserved4[3];
  __IO PMC_PCK_Type                   PMC_PCK[3];     /**< Offset: 0x40 (R/W  32) Programmable Clock 0 Register 0 */
  __I  uint32_t                       Reserved5[5];
  __O  PMC_IER_Type                   PMC_IER;        /**< Offset: 0x60 ( /W  32) Interrupt Enable Register */
  __O  PMC_IDR_Type                   PMC_IDR;        /**< Offset: 0x64 ( /W  32) Interrupt Disable Register */
  __I  PMC_SR_Type                    PMC_SR;         /**< Offset: 0x68 (R/   32) Status Register */
  __I  PMC_IMR_Type                   PMC_IMR;        /**< Offset: 0x6C (R/   32) Interrupt Mask Register */
  __IO PMC_FSMR_Type                  PMC_FSMR;       /**< Offset: 0x70 (R/W  32) Fast Startup Mode Register */
  __IO PMC_FSPR_Type                  PMC_FSPR;       /**< Offset: 0x74 (R/W  32) Fast Startup Polarity Register */
  __O  PMC_FOCR_Type                  PMC_FOCR;       /**< Offset: 0x78 ( /W  32) Fault Output Clear Register */
  __I  uint32_t                       Reserved6[26];
  __IO PMC_WPMR_Type                  PMC_WPMR;       /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  PMC_WPSR_Type                  PMC_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I  uint32_t                       Reserved7[9];
  __IO PMC_OCR_Type                   PMC_OCR;        /**< Offset: 0x110 (R/W  32) Oscillator Calibration Register */
  __I  uint32_t                       Reserved8[7];
  __IO PMC_PMMR_Type                  PMC_PMMR;       /**< Offset: 0x130 (R/W  32) PLL Maximum Multiplier Value Register */
} Pmc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Power Management Controller */

#endif /* _SAMG51_PMC_COMPONENT_H_ */
