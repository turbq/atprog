/**
 * \file
 *
 * \brief Component description for GPIO
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAM4L_GPIO_COMPONENT_
#define _SAM4L_GPIO_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GPIO */
/* ========================================================================== */
/** \addtogroup SAM4L_GPIO General-Purpose Input/Output Controller */
/*@{*/

#define GPIO_I7512
#define REV_GPIO                    0x215

/* -------- GPIO_GPER : (GPIO Offset: 0x000) (R/W 32) port GPIO Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  GPIO Enable                        */
    uint32_t P1:1;             /*!< bit:      1  GPIO Enable                        */
    uint32_t P2:1;             /*!< bit:      2  GPIO Enable                        */
    uint32_t P3:1;             /*!< bit:      3  GPIO Enable                        */
    uint32_t P4:1;             /*!< bit:      4  GPIO Enable                        */
    uint32_t P5:1;             /*!< bit:      5  GPIO Enable                        */
    uint32_t P6:1;             /*!< bit:      6  GPIO Enable                        */
    uint32_t P7:1;             /*!< bit:      7  GPIO Enable                        */
    uint32_t P8:1;             /*!< bit:      8  GPIO Enable                        */
    uint32_t P9:1;             /*!< bit:      9  GPIO Enable                        */
    uint32_t P10:1;            /*!< bit:     10  GPIO Enable                        */
    uint32_t P11:1;            /*!< bit:     11  GPIO Enable                        */
    uint32_t P12:1;            /*!< bit:     12  GPIO Enable                        */
    uint32_t P13:1;            /*!< bit:     13  GPIO Enable                        */
    uint32_t P14:1;            /*!< bit:     14  GPIO Enable                        */
    uint32_t P15:1;            /*!< bit:     15  GPIO Enable                        */
    uint32_t P16:1;            /*!< bit:     16  GPIO Enable                        */
    uint32_t P17:1;            /*!< bit:     17  GPIO Enable                        */
    uint32_t P18:1;            /*!< bit:     18  GPIO Enable                        */
    uint32_t P19:1;            /*!< bit:     19  GPIO Enable                        */
    uint32_t P20:1;            /*!< bit:     20  GPIO Enable                        */
    uint32_t P21:1;            /*!< bit:     21  GPIO Enable                        */
    uint32_t P22:1;            /*!< bit:     22  GPIO Enable                        */
    uint32_t P23:1;            /*!< bit:     23  GPIO Enable                        */
    uint32_t P24:1;            /*!< bit:     24  GPIO Enable                        */
    uint32_t P25:1;            /*!< bit:     25  GPIO Enable                        */
    uint32_t P26:1;            /*!< bit:     26  GPIO Enable                        */
    uint32_t P27:1;            /*!< bit:     27  GPIO Enable                        */
    uint32_t P28:1;            /*!< bit:     28  GPIO Enable                        */
    uint32_t P29:1;            /*!< bit:     29  GPIO Enable                        */
    uint32_t P30:1;            /*!< bit:     30  GPIO Enable                        */
    uint32_t P31:1;            /*!< bit:     31  GPIO Enable                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GPER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GPER_OFFSET            0x000        /**< \brief (GPIO_GPER offset) GPIO Enable Register */

#define GPIO_GPER_P0_Pos            0            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P0                (_U(0x1) << GPIO_GPER_P0_Pos)
#define GPIO_GPER_P1_Pos            1            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P1                (_U(0x1) << GPIO_GPER_P1_Pos)
#define GPIO_GPER_P2_Pos            2            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P2                (_U(0x1) << GPIO_GPER_P2_Pos)
#define GPIO_GPER_P3_Pos            3            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P3                (_U(0x1) << GPIO_GPER_P3_Pos)
#define GPIO_GPER_P4_Pos            4            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P4                (_U(0x1) << GPIO_GPER_P4_Pos)
#define GPIO_GPER_P5_Pos            5            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P5                (_U(0x1) << GPIO_GPER_P5_Pos)
#define GPIO_GPER_P6_Pos            6            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P6                (_U(0x1) << GPIO_GPER_P6_Pos)
#define GPIO_GPER_P7_Pos            7            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P7                (_U(0x1) << GPIO_GPER_P7_Pos)
#define GPIO_GPER_P8_Pos            8            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P8                (_U(0x1) << GPIO_GPER_P8_Pos)
#define GPIO_GPER_P9_Pos            9            /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P9                (_U(0x1) << GPIO_GPER_P9_Pos)
#define GPIO_GPER_P10_Pos           10           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P10               (_U(0x1) << GPIO_GPER_P10_Pos)
#define GPIO_GPER_P11_Pos           11           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P11               (_U(0x1) << GPIO_GPER_P11_Pos)
#define GPIO_GPER_P12_Pos           12           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P12               (_U(0x1) << GPIO_GPER_P12_Pos)
#define GPIO_GPER_P13_Pos           13           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P13               (_U(0x1) << GPIO_GPER_P13_Pos)
#define GPIO_GPER_P14_Pos           14           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P14               (_U(0x1) << GPIO_GPER_P14_Pos)
#define GPIO_GPER_P15_Pos           15           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P15               (_U(0x1) << GPIO_GPER_P15_Pos)
#define GPIO_GPER_P16_Pos           16           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P16               (_U(0x1) << GPIO_GPER_P16_Pos)
#define GPIO_GPER_P17_Pos           17           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P17               (_U(0x1) << GPIO_GPER_P17_Pos)
#define GPIO_GPER_P18_Pos           18           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P18               (_U(0x1) << GPIO_GPER_P18_Pos)
#define GPIO_GPER_P19_Pos           19           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P19               (_U(0x1) << GPIO_GPER_P19_Pos)
#define GPIO_GPER_P20_Pos           20           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P20               (_U(0x1) << GPIO_GPER_P20_Pos)
#define GPIO_GPER_P21_Pos           21           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P21               (_U(0x1) << GPIO_GPER_P21_Pos)
#define GPIO_GPER_P22_Pos           22           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P22               (_U(0x1) << GPIO_GPER_P22_Pos)
#define GPIO_GPER_P23_Pos           23           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P23               (_U(0x1) << GPIO_GPER_P23_Pos)
#define GPIO_GPER_P24_Pos           24           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P24               (_U(0x1) << GPIO_GPER_P24_Pos)
#define GPIO_GPER_P25_Pos           25           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P25               (_U(0x1) << GPIO_GPER_P25_Pos)
#define GPIO_GPER_P26_Pos           26           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P26               (_U(0x1) << GPIO_GPER_P26_Pos)
#define GPIO_GPER_P27_Pos           27           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P27               (_U(0x1) << GPIO_GPER_P27_Pos)
#define GPIO_GPER_P28_Pos           28           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P28               (_U(0x1) << GPIO_GPER_P28_Pos)
#define GPIO_GPER_P29_Pos           29           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P29               (_U(0x1) << GPIO_GPER_P29_Pos)
#define GPIO_GPER_P30_Pos           30           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P30               (_U(0x1) << GPIO_GPER_P30_Pos)
#define GPIO_GPER_P31_Pos           31           /**< \brief (GPIO_GPER) GPIO Enable */
#define GPIO_GPER_P31               (_U(0x1) << GPIO_GPER_P31_Pos)
#define GPIO_GPER_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_GPER) MASK Register */

/* -------- GPIO_GPERS : (GPIO Offset: 0x004) ( /W 32) port GPIO Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  GPIO Enable                        */
    uint32_t P1:1;             /*!< bit:      1  GPIO Enable                        */
    uint32_t P2:1;             /*!< bit:      2  GPIO Enable                        */
    uint32_t P3:1;             /*!< bit:      3  GPIO Enable                        */
    uint32_t P4:1;             /*!< bit:      4  GPIO Enable                        */
    uint32_t P5:1;             /*!< bit:      5  GPIO Enable                        */
    uint32_t P6:1;             /*!< bit:      6  GPIO Enable                        */
    uint32_t P7:1;             /*!< bit:      7  GPIO Enable                        */
    uint32_t P8:1;             /*!< bit:      8  GPIO Enable                        */
    uint32_t P9:1;             /*!< bit:      9  GPIO Enable                        */
    uint32_t P10:1;            /*!< bit:     10  GPIO Enable                        */
    uint32_t P11:1;            /*!< bit:     11  GPIO Enable                        */
    uint32_t P12:1;            /*!< bit:     12  GPIO Enable                        */
    uint32_t P13:1;            /*!< bit:     13  GPIO Enable                        */
    uint32_t P14:1;            /*!< bit:     14  GPIO Enable                        */
    uint32_t P15:1;            /*!< bit:     15  GPIO Enable                        */
    uint32_t P16:1;            /*!< bit:     16  GPIO Enable                        */
    uint32_t P17:1;            /*!< bit:     17  GPIO Enable                        */
    uint32_t P18:1;            /*!< bit:     18  GPIO Enable                        */
    uint32_t P19:1;            /*!< bit:     19  GPIO Enable                        */
    uint32_t P20:1;            /*!< bit:     20  GPIO Enable                        */
    uint32_t P21:1;            /*!< bit:     21  GPIO Enable                        */
    uint32_t P22:1;            /*!< bit:     22  GPIO Enable                        */
    uint32_t P23:1;            /*!< bit:     23  GPIO Enable                        */
    uint32_t P24:1;            /*!< bit:     24  GPIO Enable                        */
    uint32_t P25:1;            /*!< bit:     25  GPIO Enable                        */
    uint32_t P26:1;            /*!< bit:     26  GPIO Enable                        */
    uint32_t P27:1;            /*!< bit:     27  GPIO Enable                        */
    uint32_t P28:1;            /*!< bit:     28  GPIO Enable                        */
    uint32_t P29:1;            /*!< bit:     29  GPIO Enable                        */
    uint32_t P30:1;            /*!< bit:     30  GPIO Enable                        */
    uint32_t P31:1;            /*!< bit:     31  GPIO Enable                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GPERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GPERS_OFFSET           0x004        /**< \brief (GPIO_GPERS offset) GPIO Enable Register - Set */

#define GPIO_GPERS_P0_Pos           0            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P0               (_U(0x1) << GPIO_GPERS_P0_Pos)
#define GPIO_GPERS_P1_Pos           1            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P1               (_U(0x1) << GPIO_GPERS_P1_Pos)
#define GPIO_GPERS_P2_Pos           2            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P2               (_U(0x1) << GPIO_GPERS_P2_Pos)
#define GPIO_GPERS_P3_Pos           3            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P3               (_U(0x1) << GPIO_GPERS_P3_Pos)
#define GPIO_GPERS_P4_Pos           4            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P4               (_U(0x1) << GPIO_GPERS_P4_Pos)
#define GPIO_GPERS_P5_Pos           5            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P5               (_U(0x1) << GPIO_GPERS_P5_Pos)
#define GPIO_GPERS_P6_Pos           6            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P6               (_U(0x1) << GPIO_GPERS_P6_Pos)
#define GPIO_GPERS_P7_Pos           7            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P7               (_U(0x1) << GPIO_GPERS_P7_Pos)
#define GPIO_GPERS_P8_Pos           8            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P8               (_U(0x1) << GPIO_GPERS_P8_Pos)
#define GPIO_GPERS_P9_Pos           9            /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P9               (_U(0x1) << GPIO_GPERS_P9_Pos)
#define GPIO_GPERS_P10_Pos          10           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P10              (_U(0x1) << GPIO_GPERS_P10_Pos)
#define GPIO_GPERS_P11_Pos          11           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P11              (_U(0x1) << GPIO_GPERS_P11_Pos)
#define GPIO_GPERS_P12_Pos          12           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P12              (_U(0x1) << GPIO_GPERS_P12_Pos)
#define GPIO_GPERS_P13_Pos          13           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P13              (_U(0x1) << GPIO_GPERS_P13_Pos)
#define GPIO_GPERS_P14_Pos          14           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P14              (_U(0x1) << GPIO_GPERS_P14_Pos)
#define GPIO_GPERS_P15_Pos          15           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P15              (_U(0x1) << GPIO_GPERS_P15_Pos)
#define GPIO_GPERS_P16_Pos          16           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P16              (_U(0x1) << GPIO_GPERS_P16_Pos)
#define GPIO_GPERS_P17_Pos          17           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P17              (_U(0x1) << GPIO_GPERS_P17_Pos)
#define GPIO_GPERS_P18_Pos          18           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P18              (_U(0x1) << GPIO_GPERS_P18_Pos)
#define GPIO_GPERS_P19_Pos          19           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P19              (_U(0x1) << GPIO_GPERS_P19_Pos)
#define GPIO_GPERS_P20_Pos          20           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P20              (_U(0x1) << GPIO_GPERS_P20_Pos)
#define GPIO_GPERS_P21_Pos          21           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P21              (_U(0x1) << GPIO_GPERS_P21_Pos)
#define GPIO_GPERS_P22_Pos          22           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P22              (_U(0x1) << GPIO_GPERS_P22_Pos)
#define GPIO_GPERS_P23_Pos          23           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P23              (_U(0x1) << GPIO_GPERS_P23_Pos)
#define GPIO_GPERS_P24_Pos          24           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P24              (_U(0x1) << GPIO_GPERS_P24_Pos)
#define GPIO_GPERS_P25_Pos          25           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P25              (_U(0x1) << GPIO_GPERS_P25_Pos)
#define GPIO_GPERS_P26_Pos          26           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P26              (_U(0x1) << GPIO_GPERS_P26_Pos)
#define GPIO_GPERS_P27_Pos          27           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P27              (_U(0x1) << GPIO_GPERS_P27_Pos)
#define GPIO_GPERS_P28_Pos          28           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P28              (_U(0x1) << GPIO_GPERS_P28_Pos)
#define GPIO_GPERS_P29_Pos          29           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P29              (_U(0x1) << GPIO_GPERS_P29_Pos)
#define GPIO_GPERS_P30_Pos          30           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P30              (_U(0x1) << GPIO_GPERS_P30_Pos)
#define GPIO_GPERS_P31_Pos          31           /**< \brief (GPIO_GPERS) GPIO Enable */
#define GPIO_GPERS_P31              (_U(0x1) << GPIO_GPERS_P31_Pos)
#define GPIO_GPERS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_GPERS) MASK Register */

/* -------- GPIO_GPERC : (GPIO Offset: 0x008) ( /W 32) port GPIO Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  GPIO Enable                        */
    uint32_t P1:1;             /*!< bit:      1  GPIO Enable                        */
    uint32_t P2:1;             /*!< bit:      2  GPIO Enable                        */
    uint32_t P3:1;             /*!< bit:      3  GPIO Enable                        */
    uint32_t P4:1;             /*!< bit:      4  GPIO Enable                        */
    uint32_t P5:1;             /*!< bit:      5  GPIO Enable                        */
    uint32_t P6:1;             /*!< bit:      6  GPIO Enable                        */
    uint32_t P7:1;             /*!< bit:      7  GPIO Enable                        */
    uint32_t P8:1;             /*!< bit:      8  GPIO Enable                        */
    uint32_t P9:1;             /*!< bit:      9  GPIO Enable                        */
    uint32_t P10:1;            /*!< bit:     10  GPIO Enable                        */
    uint32_t P11:1;            /*!< bit:     11  GPIO Enable                        */
    uint32_t P12:1;            /*!< bit:     12  GPIO Enable                        */
    uint32_t P13:1;            /*!< bit:     13  GPIO Enable                        */
    uint32_t P14:1;            /*!< bit:     14  GPIO Enable                        */
    uint32_t P15:1;            /*!< bit:     15  GPIO Enable                        */
    uint32_t P16:1;            /*!< bit:     16  GPIO Enable                        */
    uint32_t P17:1;            /*!< bit:     17  GPIO Enable                        */
    uint32_t P18:1;            /*!< bit:     18  GPIO Enable                        */
    uint32_t P19:1;            /*!< bit:     19  GPIO Enable                        */
    uint32_t P20:1;            /*!< bit:     20  GPIO Enable                        */
    uint32_t P21:1;            /*!< bit:     21  GPIO Enable                        */
    uint32_t P22:1;            /*!< bit:     22  GPIO Enable                        */
    uint32_t P23:1;            /*!< bit:     23  GPIO Enable                        */
    uint32_t P24:1;            /*!< bit:     24  GPIO Enable                        */
    uint32_t P25:1;            /*!< bit:     25  GPIO Enable                        */
    uint32_t P26:1;            /*!< bit:     26  GPIO Enable                        */
    uint32_t P27:1;            /*!< bit:     27  GPIO Enable                        */
    uint32_t P28:1;            /*!< bit:     28  GPIO Enable                        */
    uint32_t P29:1;            /*!< bit:     29  GPIO Enable                        */
    uint32_t P30:1;            /*!< bit:     30  GPIO Enable                        */
    uint32_t P31:1;            /*!< bit:     31  GPIO Enable                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GPERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GPERC_OFFSET           0x008        /**< \brief (GPIO_GPERC offset) GPIO Enable Register - Clear */

#define GPIO_GPERC_P0_Pos           0            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P0               (_U(0x1) << GPIO_GPERC_P0_Pos)
#define GPIO_GPERC_P1_Pos           1            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P1               (_U(0x1) << GPIO_GPERC_P1_Pos)
#define GPIO_GPERC_P2_Pos           2            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P2               (_U(0x1) << GPIO_GPERC_P2_Pos)
#define GPIO_GPERC_P3_Pos           3            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P3               (_U(0x1) << GPIO_GPERC_P3_Pos)
#define GPIO_GPERC_P4_Pos           4            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P4               (_U(0x1) << GPIO_GPERC_P4_Pos)
#define GPIO_GPERC_P5_Pos           5            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P5               (_U(0x1) << GPIO_GPERC_P5_Pos)
#define GPIO_GPERC_P6_Pos           6            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P6               (_U(0x1) << GPIO_GPERC_P6_Pos)
#define GPIO_GPERC_P7_Pos           7            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P7               (_U(0x1) << GPIO_GPERC_P7_Pos)
#define GPIO_GPERC_P8_Pos           8            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P8               (_U(0x1) << GPIO_GPERC_P8_Pos)
#define GPIO_GPERC_P9_Pos           9            /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P9               (_U(0x1) << GPIO_GPERC_P9_Pos)
#define GPIO_GPERC_P10_Pos          10           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P10              (_U(0x1) << GPIO_GPERC_P10_Pos)
#define GPIO_GPERC_P11_Pos          11           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P11              (_U(0x1) << GPIO_GPERC_P11_Pos)
#define GPIO_GPERC_P12_Pos          12           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P12              (_U(0x1) << GPIO_GPERC_P12_Pos)
#define GPIO_GPERC_P13_Pos          13           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P13              (_U(0x1) << GPIO_GPERC_P13_Pos)
#define GPIO_GPERC_P14_Pos          14           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P14              (_U(0x1) << GPIO_GPERC_P14_Pos)
#define GPIO_GPERC_P15_Pos          15           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P15              (_U(0x1) << GPIO_GPERC_P15_Pos)
#define GPIO_GPERC_P16_Pos          16           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P16              (_U(0x1) << GPIO_GPERC_P16_Pos)
#define GPIO_GPERC_P17_Pos          17           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P17              (_U(0x1) << GPIO_GPERC_P17_Pos)
#define GPIO_GPERC_P18_Pos          18           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P18              (_U(0x1) << GPIO_GPERC_P18_Pos)
#define GPIO_GPERC_P19_Pos          19           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P19              (_U(0x1) << GPIO_GPERC_P19_Pos)
#define GPIO_GPERC_P20_Pos          20           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P20              (_U(0x1) << GPIO_GPERC_P20_Pos)
#define GPIO_GPERC_P21_Pos          21           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P21              (_U(0x1) << GPIO_GPERC_P21_Pos)
#define GPIO_GPERC_P22_Pos          22           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P22              (_U(0x1) << GPIO_GPERC_P22_Pos)
#define GPIO_GPERC_P23_Pos          23           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P23              (_U(0x1) << GPIO_GPERC_P23_Pos)
#define GPIO_GPERC_P24_Pos          24           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P24              (_U(0x1) << GPIO_GPERC_P24_Pos)
#define GPIO_GPERC_P25_Pos          25           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P25              (_U(0x1) << GPIO_GPERC_P25_Pos)
#define GPIO_GPERC_P26_Pos          26           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P26              (_U(0x1) << GPIO_GPERC_P26_Pos)
#define GPIO_GPERC_P27_Pos          27           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P27              (_U(0x1) << GPIO_GPERC_P27_Pos)
#define GPIO_GPERC_P28_Pos          28           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P28              (_U(0x1) << GPIO_GPERC_P28_Pos)
#define GPIO_GPERC_P29_Pos          29           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P29              (_U(0x1) << GPIO_GPERC_P29_Pos)
#define GPIO_GPERC_P30_Pos          30           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P30              (_U(0x1) << GPIO_GPERC_P30_Pos)
#define GPIO_GPERC_P31_Pos          31           /**< \brief (GPIO_GPERC) GPIO Enable */
#define GPIO_GPERC_P31              (_U(0x1) << GPIO_GPERC_P31_Pos)
#define GPIO_GPERC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_GPERC) MASK Register */

/* -------- GPIO_GPERT : (GPIO Offset: 0x00C) ( /W 32) port GPIO Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  GPIO Enable                        */
    uint32_t P1:1;             /*!< bit:      1  GPIO Enable                        */
    uint32_t P2:1;             /*!< bit:      2  GPIO Enable                        */
    uint32_t P3:1;             /*!< bit:      3  GPIO Enable                        */
    uint32_t P4:1;             /*!< bit:      4  GPIO Enable                        */
    uint32_t P5:1;             /*!< bit:      5  GPIO Enable                        */
    uint32_t P6:1;             /*!< bit:      6  GPIO Enable                        */
    uint32_t P7:1;             /*!< bit:      7  GPIO Enable                        */
    uint32_t P8:1;             /*!< bit:      8  GPIO Enable                        */
    uint32_t P9:1;             /*!< bit:      9  GPIO Enable                        */
    uint32_t P10:1;            /*!< bit:     10  GPIO Enable                        */
    uint32_t P11:1;            /*!< bit:     11  GPIO Enable                        */
    uint32_t P12:1;            /*!< bit:     12  GPIO Enable                        */
    uint32_t P13:1;            /*!< bit:     13  GPIO Enable                        */
    uint32_t P14:1;            /*!< bit:     14  GPIO Enable                        */
    uint32_t P15:1;            /*!< bit:     15  GPIO Enable                        */
    uint32_t P16:1;            /*!< bit:     16  GPIO Enable                        */
    uint32_t P17:1;            /*!< bit:     17  GPIO Enable                        */
    uint32_t P18:1;            /*!< bit:     18  GPIO Enable                        */
    uint32_t P19:1;            /*!< bit:     19  GPIO Enable                        */
    uint32_t P20:1;            /*!< bit:     20  GPIO Enable                        */
    uint32_t P21:1;            /*!< bit:     21  GPIO Enable                        */
    uint32_t P22:1;            /*!< bit:     22  GPIO Enable                        */
    uint32_t P23:1;            /*!< bit:     23  GPIO Enable                        */
    uint32_t P24:1;            /*!< bit:     24  GPIO Enable                        */
    uint32_t P25:1;            /*!< bit:     25  GPIO Enable                        */
    uint32_t P26:1;            /*!< bit:     26  GPIO Enable                        */
    uint32_t P27:1;            /*!< bit:     27  GPIO Enable                        */
    uint32_t P28:1;            /*!< bit:     28  GPIO Enable                        */
    uint32_t P29:1;            /*!< bit:     29  GPIO Enable                        */
    uint32_t P30:1;            /*!< bit:     30  GPIO Enable                        */
    uint32_t P31:1;            /*!< bit:     31  GPIO Enable                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GPERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GPERT_OFFSET           0x00C        /**< \brief (GPIO_GPERT offset) GPIO Enable Register - Toggle */

#define GPIO_GPERT_P0_Pos           0            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P0               (_U(0x1) << GPIO_GPERT_P0_Pos)
#define GPIO_GPERT_P1_Pos           1            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P1               (_U(0x1) << GPIO_GPERT_P1_Pos)
#define GPIO_GPERT_P2_Pos           2            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P2               (_U(0x1) << GPIO_GPERT_P2_Pos)
#define GPIO_GPERT_P3_Pos           3            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P3               (_U(0x1) << GPIO_GPERT_P3_Pos)
#define GPIO_GPERT_P4_Pos           4            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P4               (_U(0x1) << GPIO_GPERT_P4_Pos)
#define GPIO_GPERT_P5_Pos           5            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P5               (_U(0x1) << GPIO_GPERT_P5_Pos)
#define GPIO_GPERT_P6_Pos           6            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P6               (_U(0x1) << GPIO_GPERT_P6_Pos)
#define GPIO_GPERT_P7_Pos           7            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P7               (_U(0x1) << GPIO_GPERT_P7_Pos)
#define GPIO_GPERT_P8_Pos           8            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P8               (_U(0x1) << GPIO_GPERT_P8_Pos)
#define GPIO_GPERT_P9_Pos           9            /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P9               (_U(0x1) << GPIO_GPERT_P9_Pos)
#define GPIO_GPERT_P10_Pos          10           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P10              (_U(0x1) << GPIO_GPERT_P10_Pos)
#define GPIO_GPERT_P11_Pos          11           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P11              (_U(0x1) << GPIO_GPERT_P11_Pos)
#define GPIO_GPERT_P12_Pos          12           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P12              (_U(0x1) << GPIO_GPERT_P12_Pos)
#define GPIO_GPERT_P13_Pos          13           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P13              (_U(0x1) << GPIO_GPERT_P13_Pos)
#define GPIO_GPERT_P14_Pos          14           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P14              (_U(0x1) << GPIO_GPERT_P14_Pos)
#define GPIO_GPERT_P15_Pos          15           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P15              (_U(0x1) << GPIO_GPERT_P15_Pos)
#define GPIO_GPERT_P16_Pos          16           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P16              (_U(0x1) << GPIO_GPERT_P16_Pos)
#define GPIO_GPERT_P17_Pos          17           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P17              (_U(0x1) << GPIO_GPERT_P17_Pos)
#define GPIO_GPERT_P18_Pos          18           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P18              (_U(0x1) << GPIO_GPERT_P18_Pos)
#define GPIO_GPERT_P19_Pos          19           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P19              (_U(0x1) << GPIO_GPERT_P19_Pos)
#define GPIO_GPERT_P20_Pos          20           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P20              (_U(0x1) << GPIO_GPERT_P20_Pos)
#define GPIO_GPERT_P21_Pos          21           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P21              (_U(0x1) << GPIO_GPERT_P21_Pos)
#define GPIO_GPERT_P22_Pos          22           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P22              (_U(0x1) << GPIO_GPERT_P22_Pos)
#define GPIO_GPERT_P23_Pos          23           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P23              (_U(0x1) << GPIO_GPERT_P23_Pos)
#define GPIO_GPERT_P24_Pos          24           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P24              (_U(0x1) << GPIO_GPERT_P24_Pos)
#define GPIO_GPERT_P25_Pos          25           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P25              (_U(0x1) << GPIO_GPERT_P25_Pos)
#define GPIO_GPERT_P26_Pos          26           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P26              (_U(0x1) << GPIO_GPERT_P26_Pos)
#define GPIO_GPERT_P27_Pos          27           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P27              (_U(0x1) << GPIO_GPERT_P27_Pos)
#define GPIO_GPERT_P28_Pos          28           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P28              (_U(0x1) << GPIO_GPERT_P28_Pos)
#define GPIO_GPERT_P29_Pos          29           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P29              (_U(0x1) << GPIO_GPERT_P29_Pos)
#define GPIO_GPERT_P30_Pos          30           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P30              (_U(0x1) << GPIO_GPERT_P30_Pos)
#define GPIO_GPERT_P31_Pos          31           /**< \brief (GPIO_GPERT) GPIO Enable */
#define GPIO_GPERT_P31              (_U(0x1) << GPIO_GPERT_P31_Pos)
#define GPIO_GPERT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_GPERT) MASK Register */

/* -------- GPIO_PMR0 : (GPIO Offset: 0x010) (R/W 32) port Peripheral Mux Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR0_OFFSET            0x010        /**< \brief (GPIO_PMR0 offset) Peripheral Mux Register 0 */

#define GPIO_PMR0_P0_Pos            0            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P0                (_U(0x1) << GPIO_PMR0_P0_Pos)
#define GPIO_PMR0_P1_Pos            1            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P1                (_U(0x1) << GPIO_PMR0_P1_Pos)
#define GPIO_PMR0_P2_Pos            2            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P2                (_U(0x1) << GPIO_PMR0_P2_Pos)
#define GPIO_PMR0_P3_Pos            3            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P3                (_U(0x1) << GPIO_PMR0_P3_Pos)
#define GPIO_PMR0_P4_Pos            4            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P4                (_U(0x1) << GPIO_PMR0_P4_Pos)
#define GPIO_PMR0_P5_Pos            5            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P5                (_U(0x1) << GPIO_PMR0_P5_Pos)
#define GPIO_PMR0_P6_Pos            6            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P6                (_U(0x1) << GPIO_PMR0_P6_Pos)
#define GPIO_PMR0_P7_Pos            7            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P7                (_U(0x1) << GPIO_PMR0_P7_Pos)
#define GPIO_PMR0_P8_Pos            8            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P8                (_U(0x1) << GPIO_PMR0_P8_Pos)
#define GPIO_PMR0_P9_Pos            9            /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P9                (_U(0x1) << GPIO_PMR0_P9_Pos)
#define GPIO_PMR0_P10_Pos           10           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P10               (_U(0x1) << GPIO_PMR0_P10_Pos)
#define GPIO_PMR0_P11_Pos           11           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P11               (_U(0x1) << GPIO_PMR0_P11_Pos)
#define GPIO_PMR0_P12_Pos           12           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P12               (_U(0x1) << GPIO_PMR0_P12_Pos)
#define GPIO_PMR0_P13_Pos           13           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P13               (_U(0x1) << GPIO_PMR0_P13_Pos)
#define GPIO_PMR0_P14_Pos           14           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P14               (_U(0x1) << GPIO_PMR0_P14_Pos)
#define GPIO_PMR0_P15_Pos           15           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P15               (_U(0x1) << GPIO_PMR0_P15_Pos)
#define GPIO_PMR0_P16_Pos           16           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P16               (_U(0x1) << GPIO_PMR0_P16_Pos)
#define GPIO_PMR0_P17_Pos           17           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P17               (_U(0x1) << GPIO_PMR0_P17_Pos)
#define GPIO_PMR0_P18_Pos           18           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P18               (_U(0x1) << GPIO_PMR0_P18_Pos)
#define GPIO_PMR0_P19_Pos           19           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P19               (_U(0x1) << GPIO_PMR0_P19_Pos)
#define GPIO_PMR0_P20_Pos           20           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P20               (_U(0x1) << GPIO_PMR0_P20_Pos)
#define GPIO_PMR0_P21_Pos           21           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P21               (_U(0x1) << GPIO_PMR0_P21_Pos)
#define GPIO_PMR0_P22_Pos           22           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P22               (_U(0x1) << GPIO_PMR0_P22_Pos)
#define GPIO_PMR0_P23_Pos           23           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P23               (_U(0x1) << GPIO_PMR0_P23_Pos)
#define GPIO_PMR0_P24_Pos           24           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P24               (_U(0x1) << GPIO_PMR0_P24_Pos)
#define GPIO_PMR0_P25_Pos           25           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P25               (_U(0x1) << GPIO_PMR0_P25_Pos)
#define GPIO_PMR0_P26_Pos           26           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P26               (_U(0x1) << GPIO_PMR0_P26_Pos)
#define GPIO_PMR0_P27_Pos           27           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P27               (_U(0x1) << GPIO_PMR0_P27_Pos)
#define GPIO_PMR0_P28_Pos           28           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P28               (_U(0x1) << GPIO_PMR0_P28_Pos)
#define GPIO_PMR0_P29_Pos           29           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P29               (_U(0x1) << GPIO_PMR0_P29_Pos)
#define GPIO_PMR0_P30_Pos           30           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P30               (_U(0x1) << GPIO_PMR0_P30_Pos)
#define GPIO_PMR0_P31_Pos           31           /**< \brief (GPIO_PMR0) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0_P31               (_U(0x1) << GPIO_PMR0_P31_Pos)
#define GPIO_PMR0_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_PMR0) MASK Register */

/* -------- GPIO_PMR0S : (GPIO Offset: 0x014) ( /W 32) port Peripheral Mux Register 0 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR0S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR0S_OFFSET           0x014        /**< \brief (GPIO_PMR0S offset) Peripheral Mux Register 0 - Set */

#define GPIO_PMR0S_P0_Pos           0            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P0               (_U(0x1) << GPIO_PMR0S_P0_Pos)
#define GPIO_PMR0S_P1_Pos           1            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P1               (_U(0x1) << GPIO_PMR0S_P1_Pos)
#define GPIO_PMR0S_P2_Pos           2            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P2               (_U(0x1) << GPIO_PMR0S_P2_Pos)
#define GPIO_PMR0S_P3_Pos           3            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P3               (_U(0x1) << GPIO_PMR0S_P3_Pos)
#define GPIO_PMR0S_P4_Pos           4            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P4               (_U(0x1) << GPIO_PMR0S_P4_Pos)
#define GPIO_PMR0S_P5_Pos           5            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P5               (_U(0x1) << GPIO_PMR0S_P5_Pos)
#define GPIO_PMR0S_P6_Pos           6            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P6               (_U(0x1) << GPIO_PMR0S_P6_Pos)
#define GPIO_PMR0S_P7_Pos           7            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P7               (_U(0x1) << GPIO_PMR0S_P7_Pos)
#define GPIO_PMR0S_P8_Pos           8            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P8               (_U(0x1) << GPIO_PMR0S_P8_Pos)
#define GPIO_PMR0S_P9_Pos           9            /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P9               (_U(0x1) << GPIO_PMR0S_P9_Pos)
#define GPIO_PMR0S_P10_Pos          10           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P10              (_U(0x1) << GPIO_PMR0S_P10_Pos)
#define GPIO_PMR0S_P11_Pos          11           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P11              (_U(0x1) << GPIO_PMR0S_P11_Pos)
#define GPIO_PMR0S_P12_Pos          12           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P12              (_U(0x1) << GPIO_PMR0S_P12_Pos)
#define GPIO_PMR0S_P13_Pos          13           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P13              (_U(0x1) << GPIO_PMR0S_P13_Pos)
#define GPIO_PMR0S_P14_Pos          14           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P14              (_U(0x1) << GPIO_PMR0S_P14_Pos)
#define GPIO_PMR0S_P15_Pos          15           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P15              (_U(0x1) << GPIO_PMR0S_P15_Pos)
#define GPIO_PMR0S_P16_Pos          16           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P16              (_U(0x1) << GPIO_PMR0S_P16_Pos)
#define GPIO_PMR0S_P17_Pos          17           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P17              (_U(0x1) << GPIO_PMR0S_P17_Pos)
#define GPIO_PMR0S_P18_Pos          18           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P18              (_U(0x1) << GPIO_PMR0S_P18_Pos)
#define GPIO_PMR0S_P19_Pos          19           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P19              (_U(0x1) << GPIO_PMR0S_P19_Pos)
#define GPIO_PMR0S_P20_Pos          20           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P20              (_U(0x1) << GPIO_PMR0S_P20_Pos)
#define GPIO_PMR0S_P21_Pos          21           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P21              (_U(0x1) << GPIO_PMR0S_P21_Pos)
#define GPIO_PMR0S_P22_Pos          22           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P22              (_U(0x1) << GPIO_PMR0S_P22_Pos)
#define GPIO_PMR0S_P23_Pos          23           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P23              (_U(0x1) << GPIO_PMR0S_P23_Pos)
#define GPIO_PMR0S_P24_Pos          24           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P24              (_U(0x1) << GPIO_PMR0S_P24_Pos)
#define GPIO_PMR0S_P25_Pos          25           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P25              (_U(0x1) << GPIO_PMR0S_P25_Pos)
#define GPIO_PMR0S_P26_Pos          26           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P26              (_U(0x1) << GPIO_PMR0S_P26_Pos)
#define GPIO_PMR0S_P27_Pos          27           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P27              (_U(0x1) << GPIO_PMR0S_P27_Pos)
#define GPIO_PMR0S_P28_Pos          28           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P28              (_U(0x1) << GPIO_PMR0S_P28_Pos)
#define GPIO_PMR0S_P29_Pos          29           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P29              (_U(0x1) << GPIO_PMR0S_P29_Pos)
#define GPIO_PMR0S_P30_Pos          30           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P30              (_U(0x1) << GPIO_PMR0S_P30_Pos)
#define GPIO_PMR0S_P31_Pos          31           /**< \brief (GPIO_PMR0S) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0S_P31              (_U(0x1) << GPIO_PMR0S_P31_Pos)
#define GPIO_PMR0S_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR0S) MASK Register */

/* -------- GPIO_PMR0C : (GPIO Offset: 0x018) ( /W 32) port Peripheral Mux Register 0 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR0C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR0C_OFFSET           0x018        /**< \brief (GPIO_PMR0C offset) Peripheral Mux Register 0 - Clear */

#define GPIO_PMR0C_P0_Pos           0            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P0               (_U(0x1) << GPIO_PMR0C_P0_Pos)
#define GPIO_PMR0C_P1_Pos           1            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P1               (_U(0x1) << GPIO_PMR0C_P1_Pos)
#define GPIO_PMR0C_P2_Pos           2            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P2               (_U(0x1) << GPIO_PMR0C_P2_Pos)
#define GPIO_PMR0C_P3_Pos           3            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P3               (_U(0x1) << GPIO_PMR0C_P3_Pos)
#define GPIO_PMR0C_P4_Pos           4            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P4               (_U(0x1) << GPIO_PMR0C_P4_Pos)
#define GPIO_PMR0C_P5_Pos           5            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P5               (_U(0x1) << GPIO_PMR0C_P5_Pos)
#define GPIO_PMR0C_P6_Pos           6            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P6               (_U(0x1) << GPIO_PMR0C_P6_Pos)
#define GPIO_PMR0C_P7_Pos           7            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P7               (_U(0x1) << GPIO_PMR0C_P7_Pos)
#define GPIO_PMR0C_P8_Pos           8            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P8               (_U(0x1) << GPIO_PMR0C_P8_Pos)
#define GPIO_PMR0C_P9_Pos           9            /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P9               (_U(0x1) << GPIO_PMR0C_P9_Pos)
#define GPIO_PMR0C_P10_Pos          10           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P10              (_U(0x1) << GPIO_PMR0C_P10_Pos)
#define GPIO_PMR0C_P11_Pos          11           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P11              (_U(0x1) << GPIO_PMR0C_P11_Pos)
#define GPIO_PMR0C_P12_Pos          12           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P12              (_U(0x1) << GPIO_PMR0C_P12_Pos)
#define GPIO_PMR0C_P13_Pos          13           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P13              (_U(0x1) << GPIO_PMR0C_P13_Pos)
#define GPIO_PMR0C_P14_Pos          14           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P14              (_U(0x1) << GPIO_PMR0C_P14_Pos)
#define GPIO_PMR0C_P15_Pos          15           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P15              (_U(0x1) << GPIO_PMR0C_P15_Pos)
#define GPIO_PMR0C_P16_Pos          16           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P16              (_U(0x1) << GPIO_PMR0C_P16_Pos)
#define GPIO_PMR0C_P17_Pos          17           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P17              (_U(0x1) << GPIO_PMR0C_P17_Pos)
#define GPIO_PMR0C_P18_Pos          18           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P18              (_U(0x1) << GPIO_PMR0C_P18_Pos)
#define GPIO_PMR0C_P19_Pos          19           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P19              (_U(0x1) << GPIO_PMR0C_P19_Pos)
#define GPIO_PMR0C_P20_Pos          20           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P20              (_U(0x1) << GPIO_PMR0C_P20_Pos)
#define GPIO_PMR0C_P21_Pos          21           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P21              (_U(0x1) << GPIO_PMR0C_P21_Pos)
#define GPIO_PMR0C_P22_Pos          22           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P22              (_U(0x1) << GPIO_PMR0C_P22_Pos)
#define GPIO_PMR0C_P23_Pos          23           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P23              (_U(0x1) << GPIO_PMR0C_P23_Pos)
#define GPIO_PMR0C_P24_Pos          24           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P24              (_U(0x1) << GPIO_PMR0C_P24_Pos)
#define GPIO_PMR0C_P25_Pos          25           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P25              (_U(0x1) << GPIO_PMR0C_P25_Pos)
#define GPIO_PMR0C_P26_Pos          26           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P26              (_U(0x1) << GPIO_PMR0C_P26_Pos)
#define GPIO_PMR0C_P27_Pos          27           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P27              (_U(0x1) << GPIO_PMR0C_P27_Pos)
#define GPIO_PMR0C_P28_Pos          28           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P28              (_U(0x1) << GPIO_PMR0C_P28_Pos)
#define GPIO_PMR0C_P29_Pos          29           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P29              (_U(0x1) << GPIO_PMR0C_P29_Pos)
#define GPIO_PMR0C_P30_Pos          30           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P30              (_U(0x1) << GPIO_PMR0C_P30_Pos)
#define GPIO_PMR0C_P31_Pos          31           /**< \brief (GPIO_PMR0C) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0C_P31              (_U(0x1) << GPIO_PMR0C_P31_Pos)
#define GPIO_PMR0C_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR0C) MASK Register */

/* -------- GPIO_PMR0T : (GPIO Offset: 0x01C) ( /W 32) port Peripheral Mux Register 0 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR0T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR0T_OFFSET           0x01C        /**< \brief (GPIO_PMR0T offset) Peripheral Mux Register 0 - Toggle */

#define GPIO_PMR0T_P0_Pos           0            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P0               (_U(0x1) << GPIO_PMR0T_P0_Pos)
#define GPIO_PMR0T_P1_Pos           1            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P1               (_U(0x1) << GPIO_PMR0T_P1_Pos)
#define GPIO_PMR0T_P2_Pos           2            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P2               (_U(0x1) << GPIO_PMR0T_P2_Pos)
#define GPIO_PMR0T_P3_Pos           3            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P3               (_U(0x1) << GPIO_PMR0T_P3_Pos)
#define GPIO_PMR0T_P4_Pos           4            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P4               (_U(0x1) << GPIO_PMR0T_P4_Pos)
#define GPIO_PMR0T_P5_Pos           5            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P5               (_U(0x1) << GPIO_PMR0T_P5_Pos)
#define GPIO_PMR0T_P6_Pos           6            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P6               (_U(0x1) << GPIO_PMR0T_P6_Pos)
#define GPIO_PMR0T_P7_Pos           7            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P7               (_U(0x1) << GPIO_PMR0T_P7_Pos)
#define GPIO_PMR0T_P8_Pos           8            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P8               (_U(0x1) << GPIO_PMR0T_P8_Pos)
#define GPIO_PMR0T_P9_Pos           9            /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P9               (_U(0x1) << GPIO_PMR0T_P9_Pos)
#define GPIO_PMR0T_P10_Pos          10           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P10              (_U(0x1) << GPIO_PMR0T_P10_Pos)
#define GPIO_PMR0T_P11_Pos          11           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P11              (_U(0x1) << GPIO_PMR0T_P11_Pos)
#define GPIO_PMR0T_P12_Pos          12           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P12              (_U(0x1) << GPIO_PMR0T_P12_Pos)
#define GPIO_PMR0T_P13_Pos          13           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P13              (_U(0x1) << GPIO_PMR0T_P13_Pos)
#define GPIO_PMR0T_P14_Pos          14           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P14              (_U(0x1) << GPIO_PMR0T_P14_Pos)
#define GPIO_PMR0T_P15_Pos          15           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P15              (_U(0x1) << GPIO_PMR0T_P15_Pos)
#define GPIO_PMR0T_P16_Pos          16           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P16              (_U(0x1) << GPIO_PMR0T_P16_Pos)
#define GPIO_PMR0T_P17_Pos          17           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P17              (_U(0x1) << GPIO_PMR0T_P17_Pos)
#define GPIO_PMR0T_P18_Pos          18           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P18              (_U(0x1) << GPIO_PMR0T_P18_Pos)
#define GPIO_PMR0T_P19_Pos          19           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P19              (_U(0x1) << GPIO_PMR0T_P19_Pos)
#define GPIO_PMR0T_P20_Pos          20           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P20              (_U(0x1) << GPIO_PMR0T_P20_Pos)
#define GPIO_PMR0T_P21_Pos          21           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P21              (_U(0x1) << GPIO_PMR0T_P21_Pos)
#define GPIO_PMR0T_P22_Pos          22           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P22              (_U(0x1) << GPIO_PMR0T_P22_Pos)
#define GPIO_PMR0T_P23_Pos          23           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P23              (_U(0x1) << GPIO_PMR0T_P23_Pos)
#define GPIO_PMR0T_P24_Pos          24           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P24              (_U(0x1) << GPIO_PMR0T_P24_Pos)
#define GPIO_PMR0T_P25_Pos          25           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P25              (_U(0x1) << GPIO_PMR0T_P25_Pos)
#define GPIO_PMR0T_P26_Pos          26           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P26              (_U(0x1) << GPIO_PMR0T_P26_Pos)
#define GPIO_PMR0T_P27_Pos          27           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P27              (_U(0x1) << GPIO_PMR0T_P27_Pos)
#define GPIO_PMR0T_P28_Pos          28           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P28              (_U(0x1) << GPIO_PMR0T_P28_Pos)
#define GPIO_PMR0T_P29_Pos          29           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P29              (_U(0x1) << GPIO_PMR0T_P29_Pos)
#define GPIO_PMR0T_P30_Pos          30           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P30              (_U(0x1) << GPIO_PMR0T_P30_Pos)
#define GPIO_PMR0T_P31_Pos          31           /**< \brief (GPIO_PMR0T) Peripheral Multiplexer Select bit 0 */
#define GPIO_PMR0T_P31              (_U(0x1) << GPIO_PMR0T_P31_Pos)
#define GPIO_PMR0T_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR0T) MASK Register */

/* -------- GPIO_PMR1 : (GPIO Offset: 0x020) (R/W 32) port Peripheral Mux Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR1_OFFSET            0x020        /**< \brief (GPIO_PMR1 offset) Peripheral Mux Register 1 */

#define GPIO_PMR1_P0_Pos            0            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P0                (_U(0x1) << GPIO_PMR1_P0_Pos)
#define GPIO_PMR1_P1_Pos            1            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P1                (_U(0x1) << GPIO_PMR1_P1_Pos)
#define GPIO_PMR1_P2_Pos            2            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P2                (_U(0x1) << GPIO_PMR1_P2_Pos)
#define GPIO_PMR1_P3_Pos            3            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P3                (_U(0x1) << GPIO_PMR1_P3_Pos)
#define GPIO_PMR1_P4_Pos            4            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P4                (_U(0x1) << GPIO_PMR1_P4_Pos)
#define GPIO_PMR1_P5_Pos            5            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P5                (_U(0x1) << GPIO_PMR1_P5_Pos)
#define GPIO_PMR1_P6_Pos            6            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P6                (_U(0x1) << GPIO_PMR1_P6_Pos)
#define GPIO_PMR1_P7_Pos            7            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P7                (_U(0x1) << GPIO_PMR1_P7_Pos)
#define GPIO_PMR1_P8_Pos            8            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P8                (_U(0x1) << GPIO_PMR1_P8_Pos)
#define GPIO_PMR1_P9_Pos            9            /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P9                (_U(0x1) << GPIO_PMR1_P9_Pos)
#define GPIO_PMR1_P10_Pos           10           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P10               (_U(0x1) << GPIO_PMR1_P10_Pos)
#define GPIO_PMR1_P11_Pos           11           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P11               (_U(0x1) << GPIO_PMR1_P11_Pos)
#define GPIO_PMR1_P12_Pos           12           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P12               (_U(0x1) << GPIO_PMR1_P12_Pos)
#define GPIO_PMR1_P13_Pos           13           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P13               (_U(0x1) << GPIO_PMR1_P13_Pos)
#define GPIO_PMR1_P14_Pos           14           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P14               (_U(0x1) << GPIO_PMR1_P14_Pos)
#define GPIO_PMR1_P15_Pos           15           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P15               (_U(0x1) << GPIO_PMR1_P15_Pos)
#define GPIO_PMR1_P16_Pos           16           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P16               (_U(0x1) << GPIO_PMR1_P16_Pos)
#define GPIO_PMR1_P17_Pos           17           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P17               (_U(0x1) << GPIO_PMR1_P17_Pos)
#define GPIO_PMR1_P18_Pos           18           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P18               (_U(0x1) << GPIO_PMR1_P18_Pos)
#define GPIO_PMR1_P19_Pos           19           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P19               (_U(0x1) << GPIO_PMR1_P19_Pos)
#define GPIO_PMR1_P20_Pos           20           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P20               (_U(0x1) << GPIO_PMR1_P20_Pos)
#define GPIO_PMR1_P21_Pos           21           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P21               (_U(0x1) << GPIO_PMR1_P21_Pos)
#define GPIO_PMR1_P22_Pos           22           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P22               (_U(0x1) << GPIO_PMR1_P22_Pos)
#define GPIO_PMR1_P23_Pos           23           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P23               (_U(0x1) << GPIO_PMR1_P23_Pos)
#define GPIO_PMR1_P24_Pos           24           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P24               (_U(0x1) << GPIO_PMR1_P24_Pos)
#define GPIO_PMR1_P25_Pos           25           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P25               (_U(0x1) << GPIO_PMR1_P25_Pos)
#define GPIO_PMR1_P26_Pos           26           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P26               (_U(0x1) << GPIO_PMR1_P26_Pos)
#define GPIO_PMR1_P27_Pos           27           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P27               (_U(0x1) << GPIO_PMR1_P27_Pos)
#define GPIO_PMR1_P28_Pos           28           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P28               (_U(0x1) << GPIO_PMR1_P28_Pos)
#define GPIO_PMR1_P29_Pos           29           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P29               (_U(0x1) << GPIO_PMR1_P29_Pos)
#define GPIO_PMR1_P30_Pos           30           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P30               (_U(0x1) << GPIO_PMR1_P30_Pos)
#define GPIO_PMR1_P31_Pos           31           /**< \brief (GPIO_PMR1) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1_P31               (_U(0x1) << GPIO_PMR1_P31_Pos)
#define GPIO_PMR1_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_PMR1) MASK Register */

/* -------- GPIO_PMR1S : (GPIO Offset: 0x024) ( /W 32) port Peripheral Mux Register 1 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR1S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR1S_OFFSET           0x024        /**< \brief (GPIO_PMR1S offset) Peripheral Mux Register 1 - Set */

#define GPIO_PMR1S_P0_Pos           0            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P0               (_U(0x1) << GPIO_PMR1S_P0_Pos)
#define GPIO_PMR1S_P1_Pos           1            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P1               (_U(0x1) << GPIO_PMR1S_P1_Pos)
#define GPIO_PMR1S_P2_Pos           2            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P2               (_U(0x1) << GPIO_PMR1S_P2_Pos)
#define GPIO_PMR1S_P3_Pos           3            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P3               (_U(0x1) << GPIO_PMR1S_P3_Pos)
#define GPIO_PMR1S_P4_Pos           4            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P4               (_U(0x1) << GPIO_PMR1S_P4_Pos)
#define GPIO_PMR1S_P5_Pos           5            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P5               (_U(0x1) << GPIO_PMR1S_P5_Pos)
#define GPIO_PMR1S_P6_Pos           6            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P6               (_U(0x1) << GPIO_PMR1S_P6_Pos)
#define GPIO_PMR1S_P7_Pos           7            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P7               (_U(0x1) << GPIO_PMR1S_P7_Pos)
#define GPIO_PMR1S_P8_Pos           8            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P8               (_U(0x1) << GPIO_PMR1S_P8_Pos)
#define GPIO_PMR1S_P9_Pos           9            /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P9               (_U(0x1) << GPIO_PMR1S_P9_Pos)
#define GPIO_PMR1S_P10_Pos          10           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P10              (_U(0x1) << GPIO_PMR1S_P10_Pos)
#define GPIO_PMR1S_P11_Pos          11           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P11              (_U(0x1) << GPIO_PMR1S_P11_Pos)
#define GPIO_PMR1S_P12_Pos          12           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P12              (_U(0x1) << GPIO_PMR1S_P12_Pos)
#define GPIO_PMR1S_P13_Pos          13           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P13              (_U(0x1) << GPIO_PMR1S_P13_Pos)
#define GPIO_PMR1S_P14_Pos          14           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P14              (_U(0x1) << GPIO_PMR1S_P14_Pos)
#define GPIO_PMR1S_P15_Pos          15           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P15              (_U(0x1) << GPIO_PMR1S_P15_Pos)
#define GPIO_PMR1S_P16_Pos          16           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P16              (_U(0x1) << GPIO_PMR1S_P16_Pos)
#define GPIO_PMR1S_P17_Pos          17           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P17              (_U(0x1) << GPIO_PMR1S_P17_Pos)
#define GPIO_PMR1S_P18_Pos          18           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P18              (_U(0x1) << GPIO_PMR1S_P18_Pos)
#define GPIO_PMR1S_P19_Pos          19           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P19              (_U(0x1) << GPIO_PMR1S_P19_Pos)
#define GPIO_PMR1S_P20_Pos          20           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P20              (_U(0x1) << GPIO_PMR1S_P20_Pos)
#define GPIO_PMR1S_P21_Pos          21           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P21              (_U(0x1) << GPIO_PMR1S_P21_Pos)
#define GPIO_PMR1S_P22_Pos          22           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P22              (_U(0x1) << GPIO_PMR1S_P22_Pos)
#define GPIO_PMR1S_P23_Pos          23           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P23              (_U(0x1) << GPIO_PMR1S_P23_Pos)
#define GPIO_PMR1S_P24_Pos          24           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P24              (_U(0x1) << GPIO_PMR1S_P24_Pos)
#define GPIO_PMR1S_P25_Pos          25           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P25              (_U(0x1) << GPIO_PMR1S_P25_Pos)
#define GPIO_PMR1S_P26_Pos          26           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P26              (_U(0x1) << GPIO_PMR1S_P26_Pos)
#define GPIO_PMR1S_P27_Pos          27           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P27              (_U(0x1) << GPIO_PMR1S_P27_Pos)
#define GPIO_PMR1S_P28_Pos          28           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P28              (_U(0x1) << GPIO_PMR1S_P28_Pos)
#define GPIO_PMR1S_P29_Pos          29           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P29              (_U(0x1) << GPIO_PMR1S_P29_Pos)
#define GPIO_PMR1S_P30_Pos          30           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P30              (_U(0x1) << GPIO_PMR1S_P30_Pos)
#define GPIO_PMR1S_P31_Pos          31           /**< \brief (GPIO_PMR1S) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1S_P31              (_U(0x1) << GPIO_PMR1S_P31_Pos)
#define GPIO_PMR1S_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR1S) MASK Register */

/* -------- GPIO_PMR1C : (GPIO Offset: 0x028) ( /W 32) port Peripheral Mux Register 1 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR1C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR1C_OFFSET           0x028        /**< \brief (GPIO_PMR1C offset) Peripheral Mux Register 1 - Clear */

#define GPIO_PMR1C_P0_Pos           0            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P0               (_U(0x1) << GPIO_PMR1C_P0_Pos)
#define GPIO_PMR1C_P1_Pos           1            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P1               (_U(0x1) << GPIO_PMR1C_P1_Pos)
#define GPIO_PMR1C_P2_Pos           2            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P2               (_U(0x1) << GPIO_PMR1C_P2_Pos)
#define GPIO_PMR1C_P3_Pos           3            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P3               (_U(0x1) << GPIO_PMR1C_P3_Pos)
#define GPIO_PMR1C_P4_Pos           4            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P4               (_U(0x1) << GPIO_PMR1C_P4_Pos)
#define GPIO_PMR1C_P5_Pos           5            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P5               (_U(0x1) << GPIO_PMR1C_P5_Pos)
#define GPIO_PMR1C_P6_Pos           6            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P6               (_U(0x1) << GPIO_PMR1C_P6_Pos)
#define GPIO_PMR1C_P7_Pos           7            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P7               (_U(0x1) << GPIO_PMR1C_P7_Pos)
#define GPIO_PMR1C_P8_Pos           8            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P8               (_U(0x1) << GPIO_PMR1C_P8_Pos)
#define GPIO_PMR1C_P9_Pos           9            /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P9               (_U(0x1) << GPIO_PMR1C_P9_Pos)
#define GPIO_PMR1C_P10_Pos          10           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P10              (_U(0x1) << GPIO_PMR1C_P10_Pos)
#define GPIO_PMR1C_P11_Pos          11           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P11              (_U(0x1) << GPIO_PMR1C_P11_Pos)
#define GPIO_PMR1C_P12_Pos          12           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P12              (_U(0x1) << GPIO_PMR1C_P12_Pos)
#define GPIO_PMR1C_P13_Pos          13           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P13              (_U(0x1) << GPIO_PMR1C_P13_Pos)
#define GPIO_PMR1C_P14_Pos          14           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P14              (_U(0x1) << GPIO_PMR1C_P14_Pos)
#define GPIO_PMR1C_P15_Pos          15           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P15              (_U(0x1) << GPIO_PMR1C_P15_Pos)
#define GPIO_PMR1C_P16_Pos          16           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P16              (_U(0x1) << GPIO_PMR1C_P16_Pos)
#define GPIO_PMR1C_P17_Pos          17           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P17              (_U(0x1) << GPIO_PMR1C_P17_Pos)
#define GPIO_PMR1C_P18_Pos          18           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P18              (_U(0x1) << GPIO_PMR1C_P18_Pos)
#define GPIO_PMR1C_P19_Pos          19           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P19              (_U(0x1) << GPIO_PMR1C_P19_Pos)
#define GPIO_PMR1C_P20_Pos          20           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P20              (_U(0x1) << GPIO_PMR1C_P20_Pos)
#define GPIO_PMR1C_P21_Pos          21           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P21              (_U(0x1) << GPIO_PMR1C_P21_Pos)
#define GPIO_PMR1C_P22_Pos          22           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P22              (_U(0x1) << GPIO_PMR1C_P22_Pos)
#define GPIO_PMR1C_P23_Pos          23           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P23              (_U(0x1) << GPIO_PMR1C_P23_Pos)
#define GPIO_PMR1C_P24_Pos          24           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P24              (_U(0x1) << GPIO_PMR1C_P24_Pos)
#define GPIO_PMR1C_P25_Pos          25           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P25              (_U(0x1) << GPIO_PMR1C_P25_Pos)
#define GPIO_PMR1C_P26_Pos          26           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P26              (_U(0x1) << GPIO_PMR1C_P26_Pos)
#define GPIO_PMR1C_P27_Pos          27           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P27              (_U(0x1) << GPIO_PMR1C_P27_Pos)
#define GPIO_PMR1C_P28_Pos          28           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P28              (_U(0x1) << GPIO_PMR1C_P28_Pos)
#define GPIO_PMR1C_P29_Pos          29           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P29              (_U(0x1) << GPIO_PMR1C_P29_Pos)
#define GPIO_PMR1C_P30_Pos          30           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P30              (_U(0x1) << GPIO_PMR1C_P30_Pos)
#define GPIO_PMR1C_P31_Pos          31           /**< \brief (GPIO_PMR1C) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1C_P31              (_U(0x1) << GPIO_PMR1C_P31_Pos)
#define GPIO_PMR1C_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR1C) MASK Register */

/* -------- GPIO_PMR1T : (GPIO Offset: 0x02C) ( /W 32) port Peripheral Mux Register 1 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR1T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR1T_OFFSET           0x02C        /**< \brief (GPIO_PMR1T offset) Peripheral Mux Register 1 - Toggle */

#define GPIO_PMR1T_P0_Pos           0            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P0               (_U(0x1) << GPIO_PMR1T_P0_Pos)
#define GPIO_PMR1T_P1_Pos           1            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P1               (_U(0x1) << GPIO_PMR1T_P1_Pos)
#define GPIO_PMR1T_P2_Pos           2            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P2               (_U(0x1) << GPIO_PMR1T_P2_Pos)
#define GPIO_PMR1T_P3_Pos           3            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P3               (_U(0x1) << GPIO_PMR1T_P3_Pos)
#define GPIO_PMR1T_P4_Pos           4            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P4               (_U(0x1) << GPIO_PMR1T_P4_Pos)
#define GPIO_PMR1T_P5_Pos           5            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P5               (_U(0x1) << GPIO_PMR1T_P5_Pos)
#define GPIO_PMR1T_P6_Pos           6            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P6               (_U(0x1) << GPIO_PMR1T_P6_Pos)
#define GPIO_PMR1T_P7_Pos           7            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P7               (_U(0x1) << GPIO_PMR1T_P7_Pos)
#define GPIO_PMR1T_P8_Pos           8            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P8               (_U(0x1) << GPIO_PMR1T_P8_Pos)
#define GPIO_PMR1T_P9_Pos           9            /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P9               (_U(0x1) << GPIO_PMR1T_P9_Pos)
#define GPIO_PMR1T_P10_Pos          10           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P10              (_U(0x1) << GPIO_PMR1T_P10_Pos)
#define GPIO_PMR1T_P11_Pos          11           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P11              (_U(0x1) << GPIO_PMR1T_P11_Pos)
#define GPIO_PMR1T_P12_Pos          12           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P12              (_U(0x1) << GPIO_PMR1T_P12_Pos)
#define GPIO_PMR1T_P13_Pos          13           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P13              (_U(0x1) << GPIO_PMR1T_P13_Pos)
#define GPIO_PMR1T_P14_Pos          14           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P14              (_U(0x1) << GPIO_PMR1T_P14_Pos)
#define GPIO_PMR1T_P15_Pos          15           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P15              (_U(0x1) << GPIO_PMR1T_P15_Pos)
#define GPIO_PMR1T_P16_Pos          16           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P16              (_U(0x1) << GPIO_PMR1T_P16_Pos)
#define GPIO_PMR1T_P17_Pos          17           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P17              (_U(0x1) << GPIO_PMR1T_P17_Pos)
#define GPIO_PMR1T_P18_Pos          18           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P18              (_U(0x1) << GPIO_PMR1T_P18_Pos)
#define GPIO_PMR1T_P19_Pos          19           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P19              (_U(0x1) << GPIO_PMR1T_P19_Pos)
#define GPIO_PMR1T_P20_Pos          20           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P20              (_U(0x1) << GPIO_PMR1T_P20_Pos)
#define GPIO_PMR1T_P21_Pos          21           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P21              (_U(0x1) << GPIO_PMR1T_P21_Pos)
#define GPIO_PMR1T_P22_Pos          22           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P22              (_U(0x1) << GPIO_PMR1T_P22_Pos)
#define GPIO_PMR1T_P23_Pos          23           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P23              (_U(0x1) << GPIO_PMR1T_P23_Pos)
#define GPIO_PMR1T_P24_Pos          24           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P24              (_U(0x1) << GPIO_PMR1T_P24_Pos)
#define GPIO_PMR1T_P25_Pos          25           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P25              (_U(0x1) << GPIO_PMR1T_P25_Pos)
#define GPIO_PMR1T_P26_Pos          26           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P26              (_U(0x1) << GPIO_PMR1T_P26_Pos)
#define GPIO_PMR1T_P27_Pos          27           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P27              (_U(0x1) << GPIO_PMR1T_P27_Pos)
#define GPIO_PMR1T_P28_Pos          28           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P28              (_U(0x1) << GPIO_PMR1T_P28_Pos)
#define GPIO_PMR1T_P29_Pos          29           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P29              (_U(0x1) << GPIO_PMR1T_P29_Pos)
#define GPIO_PMR1T_P30_Pos          30           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P30              (_U(0x1) << GPIO_PMR1T_P30_Pos)
#define GPIO_PMR1T_P31_Pos          31           /**< \brief (GPIO_PMR1T) Peripheral Multiplexer Select bit 1 */
#define GPIO_PMR1T_P31              (_U(0x1) << GPIO_PMR1T_P31_Pos)
#define GPIO_PMR1T_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR1T) MASK Register */

/* -------- GPIO_PMR2 : (GPIO Offset: 0x030) (R/W 32) port Peripheral Mux Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 2 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 2 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 2 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 2 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 2 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 2 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 2 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 2 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 2 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 2 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 2 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 2 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 2 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 2 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 2 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 2 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 2 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 2 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 2 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 2 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 2 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 2 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 2 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 2 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 2 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 2 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 2 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 2 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 2 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 2 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 2 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 2 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR2_OFFSET            0x030        /**< \brief (GPIO_PMR2 offset) Peripheral Mux Register 2 */

#define GPIO_PMR2_P0_Pos            0            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P0                (_U(0x1) << GPIO_PMR2_P0_Pos)
#define GPIO_PMR2_P1_Pos            1            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P1                (_U(0x1) << GPIO_PMR2_P1_Pos)
#define GPIO_PMR2_P2_Pos            2            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P2                (_U(0x1) << GPIO_PMR2_P2_Pos)
#define GPIO_PMR2_P3_Pos            3            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P3                (_U(0x1) << GPIO_PMR2_P3_Pos)
#define GPIO_PMR2_P4_Pos            4            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P4                (_U(0x1) << GPIO_PMR2_P4_Pos)
#define GPIO_PMR2_P5_Pos            5            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P5                (_U(0x1) << GPIO_PMR2_P5_Pos)
#define GPIO_PMR2_P6_Pos            6            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P6                (_U(0x1) << GPIO_PMR2_P6_Pos)
#define GPIO_PMR2_P7_Pos            7            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P7                (_U(0x1) << GPIO_PMR2_P7_Pos)
#define GPIO_PMR2_P8_Pos            8            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P8                (_U(0x1) << GPIO_PMR2_P8_Pos)
#define GPIO_PMR2_P9_Pos            9            /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P9                (_U(0x1) << GPIO_PMR2_P9_Pos)
#define GPIO_PMR2_P10_Pos           10           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P10               (_U(0x1) << GPIO_PMR2_P10_Pos)
#define GPIO_PMR2_P11_Pos           11           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P11               (_U(0x1) << GPIO_PMR2_P11_Pos)
#define GPIO_PMR2_P12_Pos           12           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P12               (_U(0x1) << GPIO_PMR2_P12_Pos)
#define GPIO_PMR2_P13_Pos           13           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P13               (_U(0x1) << GPIO_PMR2_P13_Pos)
#define GPIO_PMR2_P14_Pos           14           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P14               (_U(0x1) << GPIO_PMR2_P14_Pos)
#define GPIO_PMR2_P15_Pos           15           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P15               (_U(0x1) << GPIO_PMR2_P15_Pos)
#define GPIO_PMR2_P16_Pos           16           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P16               (_U(0x1) << GPIO_PMR2_P16_Pos)
#define GPIO_PMR2_P17_Pos           17           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P17               (_U(0x1) << GPIO_PMR2_P17_Pos)
#define GPIO_PMR2_P18_Pos           18           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P18               (_U(0x1) << GPIO_PMR2_P18_Pos)
#define GPIO_PMR2_P19_Pos           19           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P19               (_U(0x1) << GPIO_PMR2_P19_Pos)
#define GPIO_PMR2_P20_Pos           20           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P20               (_U(0x1) << GPIO_PMR2_P20_Pos)
#define GPIO_PMR2_P21_Pos           21           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P21               (_U(0x1) << GPIO_PMR2_P21_Pos)
#define GPIO_PMR2_P22_Pos           22           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P22               (_U(0x1) << GPIO_PMR2_P22_Pos)
#define GPIO_PMR2_P23_Pos           23           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P23               (_U(0x1) << GPIO_PMR2_P23_Pos)
#define GPIO_PMR2_P24_Pos           24           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P24               (_U(0x1) << GPIO_PMR2_P24_Pos)
#define GPIO_PMR2_P25_Pos           25           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P25               (_U(0x1) << GPIO_PMR2_P25_Pos)
#define GPIO_PMR2_P26_Pos           26           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P26               (_U(0x1) << GPIO_PMR2_P26_Pos)
#define GPIO_PMR2_P27_Pos           27           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P27               (_U(0x1) << GPIO_PMR2_P27_Pos)
#define GPIO_PMR2_P28_Pos           28           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P28               (_U(0x1) << GPIO_PMR2_P28_Pos)
#define GPIO_PMR2_P29_Pos           29           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P29               (_U(0x1) << GPIO_PMR2_P29_Pos)
#define GPIO_PMR2_P30_Pos           30           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P30               (_U(0x1) << GPIO_PMR2_P30_Pos)
#define GPIO_PMR2_P31_Pos           31           /**< \brief (GPIO_PMR2) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2_P31               (_U(0x1) << GPIO_PMR2_P31_Pos)
#define GPIO_PMR2_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_PMR2) MASK Register */

/* -------- GPIO_PMR2S : (GPIO Offset: 0x034) ( /W 32) port Peripheral Mux Register 2 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 2 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 2 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 2 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 2 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 2 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 2 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 2 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 2 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 2 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 2 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 2 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 2 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 2 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 2 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 2 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 2 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 2 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 2 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 2 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 2 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 2 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 2 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 2 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 2 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 2 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 2 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 2 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 2 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 2 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 2 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 2 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 2 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR2S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR2S_OFFSET           0x034        /**< \brief (GPIO_PMR2S offset) Peripheral Mux Register 2 - Set */

#define GPIO_PMR2S_P0_Pos           0            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P0               (_U(0x1) << GPIO_PMR2S_P0_Pos)
#define GPIO_PMR2S_P1_Pos           1            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P1               (_U(0x1) << GPIO_PMR2S_P1_Pos)
#define GPIO_PMR2S_P2_Pos           2            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P2               (_U(0x1) << GPIO_PMR2S_P2_Pos)
#define GPIO_PMR2S_P3_Pos           3            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P3               (_U(0x1) << GPIO_PMR2S_P3_Pos)
#define GPIO_PMR2S_P4_Pos           4            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P4               (_U(0x1) << GPIO_PMR2S_P4_Pos)
#define GPIO_PMR2S_P5_Pos           5            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P5               (_U(0x1) << GPIO_PMR2S_P5_Pos)
#define GPIO_PMR2S_P6_Pos           6            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P6               (_U(0x1) << GPIO_PMR2S_P6_Pos)
#define GPIO_PMR2S_P7_Pos           7            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P7               (_U(0x1) << GPIO_PMR2S_P7_Pos)
#define GPIO_PMR2S_P8_Pos           8            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P8               (_U(0x1) << GPIO_PMR2S_P8_Pos)
#define GPIO_PMR2S_P9_Pos           9            /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P9               (_U(0x1) << GPIO_PMR2S_P9_Pos)
#define GPIO_PMR2S_P10_Pos          10           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P10              (_U(0x1) << GPIO_PMR2S_P10_Pos)
#define GPIO_PMR2S_P11_Pos          11           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P11              (_U(0x1) << GPIO_PMR2S_P11_Pos)
#define GPIO_PMR2S_P12_Pos          12           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P12              (_U(0x1) << GPIO_PMR2S_P12_Pos)
#define GPIO_PMR2S_P13_Pos          13           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P13              (_U(0x1) << GPIO_PMR2S_P13_Pos)
#define GPIO_PMR2S_P14_Pos          14           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P14              (_U(0x1) << GPIO_PMR2S_P14_Pos)
#define GPIO_PMR2S_P15_Pos          15           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P15              (_U(0x1) << GPIO_PMR2S_P15_Pos)
#define GPIO_PMR2S_P16_Pos          16           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P16              (_U(0x1) << GPIO_PMR2S_P16_Pos)
#define GPIO_PMR2S_P17_Pos          17           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P17              (_U(0x1) << GPIO_PMR2S_P17_Pos)
#define GPIO_PMR2S_P18_Pos          18           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P18              (_U(0x1) << GPIO_PMR2S_P18_Pos)
#define GPIO_PMR2S_P19_Pos          19           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P19              (_U(0x1) << GPIO_PMR2S_P19_Pos)
#define GPIO_PMR2S_P20_Pos          20           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P20              (_U(0x1) << GPIO_PMR2S_P20_Pos)
#define GPIO_PMR2S_P21_Pos          21           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P21              (_U(0x1) << GPIO_PMR2S_P21_Pos)
#define GPIO_PMR2S_P22_Pos          22           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P22              (_U(0x1) << GPIO_PMR2S_P22_Pos)
#define GPIO_PMR2S_P23_Pos          23           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P23              (_U(0x1) << GPIO_PMR2S_P23_Pos)
#define GPIO_PMR2S_P24_Pos          24           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P24              (_U(0x1) << GPIO_PMR2S_P24_Pos)
#define GPIO_PMR2S_P25_Pos          25           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P25              (_U(0x1) << GPIO_PMR2S_P25_Pos)
#define GPIO_PMR2S_P26_Pos          26           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P26              (_U(0x1) << GPIO_PMR2S_P26_Pos)
#define GPIO_PMR2S_P27_Pos          27           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P27              (_U(0x1) << GPIO_PMR2S_P27_Pos)
#define GPIO_PMR2S_P28_Pos          28           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P28              (_U(0x1) << GPIO_PMR2S_P28_Pos)
#define GPIO_PMR2S_P29_Pos          29           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P29              (_U(0x1) << GPIO_PMR2S_P29_Pos)
#define GPIO_PMR2S_P30_Pos          30           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P30              (_U(0x1) << GPIO_PMR2S_P30_Pos)
#define GPIO_PMR2S_P31_Pos          31           /**< \brief (GPIO_PMR2S) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2S_P31              (_U(0x1) << GPIO_PMR2S_P31_Pos)
#define GPIO_PMR2S_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR2S) MASK Register */

/* -------- GPIO_PMR2C : (GPIO Offset: 0x038) ( /W 32) port Peripheral Mux Register 2 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 2 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 2 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 2 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 2 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 2 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 2 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 2 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 2 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 2 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 2 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 2 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 2 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 2 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 2 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 2 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 2 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 2 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 2 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 2 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 2 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 2 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 2 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 2 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 2 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 2 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 2 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 2 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 2 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 2 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 2 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 2 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 2 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR2C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR2C_OFFSET           0x038        /**< \brief (GPIO_PMR2C offset) Peripheral Mux Register 2 - Clear */

#define GPIO_PMR2C_P0_Pos           0            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P0               (_U(0x1) << GPIO_PMR2C_P0_Pos)
#define GPIO_PMR2C_P1_Pos           1            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P1               (_U(0x1) << GPIO_PMR2C_P1_Pos)
#define GPIO_PMR2C_P2_Pos           2            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P2               (_U(0x1) << GPIO_PMR2C_P2_Pos)
#define GPIO_PMR2C_P3_Pos           3            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P3               (_U(0x1) << GPIO_PMR2C_P3_Pos)
#define GPIO_PMR2C_P4_Pos           4            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P4               (_U(0x1) << GPIO_PMR2C_P4_Pos)
#define GPIO_PMR2C_P5_Pos           5            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P5               (_U(0x1) << GPIO_PMR2C_P5_Pos)
#define GPIO_PMR2C_P6_Pos           6            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P6               (_U(0x1) << GPIO_PMR2C_P6_Pos)
#define GPIO_PMR2C_P7_Pos           7            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P7               (_U(0x1) << GPIO_PMR2C_P7_Pos)
#define GPIO_PMR2C_P8_Pos           8            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P8               (_U(0x1) << GPIO_PMR2C_P8_Pos)
#define GPIO_PMR2C_P9_Pos           9            /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P9               (_U(0x1) << GPIO_PMR2C_P9_Pos)
#define GPIO_PMR2C_P10_Pos          10           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P10              (_U(0x1) << GPIO_PMR2C_P10_Pos)
#define GPIO_PMR2C_P11_Pos          11           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P11              (_U(0x1) << GPIO_PMR2C_P11_Pos)
#define GPIO_PMR2C_P12_Pos          12           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P12              (_U(0x1) << GPIO_PMR2C_P12_Pos)
#define GPIO_PMR2C_P13_Pos          13           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P13              (_U(0x1) << GPIO_PMR2C_P13_Pos)
#define GPIO_PMR2C_P14_Pos          14           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P14              (_U(0x1) << GPIO_PMR2C_P14_Pos)
#define GPIO_PMR2C_P15_Pos          15           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P15              (_U(0x1) << GPIO_PMR2C_P15_Pos)
#define GPIO_PMR2C_P16_Pos          16           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P16              (_U(0x1) << GPIO_PMR2C_P16_Pos)
#define GPIO_PMR2C_P17_Pos          17           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P17              (_U(0x1) << GPIO_PMR2C_P17_Pos)
#define GPIO_PMR2C_P18_Pos          18           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P18              (_U(0x1) << GPIO_PMR2C_P18_Pos)
#define GPIO_PMR2C_P19_Pos          19           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P19              (_U(0x1) << GPIO_PMR2C_P19_Pos)
#define GPIO_PMR2C_P20_Pos          20           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P20              (_U(0x1) << GPIO_PMR2C_P20_Pos)
#define GPIO_PMR2C_P21_Pos          21           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P21              (_U(0x1) << GPIO_PMR2C_P21_Pos)
#define GPIO_PMR2C_P22_Pos          22           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P22              (_U(0x1) << GPIO_PMR2C_P22_Pos)
#define GPIO_PMR2C_P23_Pos          23           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P23              (_U(0x1) << GPIO_PMR2C_P23_Pos)
#define GPIO_PMR2C_P24_Pos          24           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P24              (_U(0x1) << GPIO_PMR2C_P24_Pos)
#define GPIO_PMR2C_P25_Pos          25           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P25              (_U(0x1) << GPIO_PMR2C_P25_Pos)
#define GPIO_PMR2C_P26_Pos          26           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P26              (_U(0x1) << GPIO_PMR2C_P26_Pos)
#define GPIO_PMR2C_P27_Pos          27           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P27              (_U(0x1) << GPIO_PMR2C_P27_Pos)
#define GPIO_PMR2C_P28_Pos          28           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P28              (_U(0x1) << GPIO_PMR2C_P28_Pos)
#define GPIO_PMR2C_P29_Pos          29           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P29              (_U(0x1) << GPIO_PMR2C_P29_Pos)
#define GPIO_PMR2C_P30_Pos          30           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P30              (_U(0x1) << GPIO_PMR2C_P30_Pos)
#define GPIO_PMR2C_P31_Pos          31           /**< \brief (GPIO_PMR2C) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2C_P31              (_U(0x1) << GPIO_PMR2C_P31_Pos)
#define GPIO_PMR2C_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR2C) MASK Register */

/* -------- GPIO_PMR2T : (GPIO Offset: 0x03C) ( /W 32) port Peripheral Mux Register 2 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Peripheral Multiplexer Select bit 2 */
    uint32_t P1:1;             /*!< bit:      1  Peripheral Multiplexer Select bit 2 */
    uint32_t P2:1;             /*!< bit:      2  Peripheral Multiplexer Select bit 2 */
    uint32_t P3:1;             /*!< bit:      3  Peripheral Multiplexer Select bit 2 */
    uint32_t P4:1;             /*!< bit:      4  Peripheral Multiplexer Select bit 2 */
    uint32_t P5:1;             /*!< bit:      5  Peripheral Multiplexer Select bit 2 */
    uint32_t P6:1;             /*!< bit:      6  Peripheral Multiplexer Select bit 2 */
    uint32_t P7:1;             /*!< bit:      7  Peripheral Multiplexer Select bit 2 */
    uint32_t P8:1;             /*!< bit:      8  Peripheral Multiplexer Select bit 2 */
    uint32_t P9:1;             /*!< bit:      9  Peripheral Multiplexer Select bit 2 */
    uint32_t P10:1;            /*!< bit:     10  Peripheral Multiplexer Select bit 2 */
    uint32_t P11:1;            /*!< bit:     11  Peripheral Multiplexer Select bit 2 */
    uint32_t P12:1;            /*!< bit:     12  Peripheral Multiplexer Select bit 2 */
    uint32_t P13:1;            /*!< bit:     13  Peripheral Multiplexer Select bit 2 */
    uint32_t P14:1;            /*!< bit:     14  Peripheral Multiplexer Select bit 2 */
    uint32_t P15:1;            /*!< bit:     15  Peripheral Multiplexer Select bit 2 */
    uint32_t P16:1;            /*!< bit:     16  Peripheral Multiplexer Select bit 2 */
    uint32_t P17:1;            /*!< bit:     17  Peripheral Multiplexer Select bit 2 */
    uint32_t P18:1;            /*!< bit:     18  Peripheral Multiplexer Select bit 2 */
    uint32_t P19:1;            /*!< bit:     19  Peripheral Multiplexer Select bit 2 */
    uint32_t P20:1;            /*!< bit:     20  Peripheral Multiplexer Select bit 2 */
    uint32_t P21:1;            /*!< bit:     21  Peripheral Multiplexer Select bit 2 */
    uint32_t P22:1;            /*!< bit:     22  Peripheral Multiplexer Select bit 2 */
    uint32_t P23:1;            /*!< bit:     23  Peripheral Multiplexer Select bit 2 */
    uint32_t P24:1;            /*!< bit:     24  Peripheral Multiplexer Select bit 2 */
    uint32_t P25:1;            /*!< bit:     25  Peripheral Multiplexer Select bit 2 */
    uint32_t P26:1;            /*!< bit:     26  Peripheral Multiplexer Select bit 2 */
    uint32_t P27:1;            /*!< bit:     27  Peripheral Multiplexer Select bit 2 */
    uint32_t P28:1;            /*!< bit:     28  Peripheral Multiplexer Select bit 2 */
    uint32_t P29:1;            /*!< bit:     29  Peripheral Multiplexer Select bit 2 */
    uint32_t P30:1;            /*!< bit:     30  Peripheral Multiplexer Select bit 2 */
    uint32_t P31:1;            /*!< bit:     31  Peripheral Multiplexer Select bit 2 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PMR2T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PMR2T_OFFSET           0x03C        /**< \brief (GPIO_PMR2T offset) Peripheral Mux Register 2 - Toggle */

#define GPIO_PMR2T_P0_Pos           0            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P0               (_U(0x1) << GPIO_PMR2T_P0_Pos)
#define GPIO_PMR2T_P1_Pos           1            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P1               (_U(0x1) << GPIO_PMR2T_P1_Pos)
#define GPIO_PMR2T_P2_Pos           2            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P2               (_U(0x1) << GPIO_PMR2T_P2_Pos)
#define GPIO_PMR2T_P3_Pos           3            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P3               (_U(0x1) << GPIO_PMR2T_P3_Pos)
#define GPIO_PMR2T_P4_Pos           4            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P4               (_U(0x1) << GPIO_PMR2T_P4_Pos)
#define GPIO_PMR2T_P5_Pos           5            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P5               (_U(0x1) << GPIO_PMR2T_P5_Pos)
#define GPIO_PMR2T_P6_Pos           6            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P6               (_U(0x1) << GPIO_PMR2T_P6_Pos)
#define GPIO_PMR2T_P7_Pos           7            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P7               (_U(0x1) << GPIO_PMR2T_P7_Pos)
#define GPIO_PMR2T_P8_Pos           8            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P8               (_U(0x1) << GPIO_PMR2T_P8_Pos)
#define GPIO_PMR2T_P9_Pos           9            /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P9               (_U(0x1) << GPIO_PMR2T_P9_Pos)
#define GPIO_PMR2T_P10_Pos          10           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P10              (_U(0x1) << GPIO_PMR2T_P10_Pos)
#define GPIO_PMR2T_P11_Pos          11           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P11              (_U(0x1) << GPIO_PMR2T_P11_Pos)
#define GPIO_PMR2T_P12_Pos          12           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P12              (_U(0x1) << GPIO_PMR2T_P12_Pos)
#define GPIO_PMR2T_P13_Pos          13           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P13              (_U(0x1) << GPIO_PMR2T_P13_Pos)
#define GPIO_PMR2T_P14_Pos          14           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P14              (_U(0x1) << GPIO_PMR2T_P14_Pos)
#define GPIO_PMR2T_P15_Pos          15           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P15              (_U(0x1) << GPIO_PMR2T_P15_Pos)
#define GPIO_PMR2T_P16_Pos          16           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P16              (_U(0x1) << GPIO_PMR2T_P16_Pos)
#define GPIO_PMR2T_P17_Pos          17           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P17              (_U(0x1) << GPIO_PMR2T_P17_Pos)
#define GPIO_PMR2T_P18_Pos          18           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P18              (_U(0x1) << GPIO_PMR2T_P18_Pos)
#define GPIO_PMR2T_P19_Pos          19           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P19              (_U(0x1) << GPIO_PMR2T_P19_Pos)
#define GPIO_PMR2T_P20_Pos          20           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P20              (_U(0x1) << GPIO_PMR2T_P20_Pos)
#define GPIO_PMR2T_P21_Pos          21           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P21              (_U(0x1) << GPIO_PMR2T_P21_Pos)
#define GPIO_PMR2T_P22_Pos          22           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P22              (_U(0x1) << GPIO_PMR2T_P22_Pos)
#define GPIO_PMR2T_P23_Pos          23           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P23              (_U(0x1) << GPIO_PMR2T_P23_Pos)
#define GPIO_PMR2T_P24_Pos          24           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P24              (_U(0x1) << GPIO_PMR2T_P24_Pos)
#define GPIO_PMR2T_P25_Pos          25           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P25              (_U(0x1) << GPIO_PMR2T_P25_Pos)
#define GPIO_PMR2T_P26_Pos          26           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P26              (_U(0x1) << GPIO_PMR2T_P26_Pos)
#define GPIO_PMR2T_P27_Pos          27           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P27              (_U(0x1) << GPIO_PMR2T_P27_Pos)
#define GPIO_PMR2T_P28_Pos          28           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P28              (_U(0x1) << GPIO_PMR2T_P28_Pos)
#define GPIO_PMR2T_P29_Pos          29           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P29              (_U(0x1) << GPIO_PMR2T_P29_Pos)
#define GPIO_PMR2T_P30_Pos          30           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P30              (_U(0x1) << GPIO_PMR2T_P30_Pos)
#define GPIO_PMR2T_P31_Pos          31           /**< \brief (GPIO_PMR2T) Peripheral Multiplexer Select bit 2 */
#define GPIO_PMR2T_P31              (_U(0x1) << GPIO_PMR2T_P31_Pos)
#define GPIO_PMR2T_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PMR2T) MASK Register */

/* -------- GPIO_ODER : (GPIO Offset: 0x040) (R/W 32) port Output Driver Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driver Enable               */
    uint32_t P1:1;             /*!< bit:      1  Output Driver Enable               */
    uint32_t P2:1;             /*!< bit:      2  Output Driver Enable               */
    uint32_t P3:1;             /*!< bit:      3  Output Driver Enable               */
    uint32_t P4:1;             /*!< bit:      4  Output Driver Enable               */
    uint32_t P5:1;             /*!< bit:      5  Output Driver Enable               */
    uint32_t P6:1;             /*!< bit:      6  Output Driver Enable               */
    uint32_t P7:1;             /*!< bit:      7  Output Driver Enable               */
    uint32_t P8:1;             /*!< bit:      8  Output Driver Enable               */
    uint32_t P9:1;             /*!< bit:      9  Output Driver Enable               */
    uint32_t P10:1;            /*!< bit:     10  Output Driver Enable               */
    uint32_t P11:1;            /*!< bit:     11  Output Driver Enable               */
    uint32_t P12:1;            /*!< bit:     12  Output Driver Enable               */
    uint32_t P13:1;            /*!< bit:     13  Output Driver Enable               */
    uint32_t P14:1;            /*!< bit:     14  Output Driver Enable               */
    uint32_t P15:1;            /*!< bit:     15  Output Driver Enable               */
    uint32_t P16:1;            /*!< bit:     16  Output Driver Enable               */
    uint32_t P17:1;            /*!< bit:     17  Output Driver Enable               */
    uint32_t P18:1;            /*!< bit:     18  Output Driver Enable               */
    uint32_t P19:1;            /*!< bit:     19  Output Driver Enable               */
    uint32_t P20:1;            /*!< bit:     20  Output Driver Enable               */
    uint32_t P21:1;            /*!< bit:     21  Output Driver Enable               */
    uint32_t P22:1;            /*!< bit:     22  Output Driver Enable               */
    uint32_t P23:1;            /*!< bit:     23  Output Driver Enable               */
    uint32_t P24:1;            /*!< bit:     24  Output Driver Enable               */
    uint32_t P25:1;            /*!< bit:     25  Output Driver Enable               */
    uint32_t P26:1;            /*!< bit:     26  Output Driver Enable               */
    uint32_t P27:1;            /*!< bit:     27  Output Driver Enable               */
    uint32_t P28:1;            /*!< bit:     28  Output Driver Enable               */
    uint32_t P29:1;            /*!< bit:     29  Output Driver Enable               */
    uint32_t P30:1;            /*!< bit:     30  Output Driver Enable               */
    uint32_t P31:1;            /*!< bit:     31  Output Driver Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODER_OFFSET            0x040        /**< \brief (GPIO_ODER offset) Output Driver Enable Register */

#define GPIO_ODER_P0_Pos            0            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P0                (_U(0x1) << GPIO_ODER_P0_Pos)
#define GPIO_ODER_P1_Pos            1            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P1                (_U(0x1) << GPIO_ODER_P1_Pos)
#define GPIO_ODER_P2_Pos            2            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P2                (_U(0x1) << GPIO_ODER_P2_Pos)
#define GPIO_ODER_P3_Pos            3            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P3                (_U(0x1) << GPIO_ODER_P3_Pos)
#define GPIO_ODER_P4_Pos            4            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P4                (_U(0x1) << GPIO_ODER_P4_Pos)
#define GPIO_ODER_P5_Pos            5            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P5                (_U(0x1) << GPIO_ODER_P5_Pos)
#define GPIO_ODER_P6_Pos            6            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P6                (_U(0x1) << GPIO_ODER_P6_Pos)
#define GPIO_ODER_P7_Pos            7            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P7                (_U(0x1) << GPIO_ODER_P7_Pos)
#define GPIO_ODER_P8_Pos            8            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P8                (_U(0x1) << GPIO_ODER_P8_Pos)
#define GPIO_ODER_P9_Pos            9            /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P9                (_U(0x1) << GPIO_ODER_P9_Pos)
#define GPIO_ODER_P10_Pos           10           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P10               (_U(0x1) << GPIO_ODER_P10_Pos)
#define GPIO_ODER_P11_Pos           11           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P11               (_U(0x1) << GPIO_ODER_P11_Pos)
#define GPIO_ODER_P12_Pos           12           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P12               (_U(0x1) << GPIO_ODER_P12_Pos)
#define GPIO_ODER_P13_Pos           13           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P13               (_U(0x1) << GPIO_ODER_P13_Pos)
#define GPIO_ODER_P14_Pos           14           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P14               (_U(0x1) << GPIO_ODER_P14_Pos)
#define GPIO_ODER_P15_Pos           15           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P15               (_U(0x1) << GPIO_ODER_P15_Pos)
#define GPIO_ODER_P16_Pos           16           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P16               (_U(0x1) << GPIO_ODER_P16_Pos)
#define GPIO_ODER_P17_Pos           17           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P17               (_U(0x1) << GPIO_ODER_P17_Pos)
#define GPIO_ODER_P18_Pos           18           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P18               (_U(0x1) << GPIO_ODER_P18_Pos)
#define GPIO_ODER_P19_Pos           19           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P19               (_U(0x1) << GPIO_ODER_P19_Pos)
#define GPIO_ODER_P20_Pos           20           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P20               (_U(0x1) << GPIO_ODER_P20_Pos)
#define GPIO_ODER_P21_Pos           21           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P21               (_U(0x1) << GPIO_ODER_P21_Pos)
#define GPIO_ODER_P22_Pos           22           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P22               (_U(0x1) << GPIO_ODER_P22_Pos)
#define GPIO_ODER_P23_Pos           23           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P23               (_U(0x1) << GPIO_ODER_P23_Pos)
#define GPIO_ODER_P24_Pos           24           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P24               (_U(0x1) << GPIO_ODER_P24_Pos)
#define GPIO_ODER_P25_Pos           25           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P25               (_U(0x1) << GPIO_ODER_P25_Pos)
#define GPIO_ODER_P26_Pos           26           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P26               (_U(0x1) << GPIO_ODER_P26_Pos)
#define GPIO_ODER_P27_Pos           27           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P27               (_U(0x1) << GPIO_ODER_P27_Pos)
#define GPIO_ODER_P28_Pos           28           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P28               (_U(0x1) << GPIO_ODER_P28_Pos)
#define GPIO_ODER_P29_Pos           29           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P29               (_U(0x1) << GPIO_ODER_P29_Pos)
#define GPIO_ODER_P30_Pos           30           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P30               (_U(0x1) << GPIO_ODER_P30_Pos)
#define GPIO_ODER_P31_Pos           31           /**< \brief (GPIO_ODER) Output Driver Enable */
#define GPIO_ODER_P31               (_U(0x1) << GPIO_ODER_P31_Pos)
#define GPIO_ODER_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_ODER) MASK Register */

/* -------- GPIO_ODERS : (GPIO Offset: 0x044) ( /W 32) port Output Driver Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driver Enable               */
    uint32_t P1:1;             /*!< bit:      1  Output Driver Enable               */
    uint32_t P2:1;             /*!< bit:      2  Output Driver Enable               */
    uint32_t P3:1;             /*!< bit:      3  Output Driver Enable               */
    uint32_t P4:1;             /*!< bit:      4  Output Driver Enable               */
    uint32_t P5:1;             /*!< bit:      5  Output Driver Enable               */
    uint32_t P6:1;             /*!< bit:      6  Output Driver Enable               */
    uint32_t P7:1;             /*!< bit:      7  Output Driver Enable               */
    uint32_t P8:1;             /*!< bit:      8  Output Driver Enable               */
    uint32_t P9:1;             /*!< bit:      9  Output Driver Enable               */
    uint32_t P10:1;            /*!< bit:     10  Output Driver Enable               */
    uint32_t P11:1;            /*!< bit:     11  Output Driver Enable               */
    uint32_t P12:1;            /*!< bit:     12  Output Driver Enable               */
    uint32_t P13:1;            /*!< bit:     13  Output Driver Enable               */
    uint32_t P14:1;            /*!< bit:     14  Output Driver Enable               */
    uint32_t P15:1;            /*!< bit:     15  Output Driver Enable               */
    uint32_t P16:1;            /*!< bit:     16  Output Driver Enable               */
    uint32_t P17:1;            /*!< bit:     17  Output Driver Enable               */
    uint32_t P18:1;            /*!< bit:     18  Output Driver Enable               */
    uint32_t P19:1;            /*!< bit:     19  Output Driver Enable               */
    uint32_t P20:1;            /*!< bit:     20  Output Driver Enable               */
    uint32_t P21:1;            /*!< bit:     21  Output Driver Enable               */
    uint32_t P22:1;            /*!< bit:     22  Output Driver Enable               */
    uint32_t P23:1;            /*!< bit:     23  Output Driver Enable               */
    uint32_t P24:1;            /*!< bit:     24  Output Driver Enable               */
    uint32_t P25:1;            /*!< bit:     25  Output Driver Enable               */
    uint32_t P26:1;            /*!< bit:     26  Output Driver Enable               */
    uint32_t P27:1;            /*!< bit:     27  Output Driver Enable               */
    uint32_t P28:1;            /*!< bit:     28  Output Driver Enable               */
    uint32_t P29:1;            /*!< bit:     29  Output Driver Enable               */
    uint32_t P30:1;            /*!< bit:     30  Output Driver Enable               */
    uint32_t P31:1;            /*!< bit:     31  Output Driver Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODERS_OFFSET           0x044        /**< \brief (GPIO_ODERS offset) Output Driver Enable Register - Set */

#define GPIO_ODERS_P0_Pos           0            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P0               (_U(0x1) << GPIO_ODERS_P0_Pos)
#define GPIO_ODERS_P1_Pos           1            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P1               (_U(0x1) << GPIO_ODERS_P1_Pos)
#define GPIO_ODERS_P2_Pos           2            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P2               (_U(0x1) << GPIO_ODERS_P2_Pos)
#define GPIO_ODERS_P3_Pos           3            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P3               (_U(0x1) << GPIO_ODERS_P3_Pos)
#define GPIO_ODERS_P4_Pos           4            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P4               (_U(0x1) << GPIO_ODERS_P4_Pos)
#define GPIO_ODERS_P5_Pos           5            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P5               (_U(0x1) << GPIO_ODERS_P5_Pos)
#define GPIO_ODERS_P6_Pos           6            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P6               (_U(0x1) << GPIO_ODERS_P6_Pos)
#define GPIO_ODERS_P7_Pos           7            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P7               (_U(0x1) << GPIO_ODERS_P7_Pos)
#define GPIO_ODERS_P8_Pos           8            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P8               (_U(0x1) << GPIO_ODERS_P8_Pos)
#define GPIO_ODERS_P9_Pos           9            /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P9               (_U(0x1) << GPIO_ODERS_P9_Pos)
#define GPIO_ODERS_P10_Pos          10           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P10              (_U(0x1) << GPIO_ODERS_P10_Pos)
#define GPIO_ODERS_P11_Pos          11           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P11              (_U(0x1) << GPIO_ODERS_P11_Pos)
#define GPIO_ODERS_P12_Pos          12           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P12              (_U(0x1) << GPIO_ODERS_P12_Pos)
#define GPIO_ODERS_P13_Pos          13           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P13              (_U(0x1) << GPIO_ODERS_P13_Pos)
#define GPIO_ODERS_P14_Pos          14           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P14              (_U(0x1) << GPIO_ODERS_P14_Pos)
#define GPIO_ODERS_P15_Pos          15           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P15              (_U(0x1) << GPIO_ODERS_P15_Pos)
#define GPIO_ODERS_P16_Pos          16           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P16              (_U(0x1) << GPIO_ODERS_P16_Pos)
#define GPIO_ODERS_P17_Pos          17           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P17              (_U(0x1) << GPIO_ODERS_P17_Pos)
#define GPIO_ODERS_P18_Pos          18           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P18              (_U(0x1) << GPIO_ODERS_P18_Pos)
#define GPIO_ODERS_P19_Pos          19           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P19              (_U(0x1) << GPIO_ODERS_P19_Pos)
#define GPIO_ODERS_P20_Pos          20           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P20              (_U(0x1) << GPIO_ODERS_P20_Pos)
#define GPIO_ODERS_P21_Pos          21           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P21              (_U(0x1) << GPIO_ODERS_P21_Pos)
#define GPIO_ODERS_P22_Pos          22           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P22              (_U(0x1) << GPIO_ODERS_P22_Pos)
#define GPIO_ODERS_P23_Pos          23           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P23              (_U(0x1) << GPIO_ODERS_P23_Pos)
#define GPIO_ODERS_P24_Pos          24           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P24              (_U(0x1) << GPIO_ODERS_P24_Pos)
#define GPIO_ODERS_P25_Pos          25           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P25              (_U(0x1) << GPIO_ODERS_P25_Pos)
#define GPIO_ODERS_P26_Pos          26           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P26              (_U(0x1) << GPIO_ODERS_P26_Pos)
#define GPIO_ODERS_P27_Pos          27           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P27              (_U(0x1) << GPIO_ODERS_P27_Pos)
#define GPIO_ODERS_P28_Pos          28           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P28              (_U(0x1) << GPIO_ODERS_P28_Pos)
#define GPIO_ODERS_P29_Pos          29           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P29              (_U(0x1) << GPIO_ODERS_P29_Pos)
#define GPIO_ODERS_P30_Pos          30           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P30              (_U(0x1) << GPIO_ODERS_P30_Pos)
#define GPIO_ODERS_P31_Pos          31           /**< \brief (GPIO_ODERS) Output Driver Enable */
#define GPIO_ODERS_P31              (_U(0x1) << GPIO_ODERS_P31_Pos)
#define GPIO_ODERS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_ODERS) MASK Register */

/* -------- GPIO_ODERC : (GPIO Offset: 0x048) ( /W 32) port Output Driver Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driver Enable               */
    uint32_t P1:1;             /*!< bit:      1  Output Driver Enable               */
    uint32_t P2:1;             /*!< bit:      2  Output Driver Enable               */
    uint32_t P3:1;             /*!< bit:      3  Output Driver Enable               */
    uint32_t P4:1;             /*!< bit:      4  Output Driver Enable               */
    uint32_t P5:1;             /*!< bit:      5  Output Driver Enable               */
    uint32_t P6:1;             /*!< bit:      6  Output Driver Enable               */
    uint32_t P7:1;             /*!< bit:      7  Output Driver Enable               */
    uint32_t P8:1;             /*!< bit:      8  Output Driver Enable               */
    uint32_t P9:1;             /*!< bit:      9  Output Driver Enable               */
    uint32_t P10:1;            /*!< bit:     10  Output Driver Enable               */
    uint32_t P11:1;            /*!< bit:     11  Output Driver Enable               */
    uint32_t P12:1;            /*!< bit:     12  Output Driver Enable               */
    uint32_t P13:1;            /*!< bit:     13  Output Driver Enable               */
    uint32_t P14:1;            /*!< bit:     14  Output Driver Enable               */
    uint32_t P15:1;            /*!< bit:     15  Output Driver Enable               */
    uint32_t P16:1;            /*!< bit:     16  Output Driver Enable               */
    uint32_t P17:1;            /*!< bit:     17  Output Driver Enable               */
    uint32_t P18:1;            /*!< bit:     18  Output Driver Enable               */
    uint32_t P19:1;            /*!< bit:     19  Output Driver Enable               */
    uint32_t P20:1;            /*!< bit:     20  Output Driver Enable               */
    uint32_t P21:1;            /*!< bit:     21  Output Driver Enable               */
    uint32_t P22:1;            /*!< bit:     22  Output Driver Enable               */
    uint32_t P23:1;            /*!< bit:     23  Output Driver Enable               */
    uint32_t P24:1;            /*!< bit:     24  Output Driver Enable               */
    uint32_t P25:1;            /*!< bit:     25  Output Driver Enable               */
    uint32_t P26:1;            /*!< bit:     26  Output Driver Enable               */
    uint32_t P27:1;            /*!< bit:     27  Output Driver Enable               */
    uint32_t P28:1;            /*!< bit:     28  Output Driver Enable               */
    uint32_t P29:1;            /*!< bit:     29  Output Driver Enable               */
    uint32_t P30:1;            /*!< bit:     30  Output Driver Enable               */
    uint32_t P31:1;            /*!< bit:     31  Output Driver Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODERC_OFFSET           0x048        /**< \brief (GPIO_ODERC offset) Output Driver Enable Register - Clear */

#define GPIO_ODERC_P0_Pos           0            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P0               (_U(0x1) << GPIO_ODERC_P0_Pos)
#define GPIO_ODERC_P1_Pos           1            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P1               (_U(0x1) << GPIO_ODERC_P1_Pos)
#define GPIO_ODERC_P2_Pos           2            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P2               (_U(0x1) << GPIO_ODERC_P2_Pos)
#define GPIO_ODERC_P3_Pos           3            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P3               (_U(0x1) << GPIO_ODERC_P3_Pos)
#define GPIO_ODERC_P4_Pos           4            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P4               (_U(0x1) << GPIO_ODERC_P4_Pos)
#define GPIO_ODERC_P5_Pos           5            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P5               (_U(0x1) << GPIO_ODERC_P5_Pos)
#define GPIO_ODERC_P6_Pos           6            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P6               (_U(0x1) << GPIO_ODERC_P6_Pos)
#define GPIO_ODERC_P7_Pos           7            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P7               (_U(0x1) << GPIO_ODERC_P7_Pos)
#define GPIO_ODERC_P8_Pos           8            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P8               (_U(0x1) << GPIO_ODERC_P8_Pos)
#define GPIO_ODERC_P9_Pos           9            /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P9               (_U(0x1) << GPIO_ODERC_P9_Pos)
#define GPIO_ODERC_P10_Pos          10           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P10              (_U(0x1) << GPIO_ODERC_P10_Pos)
#define GPIO_ODERC_P11_Pos          11           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P11              (_U(0x1) << GPIO_ODERC_P11_Pos)
#define GPIO_ODERC_P12_Pos          12           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P12              (_U(0x1) << GPIO_ODERC_P12_Pos)
#define GPIO_ODERC_P13_Pos          13           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P13              (_U(0x1) << GPIO_ODERC_P13_Pos)
#define GPIO_ODERC_P14_Pos          14           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P14              (_U(0x1) << GPIO_ODERC_P14_Pos)
#define GPIO_ODERC_P15_Pos          15           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P15              (_U(0x1) << GPIO_ODERC_P15_Pos)
#define GPIO_ODERC_P16_Pos          16           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P16              (_U(0x1) << GPIO_ODERC_P16_Pos)
#define GPIO_ODERC_P17_Pos          17           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P17              (_U(0x1) << GPIO_ODERC_P17_Pos)
#define GPIO_ODERC_P18_Pos          18           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P18              (_U(0x1) << GPIO_ODERC_P18_Pos)
#define GPIO_ODERC_P19_Pos          19           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P19              (_U(0x1) << GPIO_ODERC_P19_Pos)
#define GPIO_ODERC_P20_Pos          20           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P20              (_U(0x1) << GPIO_ODERC_P20_Pos)
#define GPIO_ODERC_P21_Pos          21           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P21              (_U(0x1) << GPIO_ODERC_P21_Pos)
#define GPIO_ODERC_P22_Pos          22           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P22              (_U(0x1) << GPIO_ODERC_P22_Pos)
#define GPIO_ODERC_P23_Pos          23           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P23              (_U(0x1) << GPIO_ODERC_P23_Pos)
#define GPIO_ODERC_P24_Pos          24           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P24              (_U(0x1) << GPIO_ODERC_P24_Pos)
#define GPIO_ODERC_P25_Pos          25           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P25              (_U(0x1) << GPIO_ODERC_P25_Pos)
#define GPIO_ODERC_P26_Pos          26           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P26              (_U(0x1) << GPIO_ODERC_P26_Pos)
#define GPIO_ODERC_P27_Pos          27           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P27              (_U(0x1) << GPIO_ODERC_P27_Pos)
#define GPIO_ODERC_P28_Pos          28           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P28              (_U(0x1) << GPIO_ODERC_P28_Pos)
#define GPIO_ODERC_P29_Pos          29           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P29              (_U(0x1) << GPIO_ODERC_P29_Pos)
#define GPIO_ODERC_P30_Pos          30           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P30              (_U(0x1) << GPIO_ODERC_P30_Pos)
#define GPIO_ODERC_P31_Pos          31           /**< \brief (GPIO_ODERC) Output Driver Enable */
#define GPIO_ODERC_P31              (_U(0x1) << GPIO_ODERC_P31_Pos)
#define GPIO_ODERC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_ODERC) MASK Register */

/* -------- GPIO_ODERT : (GPIO Offset: 0x04C) ( /W 32) port Output Driver Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driver Enable               */
    uint32_t P1:1;             /*!< bit:      1  Output Driver Enable               */
    uint32_t P2:1;             /*!< bit:      2  Output Driver Enable               */
    uint32_t P3:1;             /*!< bit:      3  Output Driver Enable               */
    uint32_t P4:1;             /*!< bit:      4  Output Driver Enable               */
    uint32_t P5:1;             /*!< bit:      5  Output Driver Enable               */
    uint32_t P6:1;             /*!< bit:      6  Output Driver Enable               */
    uint32_t P7:1;             /*!< bit:      7  Output Driver Enable               */
    uint32_t P8:1;             /*!< bit:      8  Output Driver Enable               */
    uint32_t P9:1;             /*!< bit:      9  Output Driver Enable               */
    uint32_t P10:1;            /*!< bit:     10  Output Driver Enable               */
    uint32_t P11:1;            /*!< bit:     11  Output Driver Enable               */
    uint32_t P12:1;            /*!< bit:     12  Output Driver Enable               */
    uint32_t P13:1;            /*!< bit:     13  Output Driver Enable               */
    uint32_t P14:1;            /*!< bit:     14  Output Driver Enable               */
    uint32_t P15:1;            /*!< bit:     15  Output Driver Enable               */
    uint32_t P16:1;            /*!< bit:     16  Output Driver Enable               */
    uint32_t P17:1;            /*!< bit:     17  Output Driver Enable               */
    uint32_t P18:1;            /*!< bit:     18  Output Driver Enable               */
    uint32_t P19:1;            /*!< bit:     19  Output Driver Enable               */
    uint32_t P20:1;            /*!< bit:     20  Output Driver Enable               */
    uint32_t P21:1;            /*!< bit:     21  Output Driver Enable               */
    uint32_t P22:1;            /*!< bit:     22  Output Driver Enable               */
    uint32_t P23:1;            /*!< bit:     23  Output Driver Enable               */
    uint32_t P24:1;            /*!< bit:     24  Output Driver Enable               */
    uint32_t P25:1;            /*!< bit:     25  Output Driver Enable               */
    uint32_t P26:1;            /*!< bit:     26  Output Driver Enable               */
    uint32_t P27:1;            /*!< bit:     27  Output Driver Enable               */
    uint32_t P28:1;            /*!< bit:     28  Output Driver Enable               */
    uint32_t P29:1;            /*!< bit:     29  Output Driver Enable               */
    uint32_t P30:1;            /*!< bit:     30  Output Driver Enable               */
    uint32_t P31:1;            /*!< bit:     31  Output Driver Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODERT_OFFSET           0x04C        /**< \brief (GPIO_ODERT offset) Output Driver Enable Register - Toggle */

#define GPIO_ODERT_P0_Pos           0            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P0               (_U(0x1) << GPIO_ODERT_P0_Pos)
#define GPIO_ODERT_P1_Pos           1            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P1               (_U(0x1) << GPIO_ODERT_P1_Pos)
#define GPIO_ODERT_P2_Pos           2            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P2               (_U(0x1) << GPIO_ODERT_P2_Pos)
#define GPIO_ODERT_P3_Pos           3            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P3               (_U(0x1) << GPIO_ODERT_P3_Pos)
#define GPIO_ODERT_P4_Pos           4            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P4               (_U(0x1) << GPIO_ODERT_P4_Pos)
#define GPIO_ODERT_P5_Pos           5            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P5               (_U(0x1) << GPIO_ODERT_P5_Pos)
#define GPIO_ODERT_P6_Pos           6            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P6               (_U(0x1) << GPIO_ODERT_P6_Pos)
#define GPIO_ODERT_P7_Pos           7            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P7               (_U(0x1) << GPIO_ODERT_P7_Pos)
#define GPIO_ODERT_P8_Pos           8            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P8               (_U(0x1) << GPIO_ODERT_P8_Pos)
#define GPIO_ODERT_P9_Pos           9            /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P9               (_U(0x1) << GPIO_ODERT_P9_Pos)
#define GPIO_ODERT_P10_Pos          10           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P10              (_U(0x1) << GPIO_ODERT_P10_Pos)
#define GPIO_ODERT_P11_Pos          11           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P11              (_U(0x1) << GPIO_ODERT_P11_Pos)
#define GPIO_ODERT_P12_Pos          12           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P12              (_U(0x1) << GPIO_ODERT_P12_Pos)
#define GPIO_ODERT_P13_Pos          13           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P13              (_U(0x1) << GPIO_ODERT_P13_Pos)
#define GPIO_ODERT_P14_Pos          14           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P14              (_U(0x1) << GPIO_ODERT_P14_Pos)
#define GPIO_ODERT_P15_Pos          15           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P15              (_U(0x1) << GPIO_ODERT_P15_Pos)
#define GPIO_ODERT_P16_Pos          16           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P16              (_U(0x1) << GPIO_ODERT_P16_Pos)
#define GPIO_ODERT_P17_Pos          17           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P17              (_U(0x1) << GPIO_ODERT_P17_Pos)
#define GPIO_ODERT_P18_Pos          18           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P18              (_U(0x1) << GPIO_ODERT_P18_Pos)
#define GPIO_ODERT_P19_Pos          19           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P19              (_U(0x1) << GPIO_ODERT_P19_Pos)
#define GPIO_ODERT_P20_Pos          20           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P20              (_U(0x1) << GPIO_ODERT_P20_Pos)
#define GPIO_ODERT_P21_Pos          21           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P21              (_U(0x1) << GPIO_ODERT_P21_Pos)
#define GPIO_ODERT_P22_Pos          22           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P22              (_U(0x1) << GPIO_ODERT_P22_Pos)
#define GPIO_ODERT_P23_Pos          23           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P23              (_U(0x1) << GPIO_ODERT_P23_Pos)
#define GPIO_ODERT_P24_Pos          24           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P24              (_U(0x1) << GPIO_ODERT_P24_Pos)
#define GPIO_ODERT_P25_Pos          25           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P25              (_U(0x1) << GPIO_ODERT_P25_Pos)
#define GPIO_ODERT_P26_Pos          26           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P26              (_U(0x1) << GPIO_ODERT_P26_Pos)
#define GPIO_ODERT_P27_Pos          27           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P27              (_U(0x1) << GPIO_ODERT_P27_Pos)
#define GPIO_ODERT_P28_Pos          28           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P28              (_U(0x1) << GPIO_ODERT_P28_Pos)
#define GPIO_ODERT_P29_Pos          29           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P29              (_U(0x1) << GPIO_ODERT_P29_Pos)
#define GPIO_ODERT_P30_Pos          30           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P30              (_U(0x1) << GPIO_ODERT_P30_Pos)
#define GPIO_ODERT_P31_Pos          31           /**< \brief (GPIO_ODERT) Output Driver Enable */
#define GPIO_ODERT_P31              (_U(0x1) << GPIO_ODERT_P31_Pos)
#define GPIO_ODERT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_ODERT) MASK Register */

/* -------- GPIO_OVR : (GPIO Offset: 0x050) (R/W 32) port Output Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Value                       */
    uint32_t P1:1;             /*!< bit:      1  Output Value                       */
    uint32_t P2:1;             /*!< bit:      2  Output Value                       */
    uint32_t P3:1;             /*!< bit:      3  Output Value                       */
    uint32_t P4:1;             /*!< bit:      4  Output Value                       */
    uint32_t P5:1;             /*!< bit:      5  Output Value                       */
    uint32_t P6:1;             /*!< bit:      6  Output Value                       */
    uint32_t P7:1;             /*!< bit:      7  Output Value                       */
    uint32_t P8:1;             /*!< bit:      8  Output Value                       */
    uint32_t P9:1;             /*!< bit:      9  Output Value                       */
    uint32_t P10:1;            /*!< bit:     10  Output Value                       */
    uint32_t P11:1;            /*!< bit:     11  Output Value                       */
    uint32_t P12:1;            /*!< bit:     12  Output Value                       */
    uint32_t P13:1;            /*!< bit:     13  Output Value                       */
    uint32_t P14:1;            /*!< bit:     14  Output Value                       */
    uint32_t P15:1;            /*!< bit:     15  Output Value                       */
    uint32_t P16:1;            /*!< bit:     16  Output Value                       */
    uint32_t P17:1;            /*!< bit:     17  Output Value                       */
    uint32_t P18:1;            /*!< bit:     18  Output Value                       */
    uint32_t P19:1;            /*!< bit:     19  Output Value                       */
    uint32_t P20:1;            /*!< bit:     20  Output Value                       */
    uint32_t P21:1;            /*!< bit:     21  Output Value                       */
    uint32_t P22:1;            /*!< bit:     22  Output Value                       */
    uint32_t P23:1;            /*!< bit:     23  Output Value                       */
    uint32_t P24:1;            /*!< bit:     24  Output Value                       */
    uint32_t P25:1;            /*!< bit:     25  Output Value                       */
    uint32_t P26:1;            /*!< bit:     26  Output Value                       */
    uint32_t P27:1;            /*!< bit:     27  Output Value                       */
    uint32_t P28:1;            /*!< bit:     28  Output Value                       */
    uint32_t P29:1;            /*!< bit:     29  Output Value                       */
    uint32_t P30:1;            /*!< bit:     30  Output Value                       */
    uint32_t P31:1;            /*!< bit:     31  Output Value                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OVR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OVR_OFFSET             0x050        /**< \brief (GPIO_OVR offset) Output Value Register */

#define GPIO_OVR_P0_Pos             0            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P0                 (_U(0x1) << GPIO_OVR_P0_Pos)
#define GPIO_OVR_P1_Pos             1            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P1                 (_U(0x1) << GPIO_OVR_P1_Pos)
#define GPIO_OVR_P2_Pos             2            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P2                 (_U(0x1) << GPIO_OVR_P2_Pos)
#define GPIO_OVR_P3_Pos             3            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P3                 (_U(0x1) << GPIO_OVR_P3_Pos)
#define GPIO_OVR_P4_Pos             4            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P4                 (_U(0x1) << GPIO_OVR_P4_Pos)
#define GPIO_OVR_P5_Pos             5            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P5                 (_U(0x1) << GPIO_OVR_P5_Pos)
#define GPIO_OVR_P6_Pos             6            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P6                 (_U(0x1) << GPIO_OVR_P6_Pos)
#define GPIO_OVR_P7_Pos             7            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P7                 (_U(0x1) << GPIO_OVR_P7_Pos)
#define GPIO_OVR_P8_Pos             8            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P8                 (_U(0x1) << GPIO_OVR_P8_Pos)
#define GPIO_OVR_P9_Pos             9            /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P9                 (_U(0x1) << GPIO_OVR_P9_Pos)
#define GPIO_OVR_P10_Pos            10           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P10                (_U(0x1) << GPIO_OVR_P10_Pos)
#define GPIO_OVR_P11_Pos            11           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P11                (_U(0x1) << GPIO_OVR_P11_Pos)
#define GPIO_OVR_P12_Pos            12           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P12                (_U(0x1) << GPIO_OVR_P12_Pos)
#define GPIO_OVR_P13_Pos            13           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P13                (_U(0x1) << GPIO_OVR_P13_Pos)
#define GPIO_OVR_P14_Pos            14           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P14                (_U(0x1) << GPIO_OVR_P14_Pos)
#define GPIO_OVR_P15_Pos            15           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P15                (_U(0x1) << GPIO_OVR_P15_Pos)
#define GPIO_OVR_P16_Pos            16           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P16                (_U(0x1) << GPIO_OVR_P16_Pos)
#define GPIO_OVR_P17_Pos            17           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P17                (_U(0x1) << GPIO_OVR_P17_Pos)
#define GPIO_OVR_P18_Pos            18           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P18                (_U(0x1) << GPIO_OVR_P18_Pos)
#define GPIO_OVR_P19_Pos            19           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P19                (_U(0x1) << GPIO_OVR_P19_Pos)
#define GPIO_OVR_P20_Pos            20           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P20                (_U(0x1) << GPIO_OVR_P20_Pos)
#define GPIO_OVR_P21_Pos            21           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P21                (_U(0x1) << GPIO_OVR_P21_Pos)
#define GPIO_OVR_P22_Pos            22           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P22                (_U(0x1) << GPIO_OVR_P22_Pos)
#define GPIO_OVR_P23_Pos            23           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P23                (_U(0x1) << GPIO_OVR_P23_Pos)
#define GPIO_OVR_P24_Pos            24           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P24                (_U(0x1) << GPIO_OVR_P24_Pos)
#define GPIO_OVR_P25_Pos            25           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P25                (_U(0x1) << GPIO_OVR_P25_Pos)
#define GPIO_OVR_P26_Pos            26           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P26                (_U(0x1) << GPIO_OVR_P26_Pos)
#define GPIO_OVR_P27_Pos            27           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P27                (_U(0x1) << GPIO_OVR_P27_Pos)
#define GPIO_OVR_P28_Pos            28           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P28                (_U(0x1) << GPIO_OVR_P28_Pos)
#define GPIO_OVR_P29_Pos            29           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P29                (_U(0x1) << GPIO_OVR_P29_Pos)
#define GPIO_OVR_P30_Pos            30           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P30                (_U(0x1) << GPIO_OVR_P30_Pos)
#define GPIO_OVR_P31_Pos            31           /**< \brief (GPIO_OVR) Output Value */
#define GPIO_OVR_P31                (_U(0x1) << GPIO_OVR_P31_Pos)
#define GPIO_OVR_MASK               _U(0xFFFFFFFF) /**< \brief (GPIO_OVR) MASK Register */

/* -------- GPIO_OVRS : (GPIO Offset: 0x054) ( /W 32) port Output Value Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Value                       */
    uint32_t P1:1;             /*!< bit:      1  Output Value                       */
    uint32_t P2:1;             /*!< bit:      2  Output Value                       */
    uint32_t P3:1;             /*!< bit:      3  Output Value                       */
    uint32_t P4:1;             /*!< bit:      4  Output Value                       */
    uint32_t P5:1;             /*!< bit:      5  Output Value                       */
    uint32_t P6:1;             /*!< bit:      6  Output Value                       */
    uint32_t P7:1;             /*!< bit:      7  Output Value                       */
    uint32_t P8:1;             /*!< bit:      8  Output Value                       */
    uint32_t P9:1;             /*!< bit:      9  Output Value                       */
    uint32_t P10:1;            /*!< bit:     10  Output Value                       */
    uint32_t P11:1;            /*!< bit:     11  Output Value                       */
    uint32_t P12:1;            /*!< bit:     12  Output Value                       */
    uint32_t P13:1;            /*!< bit:     13  Output Value                       */
    uint32_t P14:1;            /*!< bit:     14  Output Value                       */
    uint32_t P15:1;            /*!< bit:     15  Output Value                       */
    uint32_t P16:1;            /*!< bit:     16  Output Value                       */
    uint32_t P17:1;            /*!< bit:     17  Output Value                       */
    uint32_t P18:1;            /*!< bit:     18  Output Value                       */
    uint32_t P19:1;            /*!< bit:     19  Output Value                       */
    uint32_t P20:1;            /*!< bit:     20  Output Value                       */
    uint32_t P21:1;            /*!< bit:     21  Output Value                       */
    uint32_t P22:1;            /*!< bit:     22  Output Value                       */
    uint32_t P23:1;            /*!< bit:     23  Output Value                       */
    uint32_t P24:1;            /*!< bit:     24  Output Value                       */
    uint32_t P25:1;            /*!< bit:     25  Output Value                       */
    uint32_t P26:1;            /*!< bit:     26  Output Value                       */
    uint32_t P27:1;            /*!< bit:     27  Output Value                       */
    uint32_t P28:1;            /*!< bit:     28  Output Value                       */
    uint32_t P29:1;            /*!< bit:     29  Output Value                       */
    uint32_t P30:1;            /*!< bit:     30  Output Value                       */
    uint32_t P31:1;            /*!< bit:     31  Output Value                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OVRS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OVRS_OFFSET            0x054        /**< \brief (GPIO_OVRS offset) Output Value Register - Set */

#define GPIO_OVRS_P0_Pos            0            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P0                (_U(0x1) << GPIO_OVRS_P0_Pos)
#define GPIO_OVRS_P1_Pos            1            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P1                (_U(0x1) << GPIO_OVRS_P1_Pos)
#define GPIO_OVRS_P2_Pos            2            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P2                (_U(0x1) << GPIO_OVRS_P2_Pos)
#define GPIO_OVRS_P3_Pos            3            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P3                (_U(0x1) << GPIO_OVRS_P3_Pos)
#define GPIO_OVRS_P4_Pos            4            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P4                (_U(0x1) << GPIO_OVRS_P4_Pos)
#define GPIO_OVRS_P5_Pos            5            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P5                (_U(0x1) << GPIO_OVRS_P5_Pos)
#define GPIO_OVRS_P6_Pos            6            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P6                (_U(0x1) << GPIO_OVRS_P6_Pos)
#define GPIO_OVRS_P7_Pos            7            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P7                (_U(0x1) << GPIO_OVRS_P7_Pos)
#define GPIO_OVRS_P8_Pos            8            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P8                (_U(0x1) << GPIO_OVRS_P8_Pos)
#define GPIO_OVRS_P9_Pos            9            /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P9                (_U(0x1) << GPIO_OVRS_P9_Pos)
#define GPIO_OVRS_P10_Pos           10           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P10               (_U(0x1) << GPIO_OVRS_P10_Pos)
#define GPIO_OVRS_P11_Pos           11           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P11               (_U(0x1) << GPIO_OVRS_P11_Pos)
#define GPIO_OVRS_P12_Pos           12           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P12               (_U(0x1) << GPIO_OVRS_P12_Pos)
#define GPIO_OVRS_P13_Pos           13           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P13               (_U(0x1) << GPIO_OVRS_P13_Pos)
#define GPIO_OVRS_P14_Pos           14           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P14               (_U(0x1) << GPIO_OVRS_P14_Pos)
#define GPIO_OVRS_P15_Pos           15           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P15               (_U(0x1) << GPIO_OVRS_P15_Pos)
#define GPIO_OVRS_P16_Pos           16           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P16               (_U(0x1) << GPIO_OVRS_P16_Pos)
#define GPIO_OVRS_P17_Pos           17           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P17               (_U(0x1) << GPIO_OVRS_P17_Pos)
#define GPIO_OVRS_P18_Pos           18           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P18               (_U(0x1) << GPIO_OVRS_P18_Pos)
#define GPIO_OVRS_P19_Pos           19           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P19               (_U(0x1) << GPIO_OVRS_P19_Pos)
#define GPIO_OVRS_P20_Pos           20           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P20               (_U(0x1) << GPIO_OVRS_P20_Pos)
#define GPIO_OVRS_P21_Pos           21           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P21               (_U(0x1) << GPIO_OVRS_P21_Pos)
#define GPIO_OVRS_P22_Pos           22           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P22               (_U(0x1) << GPIO_OVRS_P22_Pos)
#define GPIO_OVRS_P23_Pos           23           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P23               (_U(0x1) << GPIO_OVRS_P23_Pos)
#define GPIO_OVRS_P24_Pos           24           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P24               (_U(0x1) << GPIO_OVRS_P24_Pos)
#define GPIO_OVRS_P25_Pos           25           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P25               (_U(0x1) << GPIO_OVRS_P25_Pos)
#define GPIO_OVRS_P26_Pos           26           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P26               (_U(0x1) << GPIO_OVRS_P26_Pos)
#define GPIO_OVRS_P27_Pos           27           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P27               (_U(0x1) << GPIO_OVRS_P27_Pos)
#define GPIO_OVRS_P28_Pos           28           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P28               (_U(0x1) << GPIO_OVRS_P28_Pos)
#define GPIO_OVRS_P29_Pos           29           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P29               (_U(0x1) << GPIO_OVRS_P29_Pos)
#define GPIO_OVRS_P30_Pos           30           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P30               (_U(0x1) << GPIO_OVRS_P30_Pos)
#define GPIO_OVRS_P31_Pos           31           /**< \brief (GPIO_OVRS) Output Value */
#define GPIO_OVRS_P31               (_U(0x1) << GPIO_OVRS_P31_Pos)
#define GPIO_OVRS_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_OVRS) MASK Register */

/* -------- GPIO_OVRC : (GPIO Offset: 0x058) ( /W 32) port Output Value Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Value                       */
    uint32_t P1:1;             /*!< bit:      1  Output Value                       */
    uint32_t P2:1;             /*!< bit:      2  Output Value                       */
    uint32_t P3:1;             /*!< bit:      3  Output Value                       */
    uint32_t P4:1;             /*!< bit:      4  Output Value                       */
    uint32_t P5:1;             /*!< bit:      5  Output Value                       */
    uint32_t P6:1;             /*!< bit:      6  Output Value                       */
    uint32_t P7:1;             /*!< bit:      7  Output Value                       */
    uint32_t P8:1;             /*!< bit:      8  Output Value                       */
    uint32_t P9:1;             /*!< bit:      9  Output Value                       */
    uint32_t P10:1;            /*!< bit:     10  Output Value                       */
    uint32_t P11:1;            /*!< bit:     11  Output Value                       */
    uint32_t P12:1;            /*!< bit:     12  Output Value                       */
    uint32_t P13:1;            /*!< bit:     13  Output Value                       */
    uint32_t P14:1;            /*!< bit:     14  Output Value                       */
    uint32_t P15:1;            /*!< bit:     15  Output Value                       */
    uint32_t P16:1;            /*!< bit:     16  Output Value                       */
    uint32_t P17:1;            /*!< bit:     17  Output Value                       */
    uint32_t P18:1;            /*!< bit:     18  Output Value                       */
    uint32_t P19:1;            /*!< bit:     19  Output Value                       */
    uint32_t P20:1;            /*!< bit:     20  Output Value                       */
    uint32_t P21:1;            /*!< bit:     21  Output Value                       */
    uint32_t P22:1;            /*!< bit:     22  Output Value                       */
    uint32_t P23:1;            /*!< bit:     23  Output Value                       */
    uint32_t P24:1;            /*!< bit:     24  Output Value                       */
    uint32_t P25:1;            /*!< bit:     25  Output Value                       */
    uint32_t P26:1;            /*!< bit:     26  Output Value                       */
    uint32_t P27:1;            /*!< bit:     27  Output Value                       */
    uint32_t P28:1;            /*!< bit:     28  Output Value                       */
    uint32_t P29:1;            /*!< bit:     29  Output Value                       */
    uint32_t P30:1;            /*!< bit:     30  Output Value                       */
    uint32_t P31:1;            /*!< bit:     31  Output Value                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OVRC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OVRC_OFFSET            0x058        /**< \brief (GPIO_OVRC offset) Output Value Register - Clear */

#define GPIO_OVRC_P0_Pos            0            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P0                (_U(0x1) << GPIO_OVRC_P0_Pos)
#define GPIO_OVRC_P1_Pos            1            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P1                (_U(0x1) << GPIO_OVRC_P1_Pos)
#define GPIO_OVRC_P2_Pos            2            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P2                (_U(0x1) << GPIO_OVRC_P2_Pos)
#define GPIO_OVRC_P3_Pos            3            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P3                (_U(0x1) << GPIO_OVRC_P3_Pos)
#define GPIO_OVRC_P4_Pos            4            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P4                (_U(0x1) << GPIO_OVRC_P4_Pos)
#define GPIO_OVRC_P5_Pos            5            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P5                (_U(0x1) << GPIO_OVRC_P5_Pos)
#define GPIO_OVRC_P6_Pos            6            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P6                (_U(0x1) << GPIO_OVRC_P6_Pos)
#define GPIO_OVRC_P7_Pos            7            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P7                (_U(0x1) << GPIO_OVRC_P7_Pos)
#define GPIO_OVRC_P8_Pos            8            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P8                (_U(0x1) << GPIO_OVRC_P8_Pos)
#define GPIO_OVRC_P9_Pos            9            /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P9                (_U(0x1) << GPIO_OVRC_P9_Pos)
#define GPIO_OVRC_P10_Pos           10           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P10               (_U(0x1) << GPIO_OVRC_P10_Pos)
#define GPIO_OVRC_P11_Pos           11           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P11               (_U(0x1) << GPIO_OVRC_P11_Pos)
#define GPIO_OVRC_P12_Pos           12           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P12               (_U(0x1) << GPIO_OVRC_P12_Pos)
#define GPIO_OVRC_P13_Pos           13           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P13               (_U(0x1) << GPIO_OVRC_P13_Pos)
#define GPIO_OVRC_P14_Pos           14           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P14               (_U(0x1) << GPIO_OVRC_P14_Pos)
#define GPIO_OVRC_P15_Pos           15           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P15               (_U(0x1) << GPIO_OVRC_P15_Pos)
#define GPIO_OVRC_P16_Pos           16           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P16               (_U(0x1) << GPIO_OVRC_P16_Pos)
#define GPIO_OVRC_P17_Pos           17           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P17               (_U(0x1) << GPIO_OVRC_P17_Pos)
#define GPIO_OVRC_P18_Pos           18           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P18               (_U(0x1) << GPIO_OVRC_P18_Pos)
#define GPIO_OVRC_P19_Pos           19           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P19               (_U(0x1) << GPIO_OVRC_P19_Pos)
#define GPIO_OVRC_P20_Pos           20           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P20               (_U(0x1) << GPIO_OVRC_P20_Pos)
#define GPIO_OVRC_P21_Pos           21           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P21               (_U(0x1) << GPIO_OVRC_P21_Pos)
#define GPIO_OVRC_P22_Pos           22           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P22               (_U(0x1) << GPIO_OVRC_P22_Pos)
#define GPIO_OVRC_P23_Pos           23           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P23               (_U(0x1) << GPIO_OVRC_P23_Pos)
#define GPIO_OVRC_P24_Pos           24           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P24               (_U(0x1) << GPIO_OVRC_P24_Pos)
#define GPIO_OVRC_P25_Pos           25           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P25               (_U(0x1) << GPIO_OVRC_P25_Pos)
#define GPIO_OVRC_P26_Pos           26           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P26               (_U(0x1) << GPIO_OVRC_P26_Pos)
#define GPIO_OVRC_P27_Pos           27           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P27               (_U(0x1) << GPIO_OVRC_P27_Pos)
#define GPIO_OVRC_P28_Pos           28           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P28               (_U(0x1) << GPIO_OVRC_P28_Pos)
#define GPIO_OVRC_P29_Pos           29           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P29               (_U(0x1) << GPIO_OVRC_P29_Pos)
#define GPIO_OVRC_P30_Pos           30           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P30               (_U(0x1) << GPIO_OVRC_P30_Pos)
#define GPIO_OVRC_P31_Pos           31           /**< \brief (GPIO_OVRC) Output Value */
#define GPIO_OVRC_P31               (_U(0x1) << GPIO_OVRC_P31_Pos)
#define GPIO_OVRC_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_OVRC) MASK Register */

/* -------- GPIO_OVRT : (GPIO Offset: 0x05C) ( /W 32) port Output Value Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Value                       */
    uint32_t P1:1;             /*!< bit:      1  Output Value                       */
    uint32_t P2:1;             /*!< bit:      2  Output Value                       */
    uint32_t P3:1;             /*!< bit:      3  Output Value                       */
    uint32_t P4:1;             /*!< bit:      4  Output Value                       */
    uint32_t P5:1;             /*!< bit:      5  Output Value                       */
    uint32_t P6:1;             /*!< bit:      6  Output Value                       */
    uint32_t P7:1;             /*!< bit:      7  Output Value                       */
    uint32_t P8:1;             /*!< bit:      8  Output Value                       */
    uint32_t P9:1;             /*!< bit:      9  Output Value                       */
    uint32_t P10:1;            /*!< bit:     10  Output Value                       */
    uint32_t P11:1;            /*!< bit:     11  Output Value                       */
    uint32_t P12:1;            /*!< bit:     12  Output Value                       */
    uint32_t P13:1;            /*!< bit:     13  Output Value                       */
    uint32_t P14:1;            /*!< bit:     14  Output Value                       */
    uint32_t P15:1;            /*!< bit:     15  Output Value                       */
    uint32_t P16:1;            /*!< bit:     16  Output Value                       */
    uint32_t P17:1;            /*!< bit:     17  Output Value                       */
    uint32_t P18:1;            /*!< bit:     18  Output Value                       */
    uint32_t P19:1;            /*!< bit:     19  Output Value                       */
    uint32_t P20:1;            /*!< bit:     20  Output Value                       */
    uint32_t P21:1;            /*!< bit:     21  Output Value                       */
    uint32_t P22:1;            /*!< bit:     22  Output Value                       */
    uint32_t P23:1;            /*!< bit:     23  Output Value                       */
    uint32_t P24:1;            /*!< bit:     24  Output Value                       */
    uint32_t P25:1;            /*!< bit:     25  Output Value                       */
    uint32_t P26:1;            /*!< bit:     26  Output Value                       */
    uint32_t P27:1;            /*!< bit:     27  Output Value                       */
    uint32_t P28:1;            /*!< bit:     28  Output Value                       */
    uint32_t P29:1;            /*!< bit:     29  Output Value                       */
    uint32_t P30:1;            /*!< bit:     30  Output Value                       */
    uint32_t P31:1;            /*!< bit:     31  Output Value                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OVRT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OVRT_OFFSET            0x05C        /**< \brief (GPIO_OVRT offset) Output Value Register - Toggle */

#define GPIO_OVRT_P0_Pos            0            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P0                (_U(0x1) << GPIO_OVRT_P0_Pos)
#define GPIO_OVRT_P1_Pos            1            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P1                (_U(0x1) << GPIO_OVRT_P1_Pos)
#define GPIO_OVRT_P2_Pos            2            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P2                (_U(0x1) << GPIO_OVRT_P2_Pos)
#define GPIO_OVRT_P3_Pos            3            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P3                (_U(0x1) << GPIO_OVRT_P3_Pos)
#define GPIO_OVRT_P4_Pos            4            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P4                (_U(0x1) << GPIO_OVRT_P4_Pos)
#define GPIO_OVRT_P5_Pos            5            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P5                (_U(0x1) << GPIO_OVRT_P5_Pos)
#define GPIO_OVRT_P6_Pos            6            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P6                (_U(0x1) << GPIO_OVRT_P6_Pos)
#define GPIO_OVRT_P7_Pos            7            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P7                (_U(0x1) << GPIO_OVRT_P7_Pos)
#define GPIO_OVRT_P8_Pos            8            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P8                (_U(0x1) << GPIO_OVRT_P8_Pos)
#define GPIO_OVRT_P9_Pos            9            /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P9                (_U(0x1) << GPIO_OVRT_P9_Pos)
#define GPIO_OVRT_P10_Pos           10           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P10               (_U(0x1) << GPIO_OVRT_P10_Pos)
#define GPIO_OVRT_P11_Pos           11           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P11               (_U(0x1) << GPIO_OVRT_P11_Pos)
#define GPIO_OVRT_P12_Pos           12           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P12               (_U(0x1) << GPIO_OVRT_P12_Pos)
#define GPIO_OVRT_P13_Pos           13           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P13               (_U(0x1) << GPIO_OVRT_P13_Pos)
#define GPIO_OVRT_P14_Pos           14           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P14               (_U(0x1) << GPIO_OVRT_P14_Pos)
#define GPIO_OVRT_P15_Pos           15           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P15               (_U(0x1) << GPIO_OVRT_P15_Pos)
#define GPIO_OVRT_P16_Pos           16           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P16               (_U(0x1) << GPIO_OVRT_P16_Pos)
#define GPIO_OVRT_P17_Pos           17           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P17               (_U(0x1) << GPIO_OVRT_P17_Pos)
#define GPIO_OVRT_P18_Pos           18           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P18               (_U(0x1) << GPIO_OVRT_P18_Pos)
#define GPIO_OVRT_P19_Pos           19           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P19               (_U(0x1) << GPIO_OVRT_P19_Pos)
#define GPIO_OVRT_P20_Pos           20           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P20               (_U(0x1) << GPIO_OVRT_P20_Pos)
#define GPIO_OVRT_P21_Pos           21           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P21               (_U(0x1) << GPIO_OVRT_P21_Pos)
#define GPIO_OVRT_P22_Pos           22           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P22               (_U(0x1) << GPIO_OVRT_P22_Pos)
#define GPIO_OVRT_P23_Pos           23           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P23               (_U(0x1) << GPIO_OVRT_P23_Pos)
#define GPIO_OVRT_P24_Pos           24           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P24               (_U(0x1) << GPIO_OVRT_P24_Pos)
#define GPIO_OVRT_P25_Pos           25           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P25               (_U(0x1) << GPIO_OVRT_P25_Pos)
#define GPIO_OVRT_P26_Pos           26           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P26               (_U(0x1) << GPIO_OVRT_P26_Pos)
#define GPIO_OVRT_P27_Pos           27           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P27               (_U(0x1) << GPIO_OVRT_P27_Pos)
#define GPIO_OVRT_P28_Pos           28           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P28               (_U(0x1) << GPIO_OVRT_P28_Pos)
#define GPIO_OVRT_P29_Pos           29           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P29               (_U(0x1) << GPIO_OVRT_P29_Pos)
#define GPIO_OVRT_P30_Pos           30           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P30               (_U(0x1) << GPIO_OVRT_P30_Pos)
#define GPIO_OVRT_P31_Pos           31           /**< \brief (GPIO_OVRT) Output Value */
#define GPIO_OVRT_P31               (_U(0x1) << GPIO_OVRT_P31_Pos)
#define GPIO_OVRT_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_OVRT) MASK Register */

/* -------- GPIO_PVR : (GPIO Offset: 0x060) (R/  32) port Pin Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pin Value                          */
    uint32_t P1:1;             /*!< bit:      1  Pin Value                          */
    uint32_t P2:1;             /*!< bit:      2  Pin Value                          */
    uint32_t P3:1;             /*!< bit:      3  Pin Value                          */
    uint32_t P4:1;             /*!< bit:      4  Pin Value                          */
    uint32_t P5:1;             /*!< bit:      5  Pin Value                          */
    uint32_t P6:1;             /*!< bit:      6  Pin Value                          */
    uint32_t P7:1;             /*!< bit:      7  Pin Value                          */
    uint32_t P8:1;             /*!< bit:      8  Pin Value                          */
    uint32_t P9:1;             /*!< bit:      9  Pin Value                          */
    uint32_t P10:1;            /*!< bit:     10  Pin Value                          */
    uint32_t P11:1;            /*!< bit:     11  Pin Value                          */
    uint32_t P12:1;            /*!< bit:     12  Pin Value                          */
    uint32_t P13:1;            /*!< bit:     13  Pin Value                          */
    uint32_t P14:1;            /*!< bit:     14  Pin Value                          */
    uint32_t P15:1;            /*!< bit:     15  Pin Value                          */
    uint32_t P16:1;            /*!< bit:     16  Pin Value                          */
    uint32_t P17:1;            /*!< bit:     17  Pin Value                          */
    uint32_t P18:1;            /*!< bit:     18  Pin Value                          */
    uint32_t P19:1;            /*!< bit:     19  Pin Value                          */
    uint32_t P20:1;            /*!< bit:     20  Pin Value                          */
    uint32_t P21:1;            /*!< bit:     21  Pin Value                          */
    uint32_t P22:1;            /*!< bit:     22  Pin Value                          */
    uint32_t P23:1;            /*!< bit:     23  Pin Value                          */
    uint32_t P24:1;            /*!< bit:     24  Pin Value                          */
    uint32_t P25:1;            /*!< bit:     25  Pin Value                          */
    uint32_t P26:1;            /*!< bit:     26  Pin Value                          */
    uint32_t P27:1;            /*!< bit:     27  Pin Value                          */
    uint32_t P28:1;            /*!< bit:     28  Pin Value                          */
    uint32_t P29:1;            /*!< bit:     29  Pin Value                          */
    uint32_t P30:1;            /*!< bit:     30  Pin Value                          */
    uint32_t P31:1;            /*!< bit:     31  Pin Value                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PVR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PVR_OFFSET             0x060        /**< \brief (GPIO_PVR offset) Pin Value Register */

#define GPIO_PVR_P0_Pos             0            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P0                 (_U(0x1) << GPIO_PVR_P0_Pos)
#define GPIO_PVR_P1_Pos             1            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P1                 (_U(0x1) << GPIO_PVR_P1_Pos)
#define GPIO_PVR_P2_Pos             2            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P2                 (_U(0x1) << GPIO_PVR_P2_Pos)
#define GPIO_PVR_P3_Pos             3            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P3                 (_U(0x1) << GPIO_PVR_P3_Pos)
#define GPIO_PVR_P4_Pos             4            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P4                 (_U(0x1) << GPIO_PVR_P4_Pos)
#define GPIO_PVR_P5_Pos             5            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P5                 (_U(0x1) << GPIO_PVR_P5_Pos)
#define GPIO_PVR_P6_Pos             6            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P6                 (_U(0x1) << GPIO_PVR_P6_Pos)
#define GPIO_PVR_P7_Pos             7            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P7                 (_U(0x1) << GPIO_PVR_P7_Pos)
#define GPIO_PVR_P8_Pos             8            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P8                 (_U(0x1) << GPIO_PVR_P8_Pos)
#define GPIO_PVR_P9_Pos             9            /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P9                 (_U(0x1) << GPIO_PVR_P9_Pos)
#define GPIO_PVR_P10_Pos            10           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P10                (_U(0x1) << GPIO_PVR_P10_Pos)
#define GPIO_PVR_P11_Pos            11           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P11                (_U(0x1) << GPIO_PVR_P11_Pos)
#define GPIO_PVR_P12_Pos            12           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P12                (_U(0x1) << GPIO_PVR_P12_Pos)
#define GPIO_PVR_P13_Pos            13           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P13                (_U(0x1) << GPIO_PVR_P13_Pos)
#define GPIO_PVR_P14_Pos            14           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P14                (_U(0x1) << GPIO_PVR_P14_Pos)
#define GPIO_PVR_P15_Pos            15           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P15                (_U(0x1) << GPIO_PVR_P15_Pos)
#define GPIO_PVR_P16_Pos            16           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P16                (_U(0x1) << GPIO_PVR_P16_Pos)
#define GPIO_PVR_P17_Pos            17           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P17                (_U(0x1) << GPIO_PVR_P17_Pos)
#define GPIO_PVR_P18_Pos            18           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P18                (_U(0x1) << GPIO_PVR_P18_Pos)
#define GPIO_PVR_P19_Pos            19           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P19                (_U(0x1) << GPIO_PVR_P19_Pos)
#define GPIO_PVR_P20_Pos            20           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P20                (_U(0x1) << GPIO_PVR_P20_Pos)
#define GPIO_PVR_P21_Pos            21           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P21                (_U(0x1) << GPIO_PVR_P21_Pos)
#define GPIO_PVR_P22_Pos            22           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P22                (_U(0x1) << GPIO_PVR_P22_Pos)
#define GPIO_PVR_P23_Pos            23           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P23                (_U(0x1) << GPIO_PVR_P23_Pos)
#define GPIO_PVR_P24_Pos            24           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P24                (_U(0x1) << GPIO_PVR_P24_Pos)
#define GPIO_PVR_P25_Pos            25           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P25                (_U(0x1) << GPIO_PVR_P25_Pos)
#define GPIO_PVR_P26_Pos            26           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P26                (_U(0x1) << GPIO_PVR_P26_Pos)
#define GPIO_PVR_P27_Pos            27           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P27                (_U(0x1) << GPIO_PVR_P27_Pos)
#define GPIO_PVR_P28_Pos            28           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P28                (_U(0x1) << GPIO_PVR_P28_Pos)
#define GPIO_PVR_P29_Pos            29           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P29                (_U(0x1) << GPIO_PVR_P29_Pos)
#define GPIO_PVR_P30_Pos            30           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P30                (_U(0x1) << GPIO_PVR_P30_Pos)
#define GPIO_PVR_P31_Pos            31           /**< \brief (GPIO_PVR) Pin Value */
#define GPIO_PVR_P31                (_U(0x1) << GPIO_PVR_P31_Pos)
#define GPIO_PVR_MASK               _U(0xFFFFFFFF) /**< \brief (GPIO_PVR) MASK Register */

/* -------- GPIO_PUER : (GPIO Offset: 0x070) (R/W 32) port Pull-up Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-up Enable                     */
    uint32_t P1:1;             /*!< bit:      1  Pull-up Enable                     */
    uint32_t P2:1;             /*!< bit:      2  Pull-up Enable                     */
    uint32_t P3:1;             /*!< bit:      3  Pull-up Enable                     */
    uint32_t P4:1;             /*!< bit:      4  Pull-up Enable                     */
    uint32_t P5:1;             /*!< bit:      5  Pull-up Enable                     */
    uint32_t P6:1;             /*!< bit:      6  Pull-up Enable                     */
    uint32_t P7:1;             /*!< bit:      7  Pull-up Enable                     */
    uint32_t P8:1;             /*!< bit:      8  Pull-up Enable                     */
    uint32_t P9:1;             /*!< bit:      9  Pull-up Enable                     */
    uint32_t P10:1;            /*!< bit:     10  Pull-up Enable                     */
    uint32_t P11:1;            /*!< bit:     11  Pull-up Enable                     */
    uint32_t P12:1;            /*!< bit:     12  Pull-up Enable                     */
    uint32_t P13:1;            /*!< bit:     13  Pull-up Enable                     */
    uint32_t P14:1;            /*!< bit:     14  Pull-up Enable                     */
    uint32_t P15:1;            /*!< bit:     15  Pull-up Enable                     */
    uint32_t P16:1;            /*!< bit:     16  Pull-up Enable                     */
    uint32_t P17:1;            /*!< bit:     17  Pull-up Enable                     */
    uint32_t P18:1;            /*!< bit:     18  Pull-up Enable                     */
    uint32_t P19:1;            /*!< bit:     19  Pull-up Enable                     */
    uint32_t P20:1;            /*!< bit:     20  Pull-up Enable                     */
    uint32_t P21:1;            /*!< bit:     21  Pull-up Enable                     */
    uint32_t P22:1;            /*!< bit:     22  Pull-up Enable                     */
    uint32_t P23:1;            /*!< bit:     23  Pull-up Enable                     */
    uint32_t P24:1;            /*!< bit:     24  Pull-up Enable                     */
    uint32_t P25:1;            /*!< bit:     25  Pull-up Enable                     */
    uint32_t P26:1;            /*!< bit:     26  Pull-up Enable                     */
    uint32_t P27:1;            /*!< bit:     27  Pull-up Enable                     */
    uint32_t P28:1;            /*!< bit:     28  Pull-up Enable                     */
    uint32_t P29:1;            /*!< bit:     29  Pull-up Enable                     */
    uint32_t P30:1;            /*!< bit:     30  Pull-up Enable                     */
    uint32_t P31:1;            /*!< bit:     31  Pull-up Enable                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PUER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PUER_OFFSET            0x070        /**< \brief (GPIO_PUER offset) Pull-up Enable Register */

#define GPIO_PUER_P0_Pos            0            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P0                (_U(0x1) << GPIO_PUER_P0_Pos)
#define GPIO_PUER_P1_Pos            1            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P1                (_U(0x1) << GPIO_PUER_P1_Pos)
#define GPIO_PUER_P2_Pos            2            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P2                (_U(0x1) << GPIO_PUER_P2_Pos)
#define GPIO_PUER_P3_Pos            3            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P3                (_U(0x1) << GPIO_PUER_P3_Pos)
#define GPIO_PUER_P4_Pos            4            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P4                (_U(0x1) << GPIO_PUER_P4_Pos)
#define GPIO_PUER_P5_Pos            5            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P5                (_U(0x1) << GPIO_PUER_P5_Pos)
#define GPIO_PUER_P6_Pos            6            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P6                (_U(0x1) << GPIO_PUER_P6_Pos)
#define GPIO_PUER_P7_Pos            7            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P7                (_U(0x1) << GPIO_PUER_P7_Pos)
#define GPIO_PUER_P8_Pos            8            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P8                (_U(0x1) << GPIO_PUER_P8_Pos)
#define GPIO_PUER_P9_Pos            9            /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P9                (_U(0x1) << GPIO_PUER_P9_Pos)
#define GPIO_PUER_P10_Pos           10           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P10               (_U(0x1) << GPIO_PUER_P10_Pos)
#define GPIO_PUER_P11_Pos           11           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P11               (_U(0x1) << GPIO_PUER_P11_Pos)
#define GPIO_PUER_P12_Pos           12           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P12               (_U(0x1) << GPIO_PUER_P12_Pos)
#define GPIO_PUER_P13_Pos           13           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P13               (_U(0x1) << GPIO_PUER_P13_Pos)
#define GPIO_PUER_P14_Pos           14           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P14               (_U(0x1) << GPIO_PUER_P14_Pos)
#define GPIO_PUER_P15_Pos           15           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P15               (_U(0x1) << GPIO_PUER_P15_Pos)
#define GPIO_PUER_P16_Pos           16           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P16               (_U(0x1) << GPIO_PUER_P16_Pos)
#define GPIO_PUER_P17_Pos           17           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P17               (_U(0x1) << GPIO_PUER_P17_Pos)
#define GPIO_PUER_P18_Pos           18           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P18               (_U(0x1) << GPIO_PUER_P18_Pos)
#define GPIO_PUER_P19_Pos           19           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P19               (_U(0x1) << GPIO_PUER_P19_Pos)
#define GPIO_PUER_P20_Pos           20           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P20               (_U(0x1) << GPIO_PUER_P20_Pos)
#define GPIO_PUER_P21_Pos           21           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P21               (_U(0x1) << GPIO_PUER_P21_Pos)
#define GPIO_PUER_P22_Pos           22           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P22               (_U(0x1) << GPIO_PUER_P22_Pos)
#define GPIO_PUER_P23_Pos           23           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P23               (_U(0x1) << GPIO_PUER_P23_Pos)
#define GPIO_PUER_P24_Pos           24           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P24               (_U(0x1) << GPIO_PUER_P24_Pos)
#define GPIO_PUER_P25_Pos           25           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P25               (_U(0x1) << GPIO_PUER_P25_Pos)
#define GPIO_PUER_P26_Pos           26           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P26               (_U(0x1) << GPIO_PUER_P26_Pos)
#define GPIO_PUER_P27_Pos           27           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P27               (_U(0x1) << GPIO_PUER_P27_Pos)
#define GPIO_PUER_P28_Pos           28           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P28               (_U(0x1) << GPIO_PUER_P28_Pos)
#define GPIO_PUER_P29_Pos           29           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P29               (_U(0x1) << GPIO_PUER_P29_Pos)
#define GPIO_PUER_P30_Pos           30           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P30               (_U(0x1) << GPIO_PUER_P30_Pos)
#define GPIO_PUER_P31_Pos           31           /**< \brief (GPIO_PUER) Pull-up Enable */
#define GPIO_PUER_P31               (_U(0x1) << GPIO_PUER_P31_Pos)
#define GPIO_PUER_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_PUER) MASK Register */

/* -------- GPIO_PUERS : (GPIO Offset: 0x074) ( /W 32) port Pull-up Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-up Enable                     */
    uint32_t P1:1;             /*!< bit:      1  Pull-up Enable                     */
    uint32_t P2:1;             /*!< bit:      2  Pull-up Enable                     */
    uint32_t P3:1;             /*!< bit:      3  Pull-up Enable                     */
    uint32_t P4:1;             /*!< bit:      4  Pull-up Enable                     */
    uint32_t P5:1;             /*!< bit:      5  Pull-up Enable                     */
    uint32_t P6:1;             /*!< bit:      6  Pull-up Enable                     */
    uint32_t P7:1;             /*!< bit:      7  Pull-up Enable                     */
    uint32_t P8:1;             /*!< bit:      8  Pull-up Enable                     */
    uint32_t P9:1;             /*!< bit:      9  Pull-up Enable                     */
    uint32_t P10:1;            /*!< bit:     10  Pull-up Enable                     */
    uint32_t P11:1;            /*!< bit:     11  Pull-up Enable                     */
    uint32_t P12:1;            /*!< bit:     12  Pull-up Enable                     */
    uint32_t P13:1;            /*!< bit:     13  Pull-up Enable                     */
    uint32_t P14:1;            /*!< bit:     14  Pull-up Enable                     */
    uint32_t P15:1;            /*!< bit:     15  Pull-up Enable                     */
    uint32_t P16:1;            /*!< bit:     16  Pull-up Enable                     */
    uint32_t P17:1;            /*!< bit:     17  Pull-up Enable                     */
    uint32_t P18:1;            /*!< bit:     18  Pull-up Enable                     */
    uint32_t P19:1;            /*!< bit:     19  Pull-up Enable                     */
    uint32_t P20:1;            /*!< bit:     20  Pull-up Enable                     */
    uint32_t P21:1;            /*!< bit:     21  Pull-up Enable                     */
    uint32_t P22:1;            /*!< bit:     22  Pull-up Enable                     */
    uint32_t P23:1;            /*!< bit:     23  Pull-up Enable                     */
    uint32_t P24:1;            /*!< bit:     24  Pull-up Enable                     */
    uint32_t P25:1;            /*!< bit:     25  Pull-up Enable                     */
    uint32_t P26:1;            /*!< bit:     26  Pull-up Enable                     */
    uint32_t P27:1;            /*!< bit:     27  Pull-up Enable                     */
    uint32_t P28:1;            /*!< bit:     28  Pull-up Enable                     */
    uint32_t P29:1;            /*!< bit:     29  Pull-up Enable                     */
    uint32_t P30:1;            /*!< bit:     30  Pull-up Enable                     */
    uint32_t P31:1;            /*!< bit:     31  Pull-up Enable                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PUERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PUERS_OFFSET           0x074        /**< \brief (GPIO_PUERS offset) Pull-up Enable Register - Set */

#define GPIO_PUERS_P0_Pos           0            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P0               (_U(0x1) << GPIO_PUERS_P0_Pos)
#define GPIO_PUERS_P1_Pos           1            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P1               (_U(0x1) << GPIO_PUERS_P1_Pos)
#define GPIO_PUERS_P2_Pos           2            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P2               (_U(0x1) << GPIO_PUERS_P2_Pos)
#define GPIO_PUERS_P3_Pos           3            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P3               (_U(0x1) << GPIO_PUERS_P3_Pos)
#define GPIO_PUERS_P4_Pos           4            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P4               (_U(0x1) << GPIO_PUERS_P4_Pos)
#define GPIO_PUERS_P5_Pos           5            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P5               (_U(0x1) << GPIO_PUERS_P5_Pos)
#define GPIO_PUERS_P6_Pos           6            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P6               (_U(0x1) << GPIO_PUERS_P6_Pos)
#define GPIO_PUERS_P7_Pos           7            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P7               (_U(0x1) << GPIO_PUERS_P7_Pos)
#define GPIO_PUERS_P8_Pos           8            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P8               (_U(0x1) << GPIO_PUERS_P8_Pos)
#define GPIO_PUERS_P9_Pos           9            /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P9               (_U(0x1) << GPIO_PUERS_P9_Pos)
#define GPIO_PUERS_P10_Pos          10           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P10              (_U(0x1) << GPIO_PUERS_P10_Pos)
#define GPIO_PUERS_P11_Pos          11           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P11              (_U(0x1) << GPIO_PUERS_P11_Pos)
#define GPIO_PUERS_P12_Pos          12           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P12              (_U(0x1) << GPIO_PUERS_P12_Pos)
#define GPIO_PUERS_P13_Pos          13           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P13              (_U(0x1) << GPIO_PUERS_P13_Pos)
#define GPIO_PUERS_P14_Pos          14           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P14              (_U(0x1) << GPIO_PUERS_P14_Pos)
#define GPIO_PUERS_P15_Pos          15           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P15              (_U(0x1) << GPIO_PUERS_P15_Pos)
#define GPIO_PUERS_P16_Pos          16           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P16              (_U(0x1) << GPIO_PUERS_P16_Pos)
#define GPIO_PUERS_P17_Pos          17           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P17              (_U(0x1) << GPIO_PUERS_P17_Pos)
#define GPIO_PUERS_P18_Pos          18           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P18              (_U(0x1) << GPIO_PUERS_P18_Pos)
#define GPIO_PUERS_P19_Pos          19           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P19              (_U(0x1) << GPIO_PUERS_P19_Pos)
#define GPIO_PUERS_P20_Pos          20           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P20              (_U(0x1) << GPIO_PUERS_P20_Pos)
#define GPIO_PUERS_P21_Pos          21           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P21              (_U(0x1) << GPIO_PUERS_P21_Pos)
#define GPIO_PUERS_P22_Pos          22           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P22              (_U(0x1) << GPIO_PUERS_P22_Pos)
#define GPIO_PUERS_P23_Pos          23           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P23              (_U(0x1) << GPIO_PUERS_P23_Pos)
#define GPIO_PUERS_P24_Pos          24           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P24              (_U(0x1) << GPIO_PUERS_P24_Pos)
#define GPIO_PUERS_P25_Pos          25           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P25              (_U(0x1) << GPIO_PUERS_P25_Pos)
#define GPIO_PUERS_P26_Pos          26           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P26              (_U(0x1) << GPIO_PUERS_P26_Pos)
#define GPIO_PUERS_P27_Pos          27           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P27              (_U(0x1) << GPIO_PUERS_P27_Pos)
#define GPIO_PUERS_P28_Pos          28           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P28              (_U(0x1) << GPIO_PUERS_P28_Pos)
#define GPIO_PUERS_P29_Pos          29           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P29              (_U(0x1) << GPIO_PUERS_P29_Pos)
#define GPIO_PUERS_P30_Pos          30           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P30              (_U(0x1) << GPIO_PUERS_P30_Pos)
#define GPIO_PUERS_P31_Pos          31           /**< \brief (GPIO_PUERS) Pull-up Enable */
#define GPIO_PUERS_P31              (_U(0x1) << GPIO_PUERS_P31_Pos)
#define GPIO_PUERS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PUERS) MASK Register */

/* -------- GPIO_PUERC : (GPIO Offset: 0x078) ( /W 32) port Pull-up Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-up Enable                     */
    uint32_t P1:1;             /*!< bit:      1  Pull-up Enable                     */
    uint32_t P2:1;             /*!< bit:      2  Pull-up Enable                     */
    uint32_t P3:1;             /*!< bit:      3  Pull-up Enable                     */
    uint32_t P4:1;             /*!< bit:      4  Pull-up Enable                     */
    uint32_t P5:1;             /*!< bit:      5  Pull-up Enable                     */
    uint32_t P6:1;             /*!< bit:      6  Pull-up Enable                     */
    uint32_t P7:1;             /*!< bit:      7  Pull-up Enable                     */
    uint32_t P8:1;             /*!< bit:      8  Pull-up Enable                     */
    uint32_t P9:1;             /*!< bit:      9  Pull-up Enable                     */
    uint32_t P10:1;            /*!< bit:     10  Pull-up Enable                     */
    uint32_t P11:1;            /*!< bit:     11  Pull-up Enable                     */
    uint32_t P12:1;            /*!< bit:     12  Pull-up Enable                     */
    uint32_t P13:1;            /*!< bit:     13  Pull-up Enable                     */
    uint32_t P14:1;            /*!< bit:     14  Pull-up Enable                     */
    uint32_t P15:1;            /*!< bit:     15  Pull-up Enable                     */
    uint32_t P16:1;            /*!< bit:     16  Pull-up Enable                     */
    uint32_t P17:1;            /*!< bit:     17  Pull-up Enable                     */
    uint32_t P18:1;            /*!< bit:     18  Pull-up Enable                     */
    uint32_t P19:1;            /*!< bit:     19  Pull-up Enable                     */
    uint32_t P20:1;            /*!< bit:     20  Pull-up Enable                     */
    uint32_t P21:1;            /*!< bit:     21  Pull-up Enable                     */
    uint32_t P22:1;            /*!< bit:     22  Pull-up Enable                     */
    uint32_t P23:1;            /*!< bit:     23  Pull-up Enable                     */
    uint32_t P24:1;            /*!< bit:     24  Pull-up Enable                     */
    uint32_t P25:1;            /*!< bit:     25  Pull-up Enable                     */
    uint32_t P26:1;            /*!< bit:     26  Pull-up Enable                     */
    uint32_t P27:1;            /*!< bit:     27  Pull-up Enable                     */
    uint32_t P28:1;            /*!< bit:     28  Pull-up Enable                     */
    uint32_t P29:1;            /*!< bit:     29  Pull-up Enable                     */
    uint32_t P30:1;            /*!< bit:     30  Pull-up Enable                     */
    uint32_t P31:1;            /*!< bit:     31  Pull-up Enable                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PUERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PUERC_OFFSET           0x078        /**< \brief (GPIO_PUERC offset) Pull-up Enable Register - Clear */

#define GPIO_PUERC_P0_Pos           0            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P0               (_U(0x1) << GPIO_PUERC_P0_Pos)
#define GPIO_PUERC_P1_Pos           1            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P1               (_U(0x1) << GPIO_PUERC_P1_Pos)
#define GPIO_PUERC_P2_Pos           2            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P2               (_U(0x1) << GPIO_PUERC_P2_Pos)
#define GPIO_PUERC_P3_Pos           3            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P3               (_U(0x1) << GPIO_PUERC_P3_Pos)
#define GPIO_PUERC_P4_Pos           4            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P4               (_U(0x1) << GPIO_PUERC_P4_Pos)
#define GPIO_PUERC_P5_Pos           5            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P5               (_U(0x1) << GPIO_PUERC_P5_Pos)
#define GPIO_PUERC_P6_Pos           6            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P6               (_U(0x1) << GPIO_PUERC_P6_Pos)
#define GPIO_PUERC_P7_Pos           7            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P7               (_U(0x1) << GPIO_PUERC_P7_Pos)
#define GPIO_PUERC_P8_Pos           8            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P8               (_U(0x1) << GPIO_PUERC_P8_Pos)
#define GPIO_PUERC_P9_Pos           9            /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P9               (_U(0x1) << GPIO_PUERC_P9_Pos)
#define GPIO_PUERC_P10_Pos          10           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P10              (_U(0x1) << GPIO_PUERC_P10_Pos)
#define GPIO_PUERC_P11_Pos          11           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P11              (_U(0x1) << GPIO_PUERC_P11_Pos)
#define GPIO_PUERC_P12_Pos          12           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P12              (_U(0x1) << GPIO_PUERC_P12_Pos)
#define GPIO_PUERC_P13_Pos          13           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P13              (_U(0x1) << GPIO_PUERC_P13_Pos)
#define GPIO_PUERC_P14_Pos          14           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P14              (_U(0x1) << GPIO_PUERC_P14_Pos)
#define GPIO_PUERC_P15_Pos          15           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P15              (_U(0x1) << GPIO_PUERC_P15_Pos)
#define GPIO_PUERC_P16_Pos          16           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P16              (_U(0x1) << GPIO_PUERC_P16_Pos)
#define GPIO_PUERC_P17_Pos          17           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P17              (_U(0x1) << GPIO_PUERC_P17_Pos)
#define GPIO_PUERC_P18_Pos          18           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P18              (_U(0x1) << GPIO_PUERC_P18_Pos)
#define GPIO_PUERC_P19_Pos          19           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P19              (_U(0x1) << GPIO_PUERC_P19_Pos)
#define GPIO_PUERC_P20_Pos          20           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P20              (_U(0x1) << GPIO_PUERC_P20_Pos)
#define GPIO_PUERC_P21_Pos          21           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P21              (_U(0x1) << GPIO_PUERC_P21_Pos)
#define GPIO_PUERC_P22_Pos          22           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P22              (_U(0x1) << GPIO_PUERC_P22_Pos)
#define GPIO_PUERC_P23_Pos          23           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P23              (_U(0x1) << GPIO_PUERC_P23_Pos)
#define GPIO_PUERC_P24_Pos          24           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P24              (_U(0x1) << GPIO_PUERC_P24_Pos)
#define GPIO_PUERC_P25_Pos          25           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P25              (_U(0x1) << GPIO_PUERC_P25_Pos)
#define GPIO_PUERC_P26_Pos          26           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P26              (_U(0x1) << GPIO_PUERC_P26_Pos)
#define GPIO_PUERC_P27_Pos          27           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P27              (_U(0x1) << GPIO_PUERC_P27_Pos)
#define GPIO_PUERC_P28_Pos          28           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P28              (_U(0x1) << GPIO_PUERC_P28_Pos)
#define GPIO_PUERC_P29_Pos          29           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P29              (_U(0x1) << GPIO_PUERC_P29_Pos)
#define GPIO_PUERC_P30_Pos          30           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P30              (_U(0x1) << GPIO_PUERC_P30_Pos)
#define GPIO_PUERC_P31_Pos          31           /**< \brief (GPIO_PUERC) Pull-up Enable */
#define GPIO_PUERC_P31              (_U(0x1) << GPIO_PUERC_P31_Pos)
#define GPIO_PUERC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PUERC) MASK Register */

/* -------- GPIO_PUERT : (GPIO Offset: 0x07C) ( /W 32) port Pull-up Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-up Enable                     */
    uint32_t P1:1;             /*!< bit:      1  Pull-up Enable                     */
    uint32_t P2:1;             /*!< bit:      2  Pull-up Enable                     */
    uint32_t P3:1;             /*!< bit:      3  Pull-up Enable                     */
    uint32_t P4:1;             /*!< bit:      4  Pull-up Enable                     */
    uint32_t P5:1;             /*!< bit:      5  Pull-up Enable                     */
    uint32_t P6:1;             /*!< bit:      6  Pull-up Enable                     */
    uint32_t P7:1;             /*!< bit:      7  Pull-up Enable                     */
    uint32_t P8:1;             /*!< bit:      8  Pull-up Enable                     */
    uint32_t P9:1;             /*!< bit:      9  Pull-up Enable                     */
    uint32_t P10:1;            /*!< bit:     10  Pull-up Enable                     */
    uint32_t P11:1;            /*!< bit:     11  Pull-up Enable                     */
    uint32_t P12:1;            /*!< bit:     12  Pull-up Enable                     */
    uint32_t P13:1;            /*!< bit:     13  Pull-up Enable                     */
    uint32_t P14:1;            /*!< bit:     14  Pull-up Enable                     */
    uint32_t P15:1;            /*!< bit:     15  Pull-up Enable                     */
    uint32_t P16:1;            /*!< bit:     16  Pull-up Enable                     */
    uint32_t P17:1;            /*!< bit:     17  Pull-up Enable                     */
    uint32_t P18:1;            /*!< bit:     18  Pull-up Enable                     */
    uint32_t P19:1;            /*!< bit:     19  Pull-up Enable                     */
    uint32_t P20:1;            /*!< bit:     20  Pull-up Enable                     */
    uint32_t P21:1;            /*!< bit:     21  Pull-up Enable                     */
    uint32_t P22:1;            /*!< bit:     22  Pull-up Enable                     */
    uint32_t P23:1;            /*!< bit:     23  Pull-up Enable                     */
    uint32_t P24:1;            /*!< bit:     24  Pull-up Enable                     */
    uint32_t P25:1;            /*!< bit:     25  Pull-up Enable                     */
    uint32_t P26:1;            /*!< bit:     26  Pull-up Enable                     */
    uint32_t P27:1;            /*!< bit:     27  Pull-up Enable                     */
    uint32_t P28:1;            /*!< bit:     28  Pull-up Enable                     */
    uint32_t P29:1;            /*!< bit:     29  Pull-up Enable                     */
    uint32_t P30:1;            /*!< bit:     30  Pull-up Enable                     */
    uint32_t P31:1;            /*!< bit:     31  Pull-up Enable                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PUERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PUERT_OFFSET           0x07C        /**< \brief (GPIO_PUERT offset) Pull-up Enable Register - Toggle */

#define GPIO_PUERT_P0_Pos           0            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P0               (_U(0x1) << GPIO_PUERT_P0_Pos)
#define GPIO_PUERT_P1_Pos           1            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P1               (_U(0x1) << GPIO_PUERT_P1_Pos)
#define GPIO_PUERT_P2_Pos           2            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P2               (_U(0x1) << GPIO_PUERT_P2_Pos)
#define GPIO_PUERT_P3_Pos           3            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P3               (_U(0x1) << GPIO_PUERT_P3_Pos)
#define GPIO_PUERT_P4_Pos           4            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P4               (_U(0x1) << GPIO_PUERT_P4_Pos)
#define GPIO_PUERT_P5_Pos           5            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P5               (_U(0x1) << GPIO_PUERT_P5_Pos)
#define GPIO_PUERT_P6_Pos           6            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P6               (_U(0x1) << GPIO_PUERT_P6_Pos)
#define GPIO_PUERT_P7_Pos           7            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P7               (_U(0x1) << GPIO_PUERT_P7_Pos)
#define GPIO_PUERT_P8_Pos           8            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P8               (_U(0x1) << GPIO_PUERT_P8_Pos)
#define GPIO_PUERT_P9_Pos           9            /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P9               (_U(0x1) << GPIO_PUERT_P9_Pos)
#define GPIO_PUERT_P10_Pos          10           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P10              (_U(0x1) << GPIO_PUERT_P10_Pos)
#define GPIO_PUERT_P11_Pos          11           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P11              (_U(0x1) << GPIO_PUERT_P11_Pos)
#define GPIO_PUERT_P12_Pos          12           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P12              (_U(0x1) << GPIO_PUERT_P12_Pos)
#define GPIO_PUERT_P13_Pos          13           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P13              (_U(0x1) << GPIO_PUERT_P13_Pos)
#define GPIO_PUERT_P14_Pos          14           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P14              (_U(0x1) << GPIO_PUERT_P14_Pos)
#define GPIO_PUERT_P15_Pos          15           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P15              (_U(0x1) << GPIO_PUERT_P15_Pos)
#define GPIO_PUERT_P16_Pos          16           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P16              (_U(0x1) << GPIO_PUERT_P16_Pos)
#define GPIO_PUERT_P17_Pos          17           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P17              (_U(0x1) << GPIO_PUERT_P17_Pos)
#define GPIO_PUERT_P18_Pos          18           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P18              (_U(0x1) << GPIO_PUERT_P18_Pos)
#define GPIO_PUERT_P19_Pos          19           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P19              (_U(0x1) << GPIO_PUERT_P19_Pos)
#define GPIO_PUERT_P20_Pos          20           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P20              (_U(0x1) << GPIO_PUERT_P20_Pos)
#define GPIO_PUERT_P21_Pos          21           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P21              (_U(0x1) << GPIO_PUERT_P21_Pos)
#define GPIO_PUERT_P22_Pos          22           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P22              (_U(0x1) << GPIO_PUERT_P22_Pos)
#define GPIO_PUERT_P23_Pos          23           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P23              (_U(0x1) << GPIO_PUERT_P23_Pos)
#define GPIO_PUERT_P24_Pos          24           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P24              (_U(0x1) << GPIO_PUERT_P24_Pos)
#define GPIO_PUERT_P25_Pos          25           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P25              (_U(0x1) << GPIO_PUERT_P25_Pos)
#define GPIO_PUERT_P26_Pos          26           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P26              (_U(0x1) << GPIO_PUERT_P26_Pos)
#define GPIO_PUERT_P27_Pos          27           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P27              (_U(0x1) << GPIO_PUERT_P27_Pos)
#define GPIO_PUERT_P28_Pos          28           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P28              (_U(0x1) << GPIO_PUERT_P28_Pos)
#define GPIO_PUERT_P29_Pos          29           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P29              (_U(0x1) << GPIO_PUERT_P29_Pos)
#define GPIO_PUERT_P30_Pos          30           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P30              (_U(0x1) << GPIO_PUERT_P30_Pos)
#define GPIO_PUERT_P31_Pos          31           /**< \brief (GPIO_PUERT) Pull-up Enable */
#define GPIO_PUERT_P31              (_U(0x1) << GPIO_PUERT_P31_Pos)
#define GPIO_PUERT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PUERT) MASK Register */

/* -------- GPIO_PDER : (GPIO Offset: 0x080) (R/W 32) port Pull-down Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-down Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Pull-down Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Pull-down Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Pull-down Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Pull-down Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Pull-down Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Pull-down Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Pull-down Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Pull-down Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Pull-down Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Pull-down Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Pull-down Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Pull-down Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Pull-down Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Pull-down Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Pull-down Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Pull-down Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Pull-down Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Pull-down Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Pull-down Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Pull-down Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Pull-down Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Pull-down Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Pull-down Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Pull-down Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Pull-down Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Pull-down Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Pull-down Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Pull-down Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Pull-down Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Pull-down Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Pull-down Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PDER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PDER_OFFSET            0x080        /**< \brief (GPIO_PDER offset) Pull-down Enable Register */

#define GPIO_PDER_P0_Pos            0            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P0                (_U(0x1) << GPIO_PDER_P0_Pos)
#define GPIO_PDER_P1_Pos            1            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P1                (_U(0x1) << GPIO_PDER_P1_Pos)
#define GPIO_PDER_P2_Pos            2            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P2                (_U(0x1) << GPIO_PDER_P2_Pos)
#define GPIO_PDER_P3_Pos            3            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P3                (_U(0x1) << GPIO_PDER_P3_Pos)
#define GPIO_PDER_P4_Pos            4            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P4                (_U(0x1) << GPIO_PDER_P4_Pos)
#define GPIO_PDER_P5_Pos            5            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P5                (_U(0x1) << GPIO_PDER_P5_Pos)
#define GPIO_PDER_P6_Pos            6            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P6                (_U(0x1) << GPIO_PDER_P6_Pos)
#define GPIO_PDER_P7_Pos            7            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P7                (_U(0x1) << GPIO_PDER_P7_Pos)
#define GPIO_PDER_P8_Pos            8            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P8                (_U(0x1) << GPIO_PDER_P8_Pos)
#define GPIO_PDER_P9_Pos            9            /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P9                (_U(0x1) << GPIO_PDER_P9_Pos)
#define GPIO_PDER_P10_Pos           10           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P10               (_U(0x1) << GPIO_PDER_P10_Pos)
#define GPIO_PDER_P11_Pos           11           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P11               (_U(0x1) << GPIO_PDER_P11_Pos)
#define GPIO_PDER_P12_Pos           12           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P12               (_U(0x1) << GPIO_PDER_P12_Pos)
#define GPIO_PDER_P13_Pos           13           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P13               (_U(0x1) << GPIO_PDER_P13_Pos)
#define GPIO_PDER_P14_Pos           14           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P14               (_U(0x1) << GPIO_PDER_P14_Pos)
#define GPIO_PDER_P15_Pos           15           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P15               (_U(0x1) << GPIO_PDER_P15_Pos)
#define GPIO_PDER_P16_Pos           16           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P16               (_U(0x1) << GPIO_PDER_P16_Pos)
#define GPIO_PDER_P17_Pos           17           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P17               (_U(0x1) << GPIO_PDER_P17_Pos)
#define GPIO_PDER_P18_Pos           18           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P18               (_U(0x1) << GPIO_PDER_P18_Pos)
#define GPIO_PDER_P19_Pos           19           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P19               (_U(0x1) << GPIO_PDER_P19_Pos)
#define GPIO_PDER_P20_Pos           20           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P20               (_U(0x1) << GPIO_PDER_P20_Pos)
#define GPIO_PDER_P21_Pos           21           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P21               (_U(0x1) << GPIO_PDER_P21_Pos)
#define GPIO_PDER_P22_Pos           22           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P22               (_U(0x1) << GPIO_PDER_P22_Pos)
#define GPIO_PDER_P23_Pos           23           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P23               (_U(0x1) << GPIO_PDER_P23_Pos)
#define GPIO_PDER_P24_Pos           24           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P24               (_U(0x1) << GPIO_PDER_P24_Pos)
#define GPIO_PDER_P25_Pos           25           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P25               (_U(0x1) << GPIO_PDER_P25_Pos)
#define GPIO_PDER_P26_Pos           26           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P26               (_U(0x1) << GPIO_PDER_P26_Pos)
#define GPIO_PDER_P27_Pos           27           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P27               (_U(0x1) << GPIO_PDER_P27_Pos)
#define GPIO_PDER_P28_Pos           28           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P28               (_U(0x1) << GPIO_PDER_P28_Pos)
#define GPIO_PDER_P29_Pos           29           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P29               (_U(0x1) << GPIO_PDER_P29_Pos)
#define GPIO_PDER_P30_Pos           30           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P30               (_U(0x1) << GPIO_PDER_P30_Pos)
#define GPIO_PDER_P31_Pos           31           /**< \brief (GPIO_PDER) Pull-down Enable */
#define GPIO_PDER_P31               (_U(0x1) << GPIO_PDER_P31_Pos)
#define GPIO_PDER_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_PDER) MASK Register */

/* -------- GPIO_PDERS : (GPIO Offset: 0x084) ( /W 32) port Pull-down Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-down Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Pull-down Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Pull-down Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Pull-down Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Pull-down Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Pull-down Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Pull-down Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Pull-down Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Pull-down Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Pull-down Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Pull-down Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Pull-down Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Pull-down Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Pull-down Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Pull-down Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Pull-down Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Pull-down Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Pull-down Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Pull-down Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Pull-down Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Pull-down Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Pull-down Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Pull-down Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Pull-down Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Pull-down Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Pull-down Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Pull-down Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Pull-down Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Pull-down Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Pull-down Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Pull-down Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Pull-down Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PDERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PDERS_OFFSET           0x084        /**< \brief (GPIO_PDERS offset) Pull-down Enable Register - Set */

#define GPIO_PDERS_P0_Pos           0            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P0               (_U(0x1) << GPIO_PDERS_P0_Pos)
#define GPIO_PDERS_P1_Pos           1            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P1               (_U(0x1) << GPIO_PDERS_P1_Pos)
#define GPIO_PDERS_P2_Pos           2            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P2               (_U(0x1) << GPIO_PDERS_P2_Pos)
#define GPIO_PDERS_P3_Pos           3            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P3               (_U(0x1) << GPIO_PDERS_P3_Pos)
#define GPIO_PDERS_P4_Pos           4            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P4               (_U(0x1) << GPIO_PDERS_P4_Pos)
#define GPIO_PDERS_P5_Pos           5            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P5               (_U(0x1) << GPIO_PDERS_P5_Pos)
#define GPIO_PDERS_P6_Pos           6            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P6               (_U(0x1) << GPIO_PDERS_P6_Pos)
#define GPIO_PDERS_P7_Pos           7            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P7               (_U(0x1) << GPIO_PDERS_P7_Pos)
#define GPIO_PDERS_P8_Pos           8            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P8               (_U(0x1) << GPIO_PDERS_P8_Pos)
#define GPIO_PDERS_P9_Pos           9            /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P9               (_U(0x1) << GPIO_PDERS_P9_Pos)
#define GPIO_PDERS_P10_Pos          10           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P10              (_U(0x1) << GPIO_PDERS_P10_Pos)
#define GPIO_PDERS_P11_Pos          11           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P11              (_U(0x1) << GPIO_PDERS_P11_Pos)
#define GPIO_PDERS_P12_Pos          12           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P12              (_U(0x1) << GPIO_PDERS_P12_Pos)
#define GPIO_PDERS_P13_Pos          13           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P13              (_U(0x1) << GPIO_PDERS_P13_Pos)
#define GPIO_PDERS_P14_Pos          14           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P14              (_U(0x1) << GPIO_PDERS_P14_Pos)
#define GPIO_PDERS_P15_Pos          15           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P15              (_U(0x1) << GPIO_PDERS_P15_Pos)
#define GPIO_PDERS_P16_Pos          16           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P16              (_U(0x1) << GPIO_PDERS_P16_Pos)
#define GPIO_PDERS_P17_Pos          17           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P17              (_U(0x1) << GPIO_PDERS_P17_Pos)
#define GPIO_PDERS_P18_Pos          18           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P18              (_U(0x1) << GPIO_PDERS_P18_Pos)
#define GPIO_PDERS_P19_Pos          19           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P19              (_U(0x1) << GPIO_PDERS_P19_Pos)
#define GPIO_PDERS_P20_Pos          20           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P20              (_U(0x1) << GPIO_PDERS_P20_Pos)
#define GPIO_PDERS_P21_Pos          21           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P21              (_U(0x1) << GPIO_PDERS_P21_Pos)
#define GPIO_PDERS_P22_Pos          22           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P22              (_U(0x1) << GPIO_PDERS_P22_Pos)
#define GPIO_PDERS_P23_Pos          23           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P23              (_U(0x1) << GPIO_PDERS_P23_Pos)
#define GPIO_PDERS_P24_Pos          24           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P24              (_U(0x1) << GPIO_PDERS_P24_Pos)
#define GPIO_PDERS_P25_Pos          25           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P25              (_U(0x1) << GPIO_PDERS_P25_Pos)
#define GPIO_PDERS_P26_Pos          26           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P26              (_U(0x1) << GPIO_PDERS_P26_Pos)
#define GPIO_PDERS_P27_Pos          27           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P27              (_U(0x1) << GPIO_PDERS_P27_Pos)
#define GPIO_PDERS_P28_Pos          28           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P28              (_U(0x1) << GPIO_PDERS_P28_Pos)
#define GPIO_PDERS_P29_Pos          29           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P29              (_U(0x1) << GPIO_PDERS_P29_Pos)
#define GPIO_PDERS_P30_Pos          30           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P30              (_U(0x1) << GPIO_PDERS_P30_Pos)
#define GPIO_PDERS_P31_Pos          31           /**< \brief (GPIO_PDERS) Pull-down Enable */
#define GPIO_PDERS_P31              (_U(0x1) << GPIO_PDERS_P31_Pos)
#define GPIO_PDERS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PDERS) MASK Register */

/* -------- GPIO_PDERC : (GPIO Offset: 0x088) ( /W 32) port Pull-down Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-down Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Pull-down Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Pull-down Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Pull-down Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Pull-down Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Pull-down Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Pull-down Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Pull-down Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Pull-down Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Pull-down Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Pull-down Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Pull-down Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Pull-down Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Pull-down Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Pull-down Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Pull-down Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Pull-down Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Pull-down Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Pull-down Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Pull-down Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Pull-down Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Pull-down Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Pull-down Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Pull-down Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Pull-down Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Pull-down Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Pull-down Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Pull-down Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Pull-down Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Pull-down Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Pull-down Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Pull-down Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PDERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PDERC_OFFSET           0x088        /**< \brief (GPIO_PDERC offset) Pull-down Enable Register - Clear */

#define GPIO_PDERC_P0_Pos           0            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P0               (_U(0x1) << GPIO_PDERC_P0_Pos)
#define GPIO_PDERC_P1_Pos           1            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P1               (_U(0x1) << GPIO_PDERC_P1_Pos)
#define GPIO_PDERC_P2_Pos           2            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P2               (_U(0x1) << GPIO_PDERC_P2_Pos)
#define GPIO_PDERC_P3_Pos           3            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P3               (_U(0x1) << GPIO_PDERC_P3_Pos)
#define GPIO_PDERC_P4_Pos           4            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P4               (_U(0x1) << GPIO_PDERC_P4_Pos)
#define GPIO_PDERC_P5_Pos           5            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P5               (_U(0x1) << GPIO_PDERC_P5_Pos)
#define GPIO_PDERC_P6_Pos           6            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P6               (_U(0x1) << GPIO_PDERC_P6_Pos)
#define GPIO_PDERC_P7_Pos           7            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P7               (_U(0x1) << GPIO_PDERC_P7_Pos)
#define GPIO_PDERC_P8_Pos           8            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P8               (_U(0x1) << GPIO_PDERC_P8_Pos)
#define GPIO_PDERC_P9_Pos           9            /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P9               (_U(0x1) << GPIO_PDERC_P9_Pos)
#define GPIO_PDERC_P10_Pos          10           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P10              (_U(0x1) << GPIO_PDERC_P10_Pos)
#define GPIO_PDERC_P11_Pos          11           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P11              (_U(0x1) << GPIO_PDERC_P11_Pos)
#define GPIO_PDERC_P12_Pos          12           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P12              (_U(0x1) << GPIO_PDERC_P12_Pos)
#define GPIO_PDERC_P13_Pos          13           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P13              (_U(0x1) << GPIO_PDERC_P13_Pos)
#define GPIO_PDERC_P14_Pos          14           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P14              (_U(0x1) << GPIO_PDERC_P14_Pos)
#define GPIO_PDERC_P15_Pos          15           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P15              (_U(0x1) << GPIO_PDERC_P15_Pos)
#define GPIO_PDERC_P16_Pos          16           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P16              (_U(0x1) << GPIO_PDERC_P16_Pos)
#define GPIO_PDERC_P17_Pos          17           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P17              (_U(0x1) << GPIO_PDERC_P17_Pos)
#define GPIO_PDERC_P18_Pos          18           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P18              (_U(0x1) << GPIO_PDERC_P18_Pos)
#define GPIO_PDERC_P19_Pos          19           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P19              (_U(0x1) << GPIO_PDERC_P19_Pos)
#define GPIO_PDERC_P20_Pos          20           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P20              (_U(0x1) << GPIO_PDERC_P20_Pos)
#define GPIO_PDERC_P21_Pos          21           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P21              (_U(0x1) << GPIO_PDERC_P21_Pos)
#define GPIO_PDERC_P22_Pos          22           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P22              (_U(0x1) << GPIO_PDERC_P22_Pos)
#define GPIO_PDERC_P23_Pos          23           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P23              (_U(0x1) << GPIO_PDERC_P23_Pos)
#define GPIO_PDERC_P24_Pos          24           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P24              (_U(0x1) << GPIO_PDERC_P24_Pos)
#define GPIO_PDERC_P25_Pos          25           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P25              (_U(0x1) << GPIO_PDERC_P25_Pos)
#define GPIO_PDERC_P26_Pos          26           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P26              (_U(0x1) << GPIO_PDERC_P26_Pos)
#define GPIO_PDERC_P27_Pos          27           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P27              (_U(0x1) << GPIO_PDERC_P27_Pos)
#define GPIO_PDERC_P28_Pos          28           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P28              (_U(0x1) << GPIO_PDERC_P28_Pos)
#define GPIO_PDERC_P29_Pos          29           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P29              (_U(0x1) << GPIO_PDERC_P29_Pos)
#define GPIO_PDERC_P30_Pos          30           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P30              (_U(0x1) << GPIO_PDERC_P30_Pos)
#define GPIO_PDERC_P31_Pos          31           /**< \brief (GPIO_PDERC) Pull-down Enable */
#define GPIO_PDERC_P31              (_U(0x1) << GPIO_PDERC_P31_Pos)
#define GPIO_PDERC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PDERC) MASK Register */

/* -------- GPIO_PDERT : (GPIO Offset: 0x08C) ( /W 32) port Pull-down Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Pull-down Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Pull-down Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Pull-down Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Pull-down Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Pull-down Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Pull-down Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Pull-down Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Pull-down Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Pull-down Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Pull-down Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Pull-down Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Pull-down Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Pull-down Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Pull-down Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Pull-down Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Pull-down Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Pull-down Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Pull-down Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Pull-down Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Pull-down Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Pull-down Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Pull-down Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Pull-down Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Pull-down Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Pull-down Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Pull-down Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Pull-down Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Pull-down Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Pull-down Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Pull-down Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Pull-down Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Pull-down Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PDERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PDERT_OFFSET           0x08C        /**< \brief (GPIO_PDERT offset) Pull-down Enable Register - Toggle */

#define GPIO_PDERT_P0_Pos           0            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P0               (_U(0x1) << GPIO_PDERT_P0_Pos)
#define GPIO_PDERT_P1_Pos           1            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P1               (_U(0x1) << GPIO_PDERT_P1_Pos)
#define GPIO_PDERT_P2_Pos           2            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P2               (_U(0x1) << GPIO_PDERT_P2_Pos)
#define GPIO_PDERT_P3_Pos           3            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P3               (_U(0x1) << GPIO_PDERT_P3_Pos)
#define GPIO_PDERT_P4_Pos           4            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P4               (_U(0x1) << GPIO_PDERT_P4_Pos)
#define GPIO_PDERT_P5_Pos           5            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P5               (_U(0x1) << GPIO_PDERT_P5_Pos)
#define GPIO_PDERT_P6_Pos           6            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P6               (_U(0x1) << GPIO_PDERT_P6_Pos)
#define GPIO_PDERT_P7_Pos           7            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P7               (_U(0x1) << GPIO_PDERT_P7_Pos)
#define GPIO_PDERT_P8_Pos           8            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P8               (_U(0x1) << GPIO_PDERT_P8_Pos)
#define GPIO_PDERT_P9_Pos           9            /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P9               (_U(0x1) << GPIO_PDERT_P9_Pos)
#define GPIO_PDERT_P10_Pos          10           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P10              (_U(0x1) << GPIO_PDERT_P10_Pos)
#define GPIO_PDERT_P11_Pos          11           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P11              (_U(0x1) << GPIO_PDERT_P11_Pos)
#define GPIO_PDERT_P12_Pos          12           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P12              (_U(0x1) << GPIO_PDERT_P12_Pos)
#define GPIO_PDERT_P13_Pos          13           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P13              (_U(0x1) << GPIO_PDERT_P13_Pos)
#define GPIO_PDERT_P14_Pos          14           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P14              (_U(0x1) << GPIO_PDERT_P14_Pos)
#define GPIO_PDERT_P15_Pos          15           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P15              (_U(0x1) << GPIO_PDERT_P15_Pos)
#define GPIO_PDERT_P16_Pos          16           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P16              (_U(0x1) << GPIO_PDERT_P16_Pos)
#define GPIO_PDERT_P17_Pos          17           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P17              (_U(0x1) << GPIO_PDERT_P17_Pos)
#define GPIO_PDERT_P18_Pos          18           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P18              (_U(0x1) << GPIO_PDERT_P18_Pos)
#define GPIO_PDERT_P19_Pos          19           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P19              (_U(0x1) << GPIO_PDERT_P19_Pos)
#define GPIO_PDERT_P20_Pos          20           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P20              (_U(0x1) << GPIO_PDERT_P20_Pos)
#define GPIO_PDERT_P21_Pos          21           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P21              (_U(0x1) << GPIO_PDERT_P21_Pos)
#define GPIO_PDERT_P22_Pos          22           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P22              (_U(0x1) << GPIO_PDERT_P22_Pos)
#define GPIO_PDERT_P23_Pos          23           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P23              (_U(0x1) << GPIO_PDERT_P23_Pos)
#define GPIO_PDERT_P24_Pos          24           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P24              (_U(0x1) << GPIO_PDERT_P24_Pos)
#define GPIO_PDERT_P25_Pos          25           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P25              (_U(0x1) << GPIO_PDERT_P25_Pos)
#define GPIO_PDERT_P26_Pos          26           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P26              (_U(0x1) << GPIO_PDERT_P26_Pos)
#define GPIO_PDERT_P27_Pos          27           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P27              (_U(0x1) << GPIO_PDERT_P27_Pos)
#define GPIO_PDERT_P28_Pos          28           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P28              (_U(0x1) << GPIO_PDERT_P28_Pos)
#define GPIO_PDERT_P29_Pos          29           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P29              (_U(0x1) << GPIO_PDERT_P29_Pos)
#define GPIO_PDERT_P30_Pos          30           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P30              (_U(0x1) << GPIO_PDERT_P30_Pos)
#define GPIO_PDERT_P31_Pos          31           /**< \brief (GPIO_PDERT) Pull-down Enable */
#define GPIO_PDERT_P31              (_U(0x1) << GPIO_PDERT_P31_Pos)
#define GPIO_PDERT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_PDERT) MASK Register */

/* -------- GPIO_IER : (GPIO Offset: 0x090) (R/W 32) port Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IER_OFFSET             0x090        /**< \brief (GPIO_IER offset) Interrupt Enable Register */

#define GPIO_IER_P0_Pos             0            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P0                 (_U(0x1) << GPIO_IER_P0_Pos)
#define GPIO_IER_P1_Pos             1            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P1                 (_U(0x1) << GPIO_IER_P1_Pos)
#define GPIO_IER_P2_Pos             2            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P2                 (_U(0x1) << GPIO_IER_P2_Pos)
#define GPIO_IER_P3_Pos             3            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P3                 (_U(0x1) << GPIO_IER_P3_Pos)
#define GPIO_IER_P4_Pos             4            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P4                 (_U(0x1) << GPIO_IER_P4_Pos)
#define GPIO_IER_P5_Pos             5            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P5                 (_U(0x1) << GPIO_IER_P5_Pos)
#define GPIO_IER_P6_Pos             6            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P6                 (_U(0x1) << GPIO_IER_P6_Pos)
#define GPIO_IER_P7_Pos             7            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P7                 (_U(0x1) << GPIO_IER_P7_Pos)
#define GPIO_IER_P8_Pos             8            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P8                 (_U(0x1) << GPIO_IER_P8_Pos)
#define GPIO_IER_P9_Pos             9            /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P9                 (_U(0x1) << GPIO_IER_P9_Pos)
#define GPIO_IER_P10_Pos            10           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P10                (_U(0x1) << GPIO_IER_P10_Pos)
#define GPIO_IER_P11_Pos            11           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P11                (_U(0x1) << GPIO_IER_P11_Pos)
#define GPIO_IER_P12_Pos            12           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P12                (_U(0x1) << GPIO_IER_P12_Pos)
#define GPIO_IER_P13_Pos            13           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P13                (_U(0x1) << GPIO_IER_P13_Pos)
#define GPIO_IER_P14_Pos            14           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P14                (_U(0x1) << GPIO_IER_P14_Pos)
#define GPIO_IER_P15_Pos            15           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P15                (_U(0x1) << GPIO_IER_P15_Pos)
#define GPIO_IER_P16_Pos            16           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P16                (_U(0x1) << GPIO_IER_P16_Pos)
#define GPIO_IER_P17_Pos            17           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P17                (_U(0x1) << GPIO_IER_P17_Pos)
#define GPIO_IER_P18_Pos            18           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P18                (_U(0x1) << GPIO_IER_P18_Pos)
#define GPIO_IER_P19_Pos            19           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P19                (_U(0x1) << GPIO_IER_P19_Pos)
#define GPIO_IER_P20_Pos            20           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P20                (_U(0x1) << GPIO_IER_P20_Pos)
#define GPIO_IER_P21_Pos            21           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P21                (_U(0x1) << GPIO_IER_P21_Pos)
#define GPIO_IER_P22_Pos            22           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P22                (_U(0x1) << GPIO_IER_P22_Pos)
#define GPIO_IER_P23_Pos            23           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P23                (_U(0x1) << GPIO_IER_P23_Pos)
#define GPIO_IER_P24_Pos            24           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P24                (_U(0x1) << GPIO_IER_P24_Pos)
#define GPIO_IER_P25_Pos            25           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P25                (_U(0x1) << GPIO_IER_P25_Pos)
#define GPIO_IER_P26_Pos            26           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P26                (_U(0x1) << GPIO_IER_P26_Pos)
#define GPIO_IER_P27_Pos            27           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P27                (_U(0x1) << GPIO_IER_P27_Pos)
#define GPIO_IER_P28_Pos            28           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P28                (_U(0x1) << GPIO_IER_P28_Pos)
#define GPIO_IER_P29_Pos            29           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P29                (_U(0x1) << GPIO_IER_P29_Pos)
#define GPIO_IER_P30_Pos            30           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P30                (_U(0x1) << GPIO_IER_P30_Pos)
#define GPIO_IER_P31_Pos            31           /**< \brief (GPIO_IER) Interrupt Enable */
#define GPIO_IER_P31                (_U(0x1) << GPIO_IER_P31_Pos)
#define GPIO_IER_MASK               _U(0xFFFFFFFF) /**< \brief (GPIO_IER) MASK Register */

/* -------- GPIO_IERS : (GPIO Offset: 0x094) ( /W 32) port Interrupt Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IERS_OFFSET            0x094        /**< \brief (GPIO_IERS offset) Interrupt Enable Register - Set */

#define GPIO_IERS_P0_Pos            0            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P0                (_U(0x1) << GPIO_IERS_P0_Pos)
#define GPIO_IERS_P1_Pos            1            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P1                (_U(0x1) << GPIO_IERS_P1_Pos)
#define GPIO_IERS_P2_Pos            2            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P2                (_U(0x1) << GPIO_IERS_P2_Pos)
#define GPIO_IERS_P3_Pos            3            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P3                (_U(0x1) << GPIO_IERS_P3_Pos)
#define GPIO_IERS_P4_Pos            4            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P4                (_U(0x1) << GPIO_IERS_P4_Pos)
#define GPIO_IERS_P5_Pos            5            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P5                (_U(0x1) << GPIO_IERS_P5_Pos)
#define GPIO_IERS_P6_Pos            6            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P6                (_U(0x1) << GPIO_IERS_P6_Pos)
#define GPIO_IERS_P7_Pos            7            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P7                (_U(0x1) << GPIO_IERS_P7_Pos)
#define GPIO_IERS_P8_Pos            8            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P8                (_U(0x1) << GPIO_IERS_P8_Pos)
#define GPIO_IERS_P9_Pos            9            /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P9                (_U(0x1) << GPIO_IERS_P9_Pos)
#define GPIO_IERS_P10_Pos           10           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P10               (_U(0x1) << GPIO_IERS_P10_Pos)
#define GPIO_IERS_P11_Pos           11           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P11               (_U(0x1) << GPIO_IERS_P11_Pos)
#define GPIO_IERS_P12_Pos           12           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P12               (_U(0x1) << GPIO_IERS_P12_Pos)
#define GPIO_IERS_P13_Pos           13           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P13               (_U(0x1) << GPIO_IERS_P13_Pos)
#define GPIO_IERS_P14_Pos           14           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P14               (_U(0x1) << GPIO_IERS_P14_Pos)
#define GPIO_IERS_P15_Pos           15           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P15               (_U(0x1) << GPIO_IERS_P15_Pos)
#define GPIO_IERS_P16_Pos           16           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P16               (_U(0x1) << GPIO_IERS_P16_Pos)
#define GPIO_IERS_P17_Pos           17           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P17               (_U(0x1) << GPIO_IERS_P17_Pos)
#define GPIO_IERS_P18_Pos           18           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P18               (_U(0x1) << GPIO_IERS_P18_Pos)
#define GPIO_IERS_P19_Pos           19           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P19               (_U(0x1) << GPIO_IERS_P19_Pos)
#define GPIO_IERS_P20_Pos           20           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P20               (_U(0x1) << GPIO_IERS_P20_Pos)
#define GPIO_IERS_P21_Pos           21           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P21               (_U(0x1) << GPIO_IERS_P21_Pos)
#define GPIO_IERS_P22_Pos           22           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P22               (_U(0x1) << GPIO_IERS_P22_Pos)
#define GPIO_IERS_P23_Pos           23           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P23               (_U(0x1) << GPIO_IERS_P23_Pos)
#define GPIO_IERS_P24_Pos           24           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P24               (_U(0x1) << GPIO_IERS_P24_Pos)
#define GPIO_IERS_P25_Pos           25           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P25               (_U(0x1) << GPIO_IERS_P25_Pos)
#define GPIO_IERS_P26_Pos           26           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P26               (_U(0x1) << GPIO_IERS_P26_Pos)
#define GPIO_IERS_P27_Pos           27           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P27               (_U(0x1) << GPIO_IERS_P27_Pos)
#define GPIO_IERS_P28_Pos           28           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P28               (_U(0x1) << GPIO_IERS_P28_Pos)
#define GPIO_IERS_P29_Pos           29           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P29               (_U(0x1) << GPIO_IERS_P29_Pos)
#define GPIO_IERS_P30_Pos           30           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P30               (_U(0x1) << GPIO_IERS_P30_Pos)
#define GPIO_IERS_P31_Pos           31           /**< \brief (GPIO_IERS) Interrupt Enable */
#define GPIO_IERS_P31               (_U(0x1) << GPIO_IERS_P31_Pos)
#define GPIO_IERS_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_IERS) MASK Register */

/* -------- GPIO_IERC : (GPIO Offset: 0x098) ( /W 32) port Interrupt Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IERC_OFFSET            0x098        /**< \brief (GPIO_IERC offset) Interrupt Enable Register - Clear */

#define GPIO_IERC_P0_Pos            0            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P0                (_U(0x1) << GPIO_IERC_P0_Pos)
#define GPIO_IERC_P1_Pos            1            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P1                (_U(0x1) << GPIO_IERC_P1_Pos)
#define GPIO_IERC_P2_Pos            2            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P2                (_U(0x1) << GPIO_IERC_P2_Pos)
#define GPIO_IERC_P3_Pos            3            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P3                (_U(0x1) << GPIO_IERC_P3_Pos)
#define GPIO_IERC_P4_Pos            4            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P4                (_U(0x1) << GPIO_IERC_P4_Pos)
#define GPIO_IERC_P5_Pos            5            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P5                (_U(0x1) << GPIO_IERC_P5_Pos)
#define GPIO_IERC_P6_Pos            6            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P6                (_U(0x1) << GPIO_IERC_P6_Pos)
#define GPIO_IERC_P7_Pos            7            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P7                (_U(0x1) << GPIO_IERC_P7_Pos)
#define GPIO_IERC_P8_Pos            8            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P8                (_U(0x1) << GPIO_IERC_P8_Pos)
#define GPIO_IERC_P9_Pos            9            /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P9                (_U(0x1) << GPIO_IERC_P9_Pos)
#define GPIO_IERC_P10_Pos           10           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P10               (_U(0x1) << GPIO_IERC_P10_Pos)
#define GPIO_IERC_P11_Pos           11           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P11               (_U(0x1) << GPIO_IERC_P11_Pos)
#define GPIO_IERC_P12_Pos           12           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P12               (_U(0x1) << GPIO_IERC_P12_Pos)
#define GPIO_IERC_P13_Pos           13           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P13               (_U(0x1) << GPIO_IERC_P13_Pos)
#define GPIO_IERC_P14_Pos           14           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P14               (_U(0x1) << GPIO_IERC_P14_Pos)
#define GPIO_IERC_P15_Pos           15           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P15               (_U(0x1) << GPIO_IERC_P15_Pos)
#define GPIO_IERC_P16_Pos           16           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P16               (_U(0x1) << GPIO_IERC_P16_Pos)
#define GPIO_IERC_P17_Pos           17           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P17               (_U(0x1) << GPIO_IERC_P17_Pos)
#define GPIO_IERC_P18_Pos           18           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P18               (_U(0x1) << GPIO_IERC_P18_Pos)
#define GPIO_IERC_P19_Pos           19           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P19               (_U(0x1) << GPIO_IERC_P19_Pos)
#define GPIO_IERC_P20_Pos           20           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P20               (_U(0x1) << GPIO_IERC_P20_Pos)
#define GPIO_IERC_P21_Pos           21           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P21               (_U(0x1) << GPIO_IERC_P21_Pos)
#define GPIO_IERC_P22_Pos           22           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P22               (_U(0x1) << GPIO_IERC_P22_Pos)
#define GPIO_IERC_P23_Pos           23           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P23               (_U(0x1) << GPIO_IERC_P23_Pos)
#define GPIO_IERC_P24_Pos           24           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P24               (_U(0x1) << GPIO_IERC_P24_Pos)
#define GPIO_IERC_P25_Pos           25           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P25               (_U(0x1) << GPIO_IERC_P25_Pos)
#define GPIO_IERC_P26_Pos           26           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P26               (_U(0x1) << GPIO_IERC_P26_Pos)
#define GPIO_IERC_P27_Pos           27           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P27               (_U(0x1) << GPIO_IERC_P27_Pos)
#define GPIO_IERC_P28_Pos           28           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P28               (_U(0x1) << GPIO_IERC_P28_Pos)
#define GPIO_IERC_P29_Pos           29           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P29               (_U(0x1) << GPIO_IERC_P29_Pos)
#define GPIO_IERC_P30_Pos           30           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P30               (_U(0x1) << GPIO_IERC_P30_Pos)
#define GPIO_IERC_P31_Pos           31           /**< \brief (GPIO_IERC) Interrupt Enable */
#define GPIO_IERC_P31               (_U(0x1) << GPIO_IERC_P31_Pos)
#define GPIO_IERC_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_IERC) MASK Register */

/* -------- GPIO_IERT : (GPIO Offset: 0x09C) ( /W 32) port Interrupt Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Enable                   */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Enable                   */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Enable                   */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Enable                   */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Enable                   */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Enable                   */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Enable                   */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Enable                   */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Enable                   */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Enable                   */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Enable                   */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Enable                   */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Enable                   */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Enable                   */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Enable                   */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Enable                   */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Enable                   */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Enable                   */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Enable                   */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Enable                   */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Enable                   */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Enable                   */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Enable                   */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Enable                   */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Enable                   */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Enable                   */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Enable                   */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Enable                   */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Enable                   */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Enable                   */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Enable                   */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Enable                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IERT_OFFSET            0x09C        /**< \brief (GPIO_IERT offset) Interrupt Enable Register - Toggle */

#define GPIO_IERT_P0_Pos            0            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P0                (_U(0x1) << GPIO_IERT_P0_Pos)
#define GPIO_IERT_P1_Pos            1            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P1                (_U(0x1) << GPIO_IERT_P1_Pos)
#define GPIO_IERT_P2_Pos            2            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P2                (_U(0x1) << GPIO_IERT_P2_Pos)
#define GPIO_IERT_P3_Pos            3            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P3                (_U(0x1) << GPIO_IERT_P3_Pos)
#define GPIO_IERT_P4_Pos            4            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P4                (_U(0x1) << GPIO_IERT_P4_Pos)
#define GPIO_IERT_P5_Pos            5            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P5                (_U(0x1) << GPIO_IERT_P5_Pos)
#define GPIO_IERT_P6_Pos            6            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P6                (_U(0x1) << GPIO_IERT_P6_Pos)
#define GPIO_IERT_P7_Pos            7            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P7                (_U(0x1) << GPIO_IERT_P7_Pos)
#define GPIO_IERT_P8_Pos            8            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P8                (_U(0x1) << GPIO_IERT_P8_Pos)
#define GPIO_IERT_P9_Pos            9            /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P9                (_U(0x1) << GPIO_IERT_P9_Pos)
#define GPIO_IERT_P10_Pos           10           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P10               (_U(0x1) << GPIO_IERT_P10_Pos)
#define GPIO_IERT_P11_Pos           11           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P11               (_U(0x1) << GPIO_IERT_P11_Pos)
#define GPIO_IERT_P12_Pos           12           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P12               (_U(0x1) << GPIO_IERT_P12_Pos)
#define GPIO_IERT_P13_Pos           13           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P13               (_U(0x1) << GPIO_IERT_P13_Pos)
#define GPIO_IERT_P14_Pos           14           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P14               (_U(0x1) << GPIO_IERT_P14_Pos)
#define GPIO_IERT_P15_Pos           15           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P15               (_U(0x1) << GPIO_IERT_P15_Pos)
#define GPIO_IERT_P16_Pos           16           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P16               (_U(0x1) << GPIO_IERT_P16_Pos)
#define GPIO_IERT_P17_Pos           17           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P17               (_U(0x1) << GPIO_IERT_P17_Pos)
#define GPIO_IERT_P18_Pos           18           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P18               (_U(0x1) << GPIO_IERT_P18_Pos)
#define GPIO_IERT_P19_Pos           19           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P19               (_U(0x1) << GPIO_IERT_P19_Pos)
#define GPIO_IERT_P20_Pos           20           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P20               (_U(0x1) << GPIO_IERT_P20_Pos)
#define GPIO_IERT_P21_Pos           21           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P21               (_U(0x1) << GPIO_IERT_P21_Pos)
#define GPIO_IERT_P22_Pos           22           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P22               (_U(0x1) << GPIO_IERT_P22_Pos)
#define GPIO_IERT_P23_Pos           23           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P23               (_U(0x1) << GPIO_IERT_P23_Pos)
#define GPIO_IERT_P24_Pos           24           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P24               (_U(0x1) << GPIO_IERT_P24_Pos)
#define GPIO_IERT_P25_Pos           25           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P25               (_U(0x1) << GPIO_IERT_P25_Pos)
#define GPIO_IERT_P26_Pos           26           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P26               (_U(0x1) << GPIO_IERT_P26_Pos)
#define GPIO_IERT_P27_Pos           27           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P27               (_U(0x1) << GPIO_IERT_P27_Pos)
#define GPIO_IERT_P28_Pos           28           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P28               (_U(0x1) << GPIO_IERT_P28_Pos)
#define GPIO_IERT_P29_Pos           29           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P29               (_U(0x1) << GPIO_IERT_P29_Pos)
#define GPIO_IERT_P30_Pos           30           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P30               (_U(0x1) << GPIO_IERT_P30_Pos)
#define GPIO_IERT_P31_Pos           31           /**< \brief (GPIO_IERT) Interrupt Enable */
#define GPIO_IERT_P31               (_U(0x1) << GPIO_IERT_P31_Pos)
#define GPIO_IERT_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_IERT) MASK Register */

/* -------- GPIO_IMR0 : (GPIO Offset: 0x0A0) (R/W 32) port Interrupt Mode Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 0               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 0               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 0               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 0               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 0               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 0               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 0               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 0               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 0               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 0               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 0               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 0               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 0               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 0               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 0               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 0               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 0               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 0               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 0               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 0               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 0               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 0               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 0               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 0               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 0               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 0               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 0               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 0               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 0               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 0               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 0               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 0               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR0_OFFSET            0x0A0        /**< \brief (GPIO_IMR0 offset) Interrupt Mode Register 0 */

#define GPIO_IMR0_P0_Pos            0            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P0                (_U(0x1) << GPIO_IMR0_P0_Pos)
#define GPIO_IMR0_P1_Pos            1            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P1                (_U(0x1) << GPIO_IMR0_P1_Pos)
#define GPIO_IMR0_P2_Pos            2            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P2                (_U(0x1) << GPIO_IMR0_P2_Pos)
#define GPIO_IMR0_P3_Pos            3            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P3                (_U(0x1) << GPIO_IMR0_P3_Pos)
#define GPIO_IMR0_P4_Pos            4            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P4                (_U(0x1) << GPIO_IMR0_P4_Pos)
#define GPIO_IMR0_P5_Pos            5            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P5                (_U(0x1) << GPIO_IMR0_P5_Pos)
#define GPIO_IMR0_P6_Pos            6            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P6                (_U(0x1) << GPIO_IMR0_P6_Pos)
#define GPIO_IMR0_P7_Pos            7            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P7                (_U(0x1) << GPIO_IMR0_P7_Pos)
#define GPIO_IMR0_P8_Pos            8            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P8                (_U(0x1) << GPIO_IMR0_P8_Pos)
#define GPIO_IMR0_P9_Pos            9            /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P9                (_U(0x1) << GPIO_IMR0_P9_Pos)
#define GPIO_IMR0_P10_Pos           10           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P10               (_U(0x1) << GPIO_IMR0_P10_Pos)
#define GPIO_IMR0_P11_Pos           11           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P11               (_U(0x1) << GPIO_IMR0_P11_Pos)
#define GPIO_IMR0_P12_Pos           12           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P12               (_U(0x1) << GPIO_IMR0_P12_Pos)
#define GPIO_IMR0_P13_Pos           13           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P13               (_U(0x1) << GPIO_IMR0_P13_Pos)
#define GPIO_IMR0_P14_Pos           14           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P14               (_U(0x1) << GPIO_IMR0_P14_Pos)
#define GPIO_IMR0_P15_Pos           15           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P15               (_U(0x1) << GPIO_IMR0_P15_Pos)
#define GPIO_IMR0_P16_Pos           16           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P16               (_U(0x1) << GPIO_IMR0_P16_Pos)
#define GPIO_IMR0_P17_Pos           17           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P17               (_U(0x1) << GPIO_IMR0_P17_Pos)
#define GPIO_IMR0_P18_Pos           18           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P18               (_U(0x1) << GPIO_IMR0_P18_Pos)
#define GPIO_IMR0_P19_Pos           19           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P19               (_U(0x1) << GPIO_IMR0_P19_Pos)
#define GPIO_IMR0_P20_Pos           20           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P20               (_U(0x1) << GPIO_IMR0_P20_Pos)
#define GPIO_IMR0_P21_Pos           21           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P21               (_U(0x1) << GPIO_IMR0_P21_Pos)
#define GPIO_IMR0_P22_Pos           22           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P22               (_U(0x1) << GPIO_IMR0_P22_Pos)
#define GPIO_IMR0_P23_Pos           23           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P23               (_U(0x1) << GPIO_IMR0_P23_Pos)
#define GPIO_IMR0_P24_Pos           24           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P24               (_U(0x1) << GPIO_IMR0_P24_Pos)
#define GPIO_IMR0_P25_Pos           25           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P25               (_U(0x1) << GPIO_IMR0_P25_Pos)
#define GPIO_IMR0_P26_Pos           26           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P26               (_U(0x1) << GPIO_IMR0_P26_Pos)
#define GPIO_IMR0_P27_Pos           27           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P27               (_U(0x1) << GPIO_IMR0_P27_Pos)
#define GPIO_IMR0_P28_Pos           28           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P28               (_U(0x1) << GPIO_IMR0_P28_Pos)
#define GPIO_IMR0_P29_Pos           29           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P29               (_U(0x1) << GPIO_IMR0_P29_Pos)
#define GPIO_IMR0_P30_Pos           30           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P30               (_U(0x1) << GPIO_IMR0_P30_Pos)
#define GPIO_IMR0_P31_Pos           31           /**< \brief (GPIO_IMR0) Interrupt Mode Bit 0 */
#define GPIO_IMR0_P31               (_U(0x1) << GPIO_IMR0_P31_Pos)
#define GPIO_IMR0_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_IMR0) MASK Register */

/* -------- GPIO_IMR0S : (GPIO Offset: 0x0A4) ( /W 32) port Interrupt Mode Register 0 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 0               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 0               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 0               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 0               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 0               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 0               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 0               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 0               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 0               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 0               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 0               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 0               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 0               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 0               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 0               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 0               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 0               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 0               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 0               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 0               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 0               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 0               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 0               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 0               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 0               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 0               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 0               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 0               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 0               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 0               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 0               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 0               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR0S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR0S_OFFSET           0x0A4        /**< \brief (GPIO_IMR0S offset) Interrupt Mode Register 0 - Set */

#define GPIO_IMR0S_P0_Pos           0            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P0               (_U(0x1) << GPIO_IMR0S_P0_Pos)
#define GPIO_IMR0S_P1_Pos           1            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P1               (_U(0x1) << GPIO_IMR0S_P1_Pos)
#define GPIO_IMR0S_P2_Pos           2            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P2               (_U(0x1) << GPIO_IMR0S_P2_Pos)
#define GPIO_IMR0S_P3_Pos           3            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P3               (_U(0x1) << GPIO_IMR0S_P3_Pos)
#define GPIO_IMR0S_P4_Pos           4            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P4               (_U(0x1) << GPIO_IMR0S_P4_Pos)
#define GPIO_IMR0S_P5_Pos           5            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P5               (_U(0x1) << GPIO_IMR0S_P5_Pos)
#define GPIO_IMR0S_P6_Pos           6            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P6               (_U(0x1) << GPIO_IMR0S_P6_Pos)
#define GPIO_IMR0S_P7_Pos           7            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P7               (_U(0x1) << GPIO_IMR0S_P7_Pos)
#define GPIO_IMR0S_P8_Pos           8            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P8               (_U(0x1) << GPIO_IMR0S_P8_Pos)
#define GPIO_IMR0S_P9_Pos           9            /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P9               (_U(0x1) << GPIO_IMR0S_P9_Pos)
#define GPIO_IMR0S_P10_Pos          10           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P10              (_U(0x1) << GPIO_IMR0S_P10_Pos)
#define GPIO_IMR0S_P11_Pos          11           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P11              (_U(0x1) << GPIO_IMR0S_P11_Pos)
#define GPIO_IMR0S_P12_Pos          12           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P12              (_U(0x1) << GPIO_IMR0S_P12_Pos)
#define GPIO_IMR0S_P13_Pos          13           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P13              (_U(0x1) << GPIO_IMR0S_P13_Pos)
#define GPIO_IMR0S_P14_Pos          14           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P14              (_U(0x1) << GPIO_IMR0S_P14_Pos)
#define GPIO_IMR0S_P15_Pos          15           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P15              (_U(0x1) << GPIO_IMR0S_P15_Pos)
#define GPIO_IMR0S_P16_Pos          16           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P16              (_U(0x1) << GPIO_IMR0S_P16_Pos)
#define GPIO_IMR0S_P17_Pos          17           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P17              (_U(0x1) << GPIO_IMR0S_P17_Pos)
#define GPIO_IMR0S_P18_Pos          18           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P18              (_U(0x1) << GPIO_IMR0S_P18_Pos)
#define GPIO_IMR0S_P19_Pos          19           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P19              (_U(0x1) << GPIO_IMR0S_P19_Pos)
#define GPIO_IMR0S_P20_Pos          20           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P20              (_U(0x1) << GPIO_IMR0S_P20_Pos)
#define GPIO_IMR0S_P21_Pos          21           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P21              (_U(0x1) << GPIO_IMR0S_P21_Pos)
#define GPIO_IMR0S_P22_Pos          22           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P22              (_U(0x1) << GPIO_IMR0S_P22_Pos)
#define GPIO_IMR0S_P23_Pos          23           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P23              (_U(0x1) << GPIO_IMR0S_P23_Pos)
#define GPIO_IMR0S_P24_Pos          24           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P24              (_U(0x1) << GPIO_IMR0S_P24_Pos)
#define GPIO_IMR0S_P25_Pos          25           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P25              (_U(0x1) << GPIO_IMR0S_P25_Pos)
#define GPIO_IMR0S_P26_Pos          26           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P26              (_U(0x1) << GPIO_IMR0S_P26_Pos)
#define GPIO_IMR0S_P27_Pos          27           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P27              (_U(0x1) << GPIO_IMR0S_P27_Pos)
#define GPIO_IMR0S_P28_Pos          28           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P28              (_U(0x1) << GPIO_IMR0S_P28_Pos)
#define GPIO_IMR0S_P29_Pos          29           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P29              (_U(0x1) << GPIO_IMR0S_P29_Pos)
#define GPIO_IMR0S_P30_Pos          30           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P30              (_U(0x1) << GPIO_IMR0S_P30_Pos)
#define GPIO_IMR0S_P31_Pos          31           /**< \brief (GPIO_IMR0S) Interrupt Mode Bit 0 */
#define GPIO_IMR0S_P31              (_U(0x1) << GPIO_IMR0S_P31_Pos)
#define GPIO_IMR0S_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_IMR0S) MASK Register */

/* -------- GPIO_IMR0C : (GPIO Offset: 0x0A8) ( /W 32) port Interrupt Mode Register 0 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 0               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 0               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 0               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 0               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 0               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 0               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 0               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 0               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 0               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 0               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 0               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 0               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 0               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 0               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 0               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 0               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 0               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 0               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 0               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 0               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 0               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 0               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 0               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 0               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 0               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 0               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 0               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 0               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 0               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 0               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 0               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 0               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR0C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR0C_OFFSET           0x0A8        /**< \brief (GPIO_IMR0C offset) Interrupt Mode Register 0 - Clear */

#define GPIO_IMR0C_P0_Pos           0            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P0               (_U(0x1) << GPIO_IMR0C_P0_Pos)
#define GPIO_IMR0C_P1_Pos           1            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P1               (_U(0x1) << GPIO_IMR0C_P1_Pos)
#define GPIO_IMR0C_P2_Pos           2            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P2               (_U(0x1) << GPIO_IMR0C_P2_Pos)
#define GPIO_IMR0C_P3_Pos           3            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P3               (_U(0x1) << GPIO_IMR0C_P3_Pos)
#define GPIO_IMR0C_P4_Pos           4            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P4               (_U(0x1) << GPIO_IMR0C_P4_Pos)
#define GPIO_IMR0C_P5_Pos           5            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P5               (_U(0x1) << GPIO_IMR0C_P5_Pos)
#define GPIO_IMR0C_P6_Pos           6            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P6               (_U(0x1) << GPIO_IMR0C_P6_Pos)
#define GPIO_IMR0C_P7_Pos           7            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P7               (_U(0x1) << GPIO_IMR0C_P7_Pos)
#define GPIO_IMR0C_P8_Pos           8            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P8               (_U(0x1) << GPIO_IMR0C_P8_Pos)
#define GPIO_IMR0C_P9_Pos           9            /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P9               (_U(0x1) << GPIO_IMR0C_P9_Pos)
#define GPIO_IMR0C_P10_Pos          10           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P10              (_U(0x1) << GPIO_IMR0C_P10_Pos)
#define GPIO_IMR0C_P11_Pos          11           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P11              (_U(0x1) << GPIO_IMR0C_P11_Pos)
#define GPIO_IMR0C_P12_Pos          12           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P12              (_U(0x1) << GPIO_IMR0C_P12_Pos)
#define GPIO_IMR0C_P13_Pos          13           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P13              (_U(0x1) << GPIO_IMR0C_P13_Pos)
#define GPIO_IMR0C_P14_Pos          14           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P14              (_U(0x1) << GPIO_IMR0C_P14_Pos)
#define GPIO_IMR0C_P15_Pos          15           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P15              (_U(0x1) << GPIO_IMR0C_P15_Pos)
#define GPIO_IMR0C_P16_Pos          16           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P16              (_U(0x1) << GPIO_IMR0C_P16_Pos)
#define GPIO_IMR0C_P17_Pos          17           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P17              (_U(0x1) << GPIO_IMR0C_P17_Pos)
#define GPIO_IMR0C_P18_Pos          18           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P18              (_U(0x1) << GPIO_IMR0C_P18_Pos)
#define GPIO_IMR0C_P19_Pos          19           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P19              (_U(0x1) << GPIO_IMR0C_P19_Pos)
#define GPIO_IMR0C_P20_Pos          20           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P20              (_U(0x1) << GPIO_IMR0C_P20_Pos)
#define GPIO_IMR0C_P21_Pos          21           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P21              (_U(0x1) << GPIO_IMR0C_P21_Pos)
#define GPIO_IMR0C_P22_Pos          22           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P22              (_U(0x1) << GPIO_IMR0C_P22_Pos)
#define GPIO_IMR0C_P23_Pos          23           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P23              (_U(0x1) << GPIO_IMR0C_P23_Pos)
#define GPIO_IMR0C_P24_Pos          24           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P24              (_U(0x1) << GPIO_IMR0C_P24_Pos)
#define GPIO_IMR0C_P25_Pos          25           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P25              (_U(0x1) << GPIO_IMR0C_P25_Pos)
#define GPIO_IMR0C_P26_Pos          26           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P26              (_U(0x1) << GPIO_IMR0C_P26_Pos)
#define GPIO_IMR0C_P27_Pos          27           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P27              (_U(0x1) << GPIO_IMR0C_P27_Pos)
#define GPIO_IMR0C_P28_Pos          28           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P28              (_U(0x1) << GPIO_IMR0C_P28_Pos)
#define GPIO_IMR0C_P29_Pos          29           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P29              (_U(0x1) << GPIO_IMR0C_P29_Pos)
#define GPIO_IMR0C_P30_Pos          30           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P30              (_U(0x1) << GPIO_IMR0C_P30_Pos)
#define GPIO_IMR0C_P31_Pos          31           /**< \brief (GPIO_IMR0C) Interrupt Mode Bit 0 */
#define GPIO_IMR0C_P31              (_U(0x1) << GPIO_IMR0C_P31_Pos)
#define GPIO_IMR0C_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_IMR0C) MASK Register */

/* -------- GPIO_IMR0T : (GPIO Offset: 0x0AC) ( /W 32) port Interrupt Mode Register 0 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 0               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 0               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 0               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 0               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 0               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 0               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 0               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 0               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 0               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 0               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 0               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 0               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 0               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 0               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 0               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 0               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 0               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 0               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 0               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 0               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 0               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 0               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 0               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 0               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 0               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 0               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 0               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 0               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 0               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 0               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 0               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 0               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR0T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR0T_OFFSET           0x0AC        /**< \brief (GPIO_IMR0T offset) Interrupt Mode Register 0 - Toggle */

#define GPIO_IMR0T_P0_Pos           0            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P0               (_U(0x1) << GPIO_IMR0T_P0_Pos)
#define GPIO_IMR0T_P1_Pos           1            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P1               (_U(0x1) << GPIO_IMR0T_P1_Pos)
#define GPIO_IMR0T_P2_Pos           2            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P2               (_U(0x1) << GPIO_IMR0T_P2_Pos)
#define GPIO_IMR0T_P3_Pos           3            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P3               (_U(0x1) << GPIO_IMR0T_P3_Pos)
#define GPIO_IMR0T_P4_Pos           4            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P4               (_U(0x1) << GPIO_IMR0T_P4_Pos)
#define GPIO_IMR0T_P5_Pos           5            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P5               (_U(0x1) << GPIO_IMR0T_P5_Pos)
#define GPIO_IMR0T_P6_Pos           6            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P6               (_U(0x1) << GPIO_IMR0T_P6_Pos)
#define GPIO_IMR0T_P7_Pos           7            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P7               (_U(0x1) << GPIO_IMR0T_P7_Pos)
#define GPIO_IMR0T_P8_Pos           8            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P8               (_U(0x1) << GPIO_IMR0T_P8_Pos)
#define GPIO_IMR0T_P9_Pos           9            /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P9               (_U(0x1) << GPIO_IMR0T_P9_Pos)
#define GPIO_IMR0T_P10_Pos          10           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P10              (_U(0x1) << GPIO_IMR0T_P10_Pos)
#define GPIO_IMR0T_P11_Pos          11           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P11              (_U(0x1) << GPIO_IMR0T_P11_Pos)
#define GPIO_IMR0T_P12_Pos          12           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P12              (_U(0x1) << GPIO_IMR0T_P12_Pos)
#define GPIO_IMR0T_P13_Pos          13           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P13              (_U(0x1) << GPIO_IMR0T_P13_Pos)
#define GPIO_IMR0T_P14_Pos          14           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P14              (_U(0x1) << GPIO_IMR0T_P14_Pos)
#define GPIO_IMR0T_P15_Pos          15           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P15              (_U(0x1) << GPIO_IMR0T_P15_Pos)
#define GPIO_IMR0T_P16_Pos          16           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P16              (_U(0x1) << GPIO_IMR0T_P16_Pos)
#define GPIO_IMR0T_P17_Pos          17           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P17              (_U(0x1) << GPIO_IMR0T_P17_Pos)
#define GPIO_IMR0T_P18_Pos          18           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P18              (_U(0x1) << GPIO_IMR0T_P18_Pos)
#define GPIO_IMR0T_P19_Pos          19           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P19              (_U(0x1) << GPIO_IMR0T_P19_Pos)
#define GPIO_IMR0T_P20_Pos          20           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P20              (_U(0x1) << GPIO_IMR0T_P20_Pos)
#define GPIO_IMR0T_P21_Pos          21           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P21              (_U(0x1) << GPIO_IMR0T_P21_Pos)
#define GPIO_IMR0T_P22_Pos          22           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P22              (_U(0x1) << GPIO_IMR0T_P22_Pos)
#define GPIO_IMR0T_P23_Pos          23           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P23              (_U(0x1) << GPIO_IMR0T_P23_Pos)
#define GPIO_IMR0T_P24_Pos          24           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P24              (_U(0x1) << GPIO_IMR0T_P24_Pos)
#define GPIO_IMR0T_P25_Pos          25           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P25              (_U(0x1) << GPIO_IMR0T_P25_Pos)
#define GPIO_IMR0T_P26_Pos          26           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P26              (_U(0x1) << GPIO_IMR0T_P26_Pos)
#define GPIO_IMR0T_P27_Pos          27           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P27              (_U(0x1) << GPIO_IMR0T_P27_Pos)
#define GPIO_IMR0T_P28_Pos          28           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P28              (_U(0x1) << GPIO_IMR0T_P28_Pos)
#define GPIO_IMR0T_P29_Pos          29           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P29              (_U(0x1) << GPIO_IMR0T_P29_Pos)
#define GPIO_IMR0T_P30_Pos          30           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P30              (_U(0x1) << GPIO_IMR0T_P30_Pos)
#define GPIO_IMR0T_P31_Pos          31           /**< \brief (GPIO_IMR0T) Interrupt Mode Bit 0 */
#define GPIO_IMR0T_P31              (_U(0x1) << GPIO_IMR0T_P31_Pos)
#define GPIO_IMR0T_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_IMR0T) MASK Register */

/* -------- GPIO_IMR1 : (GPIO Offset: 0x0B0) (R/W 32) port Interrupt Mode Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 1               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 1               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 1               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 1               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 1               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 1               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 1               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 1               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 1               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 1               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 1               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 1               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 1               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 1               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 1               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 1               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 1               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 1               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 1               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 1               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 1               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 1               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 1               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 1               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 1               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 1               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 1               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 1               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 1               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 1               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 1               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 1               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR1_OFFSET            0x0B0        /**< \brief (GPIO_IMR1 offset) Interrupt Mode Register 1 */

#define GPIO_IMR1_P0_Pos            0            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P0                (_U(0x1) << GPIO_IMR1_P0_Pos)
#define GPIO_IMR1_P1_Pos            1            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P1                (_U(0x1) << GPIO_IMR1_P1_Pos)
#define GPIO_IMR1_P2_Pos            2            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P2                (_U(0x1) << GPIO_IMR1_P2_Pos)
#define GPIO_IMR1_P3_Pos            3            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P3                (_U(0x1) << GPIO_IMR1_P3_Pos)
#define GPIO_IMR1_P4_Pos            4            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P4                (_U(0x1) << GPIO_IMR1_P4_Pos)
#define GPIO_IMR1_P5_Pos            5            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P5                (_U(0x1) << GPIO_IMR1_P5_Pos)
#define GPIO_IMR1_P6_Pos            6            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P6                (_U(0x1) << GPIO_IMR1_P6_Pos)
#define GPIO_IMR1_P7_Pos            7            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P7                (_U(0x1) << GPIO_IMR1_P7_Pos)
#define GPIO_IMR1_P8_Pos            8            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P8                (_U(0x1) << GPIO_IMR1_P8_Pos)
#define GPIO_IMR1_P9_Pos            9            /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P9                (_U(0x1) << GPIO_IMR1_P9_Pos)
#define GPIO_IMR1_P10_Pos           10           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P10               (_U(0x1) << GPIO_IMR1_P10_Pos)
#define GPIO_IMR1_P11_Pos           11           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P11               (_U(0x1) << GPIO_IMR1_P11_Pos)
#define GPIO_IMR1_P12_Pos           12           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P12               (_U(0x1) << GPIO_IMR1_P12_Pos)
#define GPIO_IMR1_P13_Pos           13           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P13               (_U(0x1) << GPIO_IMR1_P13_Pos)
#define GPIO_IMR1_P14_Pos           14           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P14               (_U(0x1) << GPIO_IMR1_P14_Pos)
#define GPIO_IMR1_P15_Pos           15           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P15               (_U(0x1) << GPIO_IMR1_P15_Pos)
#define GPIO_IMR1_P16_Pos           16           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P16               (_U(0x1) << GPIO_IMR1_P16_Pos)
#define GPIO_IMR1_P17_Pos           17           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P17               (_U(0x1) << GPIO_IMR1_P17_Pos)
#define GPIO_IMR1_P18_Pos           18           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P18               (_U(0x1) << GPIO_IMR1_P18_Pos)
#define GPIO_IMR1_P19_Pos           19           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P19               (_U(0x1) << GPIO_IMR1_P19_Pos)
#define GPIO_IMR1_P20_Pos           20           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P20               (_U(0x1) << GPIO_IMR1_P20_Pos)
#define GPIO_IMR1_P21_Pos           21           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P21               (_U(0x1) << GPIO_IMR1_P21_Pos)
#define GPIO_IMR1_P22_Pos           22           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P22               (_U(0x1) << GPIO_IMR1_P22_Pos)
#define GPIO_IMR1_P23_Pos           23           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P23               (_U(0x1) << GPIO_IMR1_P23_Pos)
#define GPIO_IMR1_P24_Pos           24           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P24               (_U(0x1) << GPIO_IMR1_P24_Pos)
#define GPIO_IMR1_P25_Pos           25           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P25               (_U(0x1) << GPIO_IMR1_P25_Pos)
#define GPIO_IMR1_P26_Pos           26           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P26               (_U(0x1) << GPIO_IMR1_P26_Pos)
#define GPIO_IMR1_P27_Pos           27           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P27               (_U(0x1) << GPIO_IMR1_P27_Pos)
#define GPIO_IMR1_P28_Pos           28           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P28               (_U(0x1) << GPIO_IMR1_P28_Pos)
#define GPIO_IMR1_P29_Pos           29           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P29               (_U(0x1) << GPIO_IMR1_P29_Pos)
#define GPIO_IMR1_P30_Pos           30           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P30               (_U(0x1) << GPIO_IMR1_P30_Pos)
#define GPIO_IMR1_P31_Pos           31           /**< \brief (GPIO_IMR1) Interrupt Mode Bit 1 */
#define GPIO_IMR1_P31               (_U(0x1) << GPIO_IMR1_P31_Pos)
#define GPIO_IMR1_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_IMR1) MASK Register */

/* -------- GPIO_IMR1S : (GPIO Offset: 0x0B4) ( /W 32) port Interrupt Mode Register 1 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 1               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 1               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 1               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 1               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 1               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 1               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 1               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 1               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 1               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 1               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 1               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 1               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 1               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 1               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 1               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 1               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 1               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 1               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 1               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 1               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 1               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 1               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 1               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 1               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 1               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 1               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 1               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 1               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 1               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 1               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 1               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 1               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR1S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR1S_OFFSET           0x0B4        /**< \brief (GPIO_IMR1S offset) Interrupt Mode Register 1 - Set */

#define GPIO_IMR1S_P0_Pos           0            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P0               (_U(0x1) << GPIO_IMR1S_P0_Pos)
#define GPIO_IMR1S_P1_Pos           1            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P1               (_U(0x1) << GPIO_IMR1S_P1_Pos)
#define GPIO_IMR1S_P2_Pos           2            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P2               (_U(0x1) << GPIO_IMR1S_P2_Pos)
#define GPIO_IMR1S_P3_Pos           3            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P3               (_U(0x1) << GPIO_IMR1S_P3_Pos)
#define GPIO_IMR1S_P4_Pos           4            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P4               (_U(0x1) << GPIO_IMR1S_P4_Pos)
#define GPIO_IMR1S_P5_Pos           5            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P5               (_U(0x1) << GPIO_IMR1S_P5_Pos)
#define GPIO_IMR1S_P6_Pos           6            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P6               (_U(0x1) << GPIO_IMR1S_P6_Pos)
#define GPIO_IMR1S_P7_Pos           7            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P7               (_U(0x1) << GPIO_IMR1S_P7_Pos)
#define GPIO_IMR1S_P8_Pos           8            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P8               (_U(0x1) << GPIO_IMR1S_P8_Pos)
#define GPIO_IMR1S_P9_Pos           9            /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P9               (_U(0x1) << GPIO_IMR1S_P9_Pos)
#define GPIO_IMR1S_P10_Pos          10           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P10              (_U(0x1) << GPIO_IMR1S_P10_Pos)
#define GPIO_IMR1S_P11_Pos          11           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P11              (_U(0x1) << GPIO_IMR1S_P11_Pos)
#define GPIO_IMR1S_P12_Pos          12           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P12              (_U(0x1) << GPIO_IMR1S_P12_Pos)
#define GPIO_IMR1S_P13_Pos          13           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P13              (_U(0x1) << GPIO_IMR1S_P13_Pos)
#define GPIO_IMR1S_P14_Pos          14           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P14              (_U(0x1) << GPIO_IMR1S_P14_Pos)
#define GPIO_IMR1S_P15_Pos          15           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P15              (_U(0x1) << GPIO_IMR1S_P15_Pos)
#define GPIO_IMR1S_P16_Pos          16           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P16              (_U(0x1) << GPIO_IMR1S_P16_Pos)
#define GPIO_IMR1S_P17_Pos          17           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P17              (_U(0x1) << GPIO_IMR1S_P17_Pos)
#define GPIO_IMR1S_P18_Pos          18           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P18              (_U(0x1) << GPIO_IMR1S_P18_Pos)
#define GPIO_IMR1S_P19_Pos          19           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P19              (_U(0x1) << GPIO_IMR1S_P19_Pos)
#define GPIO_IMR1S_P20_Pos          20           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P20              (_U(0x1) << GPIO_IMR1S_P20_Pos)
#define GPIO_IMR1S_P21_Pos          21           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P21              (_U(0x1) << GPIO_IMR1S_P21_Pos)
#define GPIO_IMR1S_P22_Pos          22           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P22              (_U(0x1) << GPIO_IMR1S_P22_Pos)
#define GPIO_IMR1S_P23_Pos          23           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P23              (_U(0x1) << GPIO_IMR1S_P23_Pos)
#define GPIO_IMR1S_P24_Pos          24           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P24              (_U(0x1) << GPIO_IMR1S_P24_Pos)
#define GPIO_IMR1S_P25_Pos          25           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P25              (_U(0x1) << GPIO_IMR1S_P25_Pos)
#define GPIO_IMR1S_P26_Pos          26           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P26              (_U(0x1) << GPIO_IMR1S_P26_Pos)
#define GPIO_IMR1S_P27_Pos          27           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P27              (_U(0x1) << GPIO_IMR1S_P27_Pos)
#define GPIO_IMR1S_P28_Pos          28           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P28              (_U(0x1) << GPIO_IMR1S_P28_Pos)
#define GPIO_IMR1S_P29_Pos          29           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P29              (_U(0x1) << GPIO_IMR1S_P29_Pos)
#define GPIO_IMR1S_P30_Pos          30           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P30              (_U(0x1) << GPIO_IMR1S_P30_Pos)
#define GPIO_IMR1S_P31_Pos          31           /**< \brief (GPIO_IMR1S) Interrupt Mode Bit 1 */
#define GPIO_IMR1S_P31              (_U(0x1) << GPIO_IMR1S_P31_Pos)
#define GPIO_IMR1S_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_IMR1S) MASK Register */

/* -------- GPIO_IMR1C : (GPIO Offset: 0x0B8) ( /W 32) port Interrupt Mode Register 1 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 1               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 1               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 1               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 1               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 1               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 1               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 1               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 1               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 1               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 1               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 1               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 1               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 1               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 1               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 1               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 1               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 1               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 1               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 1               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 1               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 1               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 1               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 1               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 1               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 1               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 1               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 1               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 1               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 1               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 1               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 1               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 1               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR1C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR1C_OFFSET           0x0B8        /**< \brief (GPIO_IMR1C offset) Interrupt Mode Register 1 - Clear */

#define GPIO_IMR1C_P0_Pos           0            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P0               (_U(0x1) << GPIO_IMR1C_P0_Pos)
#define GPIO_IMR1C_P1_Pos           1            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P1               (_U(0x1) << GPIO_IMR1C_P1_Pos)
#define GPIO_IMR1C_P2_Pos           2            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P2               (_U(0x1) << GPIO_IMR1C_P2_Pos)
#define GPIO_IMR1C_P3_Pos           3            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P3               (_U(0x1) << GPIO_IMR1C_P3_Pos)
#define GPIO_IMR1C_P4_Pos           4            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P4               (_U(0x1) << GPIO_IMR1C_P4_Pos)
#define GPIO_IMR1C_P5_Pos           5            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P5               (_U(0x1) << GPIO_IMR1C_P5_Pos)
#define GPIO_IMR1C_P6_Pos           6            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P6               (_U(0x1) << GPIO_IMR1C_P6_Pos)
#define GPIO_IMR1C_P7_Pos           7            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P7               (_U(0x1) << GPIO_IMR1C_P7_Pos)
#define GPIO_IMR1C_P8_Pos           8            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P8               (_U(0x1) << GPIO_IMR1C_P8_Pos)
#define GPIO_IMR1C_P9_Pos           9            /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P9               (_U(0x1) << GPIO_IMR1C_P9_Pos)
#define GPIO_IMR1C_P10_Pos          10           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P10              (_U(0x1) << GPIO_IMR1C_P10_Pos)
#define GPIO_IMR1C_P11_Pos          11           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P11              (_U(0x1) << GPIO_IMR1C_P11_Pos)
#define GPIO_IMR1C_P12_Pos          12           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P12              (_U(0x1) << GPIO_IMR1C_P12_Pos)
#define GPIO_IMR1C_P13_Pos          13           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P13              (_U(0x1) << GPIO_IMR1C_P13_Pos)
#define GPIO_IMR1C_P14_Pos          14           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P14              (_U(0x1) << GPIO_IMR1C_P14_Pos)
#define GPIO_IMR1C_P15_Pos          15           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P15              (_U(0x1) << GPIO_IMR1C_P15_Pos)
#define GPIO_IMR1C_P16_Pos          16           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P16              (_U(0x1) << GPIO_IMR1C_P16_Pos)
#define GPIO_IMR1C_P17_Pos          17           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P17              (_U(0x1) << GPIO_IMR1C_P17_Pos)
#define GPIO_IMR1C_P18_Pos          18           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P18              (_U(0x1) << GPIO_IMR1C_P18_Pos)
#define GPIO_IMR1C_P19_Pos          19           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P19              (_U(0x1) << GPIO_IMR1C_P19_Pos)
#define GPIO_IMR1C_P20_Pos          20           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P20              (_U(0x1) << GPIO_IMR1C_P20_Pos)
#define GPIO_IMR1C_P21_Pos          21           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P21              (_U(0x1) << GPIO_IMR1C_P21_Pos)
#define GPIO_IMR1C_P22_Pos          22           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P22              (_U(0x1) << GPIO_IMR1C_P22_Pos)
#define GPIO_IMR1C_P23_Pos          23           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P23              (_U(0x1) << GPIO_IMR1C_P23_Pos)
#define GPIO_IMR1C_P24_Pos          24           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P24              (_U(0x1) << GPIO_IMR1C_P24_Pos)
#define GPIO_IMR1C_P25_Pos          25           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P25              (_U(0x1) << GPIO_IMR1C_P25_Pos)
#define GPIO_IMR1C_P26_Pos          26           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P26              (_U(0x1) << GPIO_IMR1C_P26_Pos)
#define GPIO_IMR1C_P27_Pos          27           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P27              (_U(0x1) << GPIO_IMR1C_P27_Pos)
#define GPIO_IMR1C_P28_Pos          28           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P28              (_U(0x1) << GPIO_IMR1C_P28_Pos)
#define GPIO_IMR1C_P29_Pos          29           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P29              (_U(0x1) << GPIO_IMR1C_P29_Pos)
#define GPIO_IMR1C_P30_Pos          30           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P30              (_U(0x1) << GPIO_IMR1C_P30_Pos)
#define GPIO_IMR1C_P31_Pos          31           /**< \brief (GPIO_IMR1C) Interrupt Mode Bit 1 */
#define GPIO_IMR1C_P31              (_U(0x1) << GPIO_IMR1C_P31_Pos)
#define GPIO_IMR1C_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_IMR1C) MASK Register */

/* -------- GPIO_IMR1T : (GPIO Offset: 0x0BC) ( /W 32) port Interrupt Mode Register 1 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Mode Bit 1               */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Mode Bit 1               */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Mode Bit 1               */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Mode Bit 1               */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Mode Bit 1               */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Mode Bit 1               */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Mode Bit 1               */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Mode Bit 1               */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Mode Bit 1               */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Mode Bit 1               */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Mode Bit 1               */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Mode Bit 1               */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Mode Bit 1               */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Mode Bit 1               */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Mode Bit 1               */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Mode Bit 1               */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Mode Bit 1               */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Mode Bit 1               */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Mode Bit 1               */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Mode Bit 1               */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Mode Bit 1               */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Mode Bit 1               */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Mode Bit 1               */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Mode Bit 1               */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Mode Bit 1               */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Mode Bit 1               */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Mode Bit 1               */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Mode Bit 1               */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Mode Bit 1               */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Mode Bit 1               */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Mode Bit 1               */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Mode Bit 1               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IMR1T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IMR1T_OFFSET           0x0BC        /**< \brief (GPIO_IMR1T offset) Interrupt Mode Register 1 - Toggle */

#define GPIO_IMR1T_P0_Pos           0            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P0               (_U(0x1) << GPIO_IMR1T_P0_Pos)
#define GPIO_IMR1T_P1_Pos           1            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P1               (_U(0x1) << GPIO_IMR1T_P1_Pos)
#define GPIO_IMR1T_P2_Pos           2            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P2               (_U(0x1) << GPIO_IMR1T_P2_Pos)
#define GPIO_IMR1T_P3_Pos           3            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P3               (_U(0x1) << GPIO_IMR1T_P3_Pos)
#define GPIO_IMR1T_P4_Pos           4            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P4               (_U(0x1) << GPIO_IMR1T_P4_Pos)
#define GPIO_IMR1T_P5_Pos           5            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P5               (_U(0x1) << GPIO_IMR1T_P5_Pos)
#define GPIO_IMR1T_P6_Pos           6            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P6               (_U(0x1) << GPIO_IMR1T_P6_Pos)
#define GPIO_IMR1T_P7_Pos           7            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P7               (_U(0x1) << GPIO_IMR1T_P7_Pos)
#define GPIO_IMR1T_P8_Pos           8            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P8               (_U(0x1) << GPIO_IMR1T_P8_Pos)
#define GPIO_IMR1T_P9_Pos           9            /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P9               (_U(0x1) << GPIO_IMR1T_P9_Pos)
#define GPIO_IMR1T_P10_Pos          10           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P10              (_U(0x1) << GPIO_IMR1T_P10_Pos)
#define GPIO_IMR1T_P11_Pos          11           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P11              (_U(0x1) << GPIO_IMR1T_P11_Pos)
#define GPIO_IMR1T_P12_Pos          12           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P12              (_U(0x1) << GPIO_IMR1T_P12_Pos)
#define GPIO_IMR1T_P13_Pos          13           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P13              (_U(0x1) << GPIO_IMR1T_P13_Pos)
#define GPIO_IMR1T_P14_Pos          14           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P14              (_U(0x1) << GPIO_IMR1T_P14_Pos)
#define GPIO_IMR1T_P15_Pos          15           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P15              (_U(0x1) << GPIO_IMR1T_P15_Pos)
#define GPIO_IMR1T_P16_Pos          16           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P16              (_U(0x1) << GPIO_IMR1T_P16_Pos)
#define GPIO_IMR1T_P17_Pos          17           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P17              (_U(0x1) << GPIO_IMR1T_P17_Pos)
#define GPIO_IMR1T_P18_Pos          18           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P18              (_U(0x1) << GPIO_IMR1T_P18_Pos)
#define GPIO_IMR1T_P19_Pos          19           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P19              (_U(0x1) << GPIO_IMR1T_P19_Pos)
#define GPIO_IMR1T_P20_Pos          20           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P20              (_U(0x1) << GPIO_IMR1T_P20_Pos)
#define GPIO_IMR1T_P21_Pos          21           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P21              (_U(0x1) << GPIO_IMR1T_P21_Pos)
#define GPIO_IMR1T_P22_Pos          22           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P22              (_U(0x1) << GPIO_IMR1T_P22_Pos)
#define GPIO_IMR1T_P23_Pos          23           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P23              (_U(0x1) << GPIO_IMR1T_P23_Pos)
#define GPIO_IMR1T_P24_Pos          24           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P24              (_U(0x1) << GPIO_IMR1T_P24_Pos)
#define GPIO_IMR1T_P25_Pos          25           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P25              (_U(0x1) << GPIO_IMR1T_P25_Pos)
#define GPIO_IMR1T_P26_Pos          26           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P26              (_U(0x1) << GPIO_IMR1T_P26_Pos)
#define GPIO_IMR1T_P27_Pos          27           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P27              (_U(0x1) << GPIO_IMR1T_P27_Pos)
#define GPIO_IMR1T_P28_Pos          28           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P28              (_U(0x1) << GPIO_IMR1T_P28_Pos)
#define GPIO_IMR1T_P29_Pos          29           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P29              (_U(0x1) << GPIO_IMR1T_P29_Pos)
#define GPIO_IMR1T_P30_Pos          30           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P30              (_U(0x1) << GPIO_IMR1T_P30_Pos)
#define GPIO_IMR1T_P31_Pos          31           /**< \brief (GPIO_IMR1T) Interrupt Mode Bit 1 */
#define GPIO_IMR1T_P31              (_U(0x1) << GPIO_IMR1T_P31_Pos)
#define GPIO_IMR1T_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_IMR1T) MASK Register */

/* -------- GPIO_GFER : (GPIO Offset: 0x0C0) (R/W 32) port Glitch Filter Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Glitch Filter Enable               */
    uint32_t P1:1;             /*!< bit:      1  Glitch Filter Enable               */
    uint32_t P2:1;             /*!< bit:      2  Glitch Filter Enable               */
    uint32_t P3:1;             /*!< bit:      3  Glitch Filter Enable               */
    uint32_t P4:1;             /*!< bit:      4  Glitch Filter Enable               */
    uint32_t P5:1;             /*!< bit:      5  Glitch Filter Enable               */
    uint32_t P6:1;             /*!< bit:      6  Glitch Filter Enable               */
    uint32_t P7:1;             /*!< bit:      7  Glitch Filter Enable               */
    uint32_t P8:1;             /*!< bit:      8  Glitch Filter Enable               */
    uint32_t P9:1;             /*!< bit:      9  Glitch Filter Enable               */
    uint32_t P10:1;            /*!< bit:     10  Glitch Filter Enable               */
    uint32_t P11:1;            /*!< bit:     11  Glitch Filter Enable               */
    uint32_t P12:1;            /*!< bit:     12  Glitch Filter Enable               */
    uint32_t P13:1;            /*!< bit:     13  Glitch Filter Enable               */
    uint32_t P14:1;            /*!< bit:     14  Glitch Filter Enable               */
    uint32_t P15:1;            /*!< bit:     15  Glitch Filter Enable               */
    uint32_t P16:1;            /*!< bit:     16  Glitch Filter Enable               */
    uint32_t P17:1;            /*!< bit:     17  Glitch Filter Enable               */
    uint32_t P18:1;            /*!< bit:     18  Glitch Filter Enable               */
    uint32_t P19:1;            /*!< bit:     19  Glitch Filter Enable               */
    uint32_t P20:1;            /*!< bit:     20  Glitch Filter Enable               */
    uint32_t P21:1;            /*!< bit:     21  Glitch Filter Enable               */
    uint32_t P22:1;            /*!< bit:     22  Glitch Filter Enable               */
    uint32_t P23:1;            /*!< bit:     23  Glitch Filter Enable               */
    uint32_t P24:1;            /*!< bit:     24  Glitch Filter Enable               */
    uint32_t P25:1;            /*!< bit:     25  Glitch Filter Enable               */
    uint32_t P26:1;            /*!< bit:     26  Glitch Filter Enable               */
    uint32_t P27:1;            /*!< bit:     27  Glitch Filter Enable               */
    uint32_t P28:1;            /*!< bit:     28  Glitch Filter Enable               */
    uint32_t P29:1;            /*!< bit:     29  Glitch Filter Enable               */
    uint32_t P30:1;            /*!< bit:     30  Glitch Filter Enable               */
    uint32_t P31:1;            /*!< bit:     31  Glitch Filter Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GFER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GFER_OFFSET            0x0C0        /**< \brief (GPIO_GFER offset) Glitch Filter Enable Register */

#define GPIO_GFER_P0_Pos            0            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P0                (_U(0x1) << GPIO_GFER_P0_Pos)
#define GPIO_GFER_P1_Pos            1            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P1                (_U(0x1) << GPIO_GFER_P1_Pos)
#define GPIO_GFER_P2_Pos            2            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P2                (_U(0x1) << GPIO_GFER_P2_Pos)
#define GPIO_GFER_P3_Pos            3            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P3                (_U(0x1) << GPIO_GFER_P3_Pos)
#define GPIO_GFER_P4_Pos            4            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P4                (_U(0x1) << GPIO_GFER_P4_Pos)
#define GPIO_GFER_P5_Pos            5            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P5                (_U(0x1) << GPIO_GFER_P5_Pos)
#define GPIO_GFER_P6_Pos            6            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P6                (_U(0x1) << GPIO_GFER_P6_Pos)
#define GPIO_GFER_P7_Pos            7            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P7                (_U(0x1) << GPIO_GFER_P7_Pos)
#define GPIO_GFER_P8_Pos            8            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P8                (_U(0x1) << GPIO_GFER_P8_Pos)
#define GPIO_GFER_P9_Pos            9            /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P9                (_U(0x1) << GPIO_GFER_P9_Pos)
#define GPIO_GFER_P10_Pos           10           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P10               (_U(0x1) << GPIO_GFER_P10_Pos)
#define GPIO_GFER_P11_Pos           11           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P11               (_U(0x1) << GPIO_GFER_P11_Pos)
#define GPIO_GFER_P12_Pos           12           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P12               (_U(0x1) << GPIO_GFER_P12_Pos)
#define GPIO_GFER_P13_Pos           13           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P13               (_U(0x1) << GPIO_GFER_P13_Pos)
#define GPIO_GFER_P14_Pos           14           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P14               (_U(0x1) << GPIO_GFER_P14_Pos)
#define GPIO_GFER_P15_Pos           15           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P15               (_U(0x1) << GPIO_GFER_P15_Pos)
#define GPIO_GFER_P16_Pos           16           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P16               (_U(0x1) << GPIO_GFER_P16_Pos)
#define GPIO_GFER_P17_Pos           17           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P17               (_U(0x1) << GPIO_GFER_P17_Pos)
#define GPIO_GFER_P18_Pos           18           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P18               (_U(0x1) << GPIO_GFER_P18_Pos)
#define GPIO_GFER_P19_Pos           19           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P19               (_U(0x1) << GPIO_GFER_P19_Pos)
#define GPIO_GFER_P20_Pos           20           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P20               (_U(0x1) << GPIO_GFER_P20_Pos)
#define GPIO_GFER_P21_Pos           21           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P21               (_U(0x1) << GPIO_GFER_P21_Pos)
#define GPIO_GFER_P22_Pos           22           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P22               (_U(0x1) << GPIO_GFER_P22_Pos)
#define GPIO_GFER_P23_Pos           23           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P23               (_U(0x1) << GPIO_GFER_P23_Pos)
#define GPIO_GFER_P24_Pos           24           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P24               (_U(0x1) << GPIO_GFER_P24_Pos)
#define GPIO_GFER_P25_Pos           25           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P25               (_U(0x1) << GPIO_GFER_P25_Pos)
#define GPIO_GFER_P26_Pos           26           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P26               (_U(0x1) << GPIO_GFER_P26_Pos)
#define GPIO_GFER_P27_Pos           27           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P27               (_U(0x1) << GPIO_GFER_P27_Pos)
#define GPIO_GFER_P28_Pos           28           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P28               (_U(0x1) << GPIO_GFER_P28_Pos)
#define GPIO_GFER_P29_Pos           29           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P29               (_U(0x1) << GPIO_GFER_P29_Pos)
#define GPIO_GFER_P30_Pos           30           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P30               (_U(0x1) << GPIO_GFER_P30_Pos)
#define GPIO_GFER_P31_Pos           31           /**< \brief (GPIO_GFER) Glitch Filter Enable */
#define GPIO_GFER_P31               (_U(0x1) << GPIO_GFER_P31_Pos)
#define GPIO_GFER_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_GFER) MASK Register */

/* -------- GPIO_GFERS : (GPIO Offset: 0x0C4) ( /W 32) port Glitch Filter Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Glitch Filter Enable               */
    uint32_t P1:1;             /*!< bit:      1  Glitch Filter Enable               */
    uint32_t P2:1;             /*!< bit:      2  Glitch Filter Enable               */
    uint32_t P3:1;             /*!< bit:      3  Glitch Filter Enable               */
    uint32_t P4:1;             /*!< bit:      4  Glitch Filter Enable               */
    uint32_t P5:1;             /*!< bit:      5  Glitch Filter Enable               */
    uint32_t P6:1;             /*!< bit:      6  Glitch Filter Enable               */
    uint32_t P7:1;             /*!< bit:      7  Glitch Filter Enable               */
    uint32_t P8:1;             /*!< bit:      8  Glitch Filter Enable               */
    uint32_t P9:1;             /*!< bit:      9  Glitch Filter Enable               */
    uint32_t P10:1;            /*!< bit:     10  Glitch Filter Enable               */
    uint32_t P11:1;            /*!< bit:     11  Glitch Filter Enable               */
    uint32_t P12:1;            /*!< bit:     12  Glitch Filter Enable               */
    uint32_t P13:1;            /*!< bit:     13  Glitch Filter Enable               */
    uint32_t P14:1;            /*!< bit:     14  Glitch Filter Enable               */
    uint32_t P15:1;            /*!< bit:     15  Glitch Filter Enable               */
    uint32_t P16:1;            /*!< bit:     16  Glitch Filter Enable               */
    uint32_t P17:1;            /*!< bit:     17  Glitch Filter Enable               */
    uint32_t P18:1;            /*!< bit:     18  Glitch Filter Enable               */
    uint32_t P19:1;            /*!< bit:     19  Glitch Filter Enable               */
    uint32_t P20:1;            /*!< bit:     20  Glitch Filter Enable               */
    uint32_t P21:1;            /*!< bit:     21  Glitch Filter Enable               */
    uint32_t P22:1;            /*!< bit:     22  Glitch Filter Enable               */
    uint32_t P23:1;            /*!< bit:     23  Glitch Filter Enable               */
    uint32_t P24:1;            /*!< bit:     24  Glitch Filter Enable               */
    uint32_t P25:1;            /*!< bit:     25  Glitch Filter Enable               */
    uint32_t P26:1;            /*!< bit:     26  Glitch Filter Enable               */
    uint32_t P27:1;            /*!< bit:     27  Glitch Filter Enable               */
    uint32_t P28:1;            /*!< bit:     28  Glitch Filter Enable               */
    uint32_t P29:1;            /*!< bit:     29  Glitch Filter Enable               */
    uint32_t P30:1;            /*!< bit:     30  Glitch Filter Enable               */
    uint32_t P31:1;            /*!< bit:     31  Glitch Filter Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GFERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GFERS_OFFSET           0x0C4        /**< \brief (GPIO_GFERS offset) Glitch Filter Enable Register - Set */

#define GPIO_GFERS_P0_Pos           0            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P0               (_U(0x1) << GPIO_GFERS_P0_Pos)
#define GPIO_GFERS_P1_Pos           1            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P1               (_U(0x1) << GPIO_GFERS_P1_Pos)
#define GPIO_GFERS_P2_Pos           2            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P2               (_U(0x1) << GPIO_GFERS_P2_Pos)
#define GPIO_GFERS_P3_Pos           3            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P3               (_U(0x1) << GPIO_GFERS_P3_Pos)
#define GPIO_GFERS_P4_Pos           4            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P4               (_U(0x1) << GPIO_GFERS_P4_Pos)
#define GPIO_GFERS_P5_Pos           5            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P5               (_U(0x1) << GPIO_GFERS_P5_Pos)
#define GPIO_GFERS_P6_Pos           6            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P6               (_U(0x1) << GPIO_GFERS_P6_Pos)
#define GPIO_GFERS_P7_Pos           7            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P7               (_U(0x1) << GPIO_GFERS_P7_Pos)
#define GPIO_GFERS_P8_Pos           8            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P8               (_U(0x1) << GPIO_GFERS_P8_Pos)
#define GPIO_GFERS_P9_Pos           9            /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P9               (_U(0x1) << GPIO_GFERS_P9_Pos)
#define GPIO_GFERS_P10_Pos          10           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P10              (_U(0x1) << GPIO_GFERS_P10_Pos)
#define GPIO_GFERS_P11_Pos          11           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P11              (_U(0x1) << GPIO_GFERS_P11_Pos)
#define GPIO_GFERS_P12_Pos          12           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P12              (_U(0x1) << GPIO_GFERS_P12_Pos)
#define GPIO_GFERS_P13_Pos          13           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P13              (_U(0x1) << GPIO_GFERS_P13_Pos)
#define GPIO_GFERS_P14_Pos          14           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P14              (_U(0x1) << GPIO_GFERS_P14_Pos)
#define GPIO_GFERS_P15_Pos          15           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P15              (_U(0x1) << GPIO_GFERS_P15_Pos)
#define GPIO_GFERS_P16_Pos          16           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P16              (_U(0x1) << GPIO_GFERS_P16_Pos)
#define GPIO_GFERS_P17_Pos          17           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P17              (_U(0x1) << GPIO_GFERS_P17_Pos)
#define GPIO_GFERS_P18_Pos          18           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P18              (_U(0x1) << GPIO_GFERS_P18_Pos)
#define GPIO_GFERS_P19_Pos          19           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P19              (_U(0x1) << GPIO_GFERS_P19_Pos)
#define GPIO_GFERS_P20_Pos          20           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P20              (_U(0x1) << GPIO_GFERS_P20_Pos)
#define GPIO_GFERS_P21_Pos          21           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P21              (_U(0x1) << GPIO_GFERS_P21_Pos)
#define GPIO_GFERS_P22_Pos          22           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P22              (_U(0x1) << GPIO_GFERS_P22_Pos)
#define GPIO_GFERS_P23_Pos          23           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P23              (_U(0x1) << GPIO_GFERS_P23_Pos)
#define GPIO_GFERS_P24_Pos          24           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P24              (_U(0x1) << GPIO_GFERS_P24_Pos)
#define GPIO_GFERS_P25_Pos          25           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P25              (_U(0x1) << GPIO_GFERS_P25_Pos)
#define GPIO_GFERS_P26_Pos          26           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P26              (_U(0x1) << GPIO_GFERS_P26_Pos)
#define GPIO_GFERS_P27_Pos          27           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P27              (_U(0x1) << GPIO_GFERS_P27_Pos)
#define GPIO_GFERS_P28_Pos          28           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P28              (_U(0x1) << GPIO_GFERS_P28_Pos)
#define GPIO_GFERS_P29_Pos          29           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P29              (_U(0x1) << GPIO_GFERS_P29_Pos)
#define GPIO_GFERS_P30_Pos          30           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P30              (_U(0x1) << GPIO_GFERS_P30_Pos)
#define GPIO_GFERS_P31_Pos          31           /**< \brief (GPIO_GFERS) Glitch Filter Enable */
#define GPIO_GFERS_P31              (_U(0x1) << GPIO_GFERS_P31_Pos)
#define GPIO_GFERS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_GFERS) MASK Register */

/* -------- GPIO_GFERC : (GPIO Offset: 0x0C8) ( /W 32) port Glitch Filter Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Glitch Filter Enable               */
    uint32_t P1:1;             /*!< bit:      1  Glitch Filter Enable               */
    uint32_t P2:1;             /*!< bit:      2  Glitch Filter Enable               */
    uint32_t P3:1;             /*!< bit:      3  Glitch Filter Enable               */
    uint32_t P4:1;             /*!< bit:      4  Glitch Filter Enable               */
    uint32_t P5:1;             /*!< bit:      5  Glitch Filter Enable               */
    uint32_t P6:1;             /*!< bit:      6  Glitch Filter Enable               */
    uint32_t P7:1;             /*!< bit:      7  Glitch Filter Enable               */
    uint32_t P8:1;             /*!< bit:      8  Glitch Filter Enable               */
    uint32_t P9:1;             /*!< bit:      9  Glitch Filter Enable               */
    uint32_t P10:1;            /*!< bit:     10  Glitch Filter Enable               */
    uint32_t P11:1;            /*!< bit:     11  Glitch Filter Enable               */
    uint32_t P12:1;            /*!< bit:     12  Glitch Filter Enable               */
    uint32_t P13:1;            /*!< bit:     13  Glitch Filter Enable               */
    uint32_t P14:1;            /*!< bit:     14  Glitch Filter Enable               */
    uint32_t P15:1;            /*!< bit:     15  Glitch Filter Enable               */
    uint32_t P16:1;            /*!< bit:     16  Glitch Filter Enable               */
    uint32_t P17:1;            /*!< bit:     17  Glitch Filter Enable               */
    uint32_t P18:1;            /*!< bit:     18  Glitch Filter Enable               */
    uint32_t P19:1;            /*!< bit:     19  Glitch Filter Enable               */
    uint32_t P20:1;            /*!< bit:     20  Glitch Filter Enable               */
    uint32_t P21:1;            /*!< bit:     21  Glitch Filter Enable               */
    uint32_t P22:1;            /*!< bit:     22  Glitch Filter Enable               */
    uint32_t P23:1;            /*!< bit:     23  Glitch Filter Enable               */
    uint32_t P24:1;            /*!< bit:     24  Glitch Filter Enable               */
    uint32_t P25:1;            /*!< bit:     25  Glitch Filter Enable               */
    uint32_t P26:1;            /*!< bit:     26  Glitch Filter Enable               */
    uint32_t P27:1;            /*!< bit:     27  Glitch Filter Enable               */
    uint32_t P28:1;            /*!< bit:     28  Glitch Filter Enable               */
    uint32_t P29:1;            /*!< bit:     29  Glitch Filter Enable               */
    uint32_t P30:1;            /*!< bit:     30  Glitch Filter Enable               */
    uint32_t P31:1;            /*!< bit:     31  Glitch Filter Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GFERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GFERC_OFFSET           0x0C8        /**< \brief (GPIO_GFERC offset) Glitch Filter Enable Register - Clear */

#define GPIO_GFERC_P0_Pos           0            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P0               (_U(0x1) << GPIO_GFERC_P0_Pos)
#define GPIO_GFERC_P1_Pos           1            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P1               (_U(0x1) << GPIO_GFERC_P1_Pos)
#define GPIO_GFERC_P2_Pos           2            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P2               (_U(0x1) << GPIO_GFERC_P2_Pos)
#define GPIO_GFERC_P3_Pos           3            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P3               (_U(0x1) << GPIO_GFERC_P3_Pos)
#define GPIO_GFERC_P4_Pos           4            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P4               (_U(0x1) << GPIO_GFERC_P4_Pos)
#define GPIO_GFERC_P5_Pos           5            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P5               (_U(0x1) << GPIO_GFERC_P5_Pos)
#define GPIO_GFERC_P6_Pos           6            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P6               (_U(0x1) << GPIO_GFERC_P6_Pos)
#define GPIO_GFERC_P7_Pos           7            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P7               (_U(0x1) << GPIO_GFERC_P7_Pos)
#define GPIO_GFERC_P8_Pos           8            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P8               (_U(0x1) << GPIO_GFERC_P8_Pos)
#define GPIO_GFERC_P9_Pos           9            /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P9               (_U(0x1) << GPIO_GFERC_P9_Pos)
#define GPIO_GFERC_P10_Pos          10           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P10              (_U(0x1) << GPIO_GFERC_P10_Pos)
#define GPIO_GFERC_P11_Pos          11           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P11              (_U(0x1) << GPIO_GFERC_P11_Pos)
#define GPIO_GFERC_P12_Pos          12           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P12              (_U(0x1) << GPIO_GFERC_P12_Pos)
#define GPIO_GFERC_P13_Pos          13           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P13              (_U(0x1) << GPIO_GFERC_P13_Pos)
#define GPIO_GFERC_P14_Pos          14           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P14              (_U(0x1) << GPIO_GFERC_P14_Pos)
#define GPIO_GFERC_P15_Pos          15           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P15              (_U(0x1) << GPIO_GFERC_P15_Pos)
#define GPIO_GFERC_P16_Pos          16           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P16              (_U(0x1) << GPIO_GFERC_P16_Pos)
#define GPIO_GFERC_P17_Pos          17           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P17              (_U(0x1) << GPIO_GFERC_P17_Pos)
#define GPIO_GFERC_P18_Pos          18           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P18              (_U(0x1) << GPIO_GFERC_P18_Pos)
#define GPIO_GFERC_P19_Pos          19           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P19              (_U(0x1) << GPIO_GFERC_P19_Pos)
#define GPIO_GFERC_P20_Pos          20           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P20              (_U(0x1) << GPIO_GFERC_P20_Pos)
#define GPIO_GFERC_P21_Pos          21           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P21              (_U(0x1) << GPIO_GFERC_P21_Pos)
#define GPIO_GFERC_P22_Pos          22           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P22              (_U(0x1) << GPIO_GFERC_P22_Pos)
#define GPIO_GFERC_P23_Pos          23           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P23              (_U(0x1) << GPIO_GFERC_P23_Pos)
#define GPIO_GFERC_P24_Pos          24           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P24              (_U(0x1) << GPIO_GFERC_P24_Pos)
#define GPIO_GFERC_P25_Pos          25           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P25              (_U(0x1) << GPIO_GFERC_P25_Pos)
#define GPIO_GFERC_P26_Pos          26           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P26              (_U(0x1) << GPIO_GFERC_P26_Pos)
#define GPIO_GFERC_P27_Pos          27           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P27              (_U(0x1) << GPIO_GFERC_P27_Pos)
#define GPIO_GFERC_P28_Pos          28           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P28              (_U(0x1) << GPIO_GFERC_P28_Pos)
#define GPIO_GFERC_P29_Pos          29           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P29              (_U(0x1) << GPIO_GFERC_P29_Pos)
#define GPIO_GFERC_P30_Pos          30           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P30              (_U(0x1) << GPIO_GFERC_P30_Pos)
#define GPIO_GFERC_P31_Pos          31           /**< \brief (GPIO_GFERC) Glitch Filter Enable */
#define GPIO_GFERC_P31              (_U(0x1) << GPIO_GFERC_P31_Pos)
#define GPIO_GFERC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_GFERC) MASK Register */

/* -------- GPIO_GFERT : (GPIO Offset: 0x0CC) ( /W 32) port Glitch Filter Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Glitch Filter Enable               */
    uint32_t P1:1;             /*!< bit:      1  Glitch Filter Enable               */
    uint32_t P2:1;             /*!< bit:      2  Glitch Filter Enable               */
    uint32_t P3:1;             /*!< bit:      3  Glitch Filter Enable               */
    uint32_t P4:1;             /*!< bit:      4  Glitch Filter Enable               */
    uint32_t P5:1;             /*!< bit:      5  Glitch Filter Enable               */
    uint32_t P6:1;             /*!< bit:      6  Glitch Filter Enable               */
    uint32_t P7:1;             /*!< bit:      7  Glitch Filter Enable               */
    uint32_t P8:1;             /*!< bit:      8  Glitch Filter Enable               */
    uint32_t P9:1;             /*!< bit:      9  Glitch Filter Enable               */
    uint32_t P10:1;            /*!< bit:     10  Glitch Filter Enable               */
    uint32_t P11:1;            /*!< bit:     11  Glitch Filter Enable               */
    uint32_t P12:1;            /*!< bit:     12  Glitch Filter Enable               */
    uint32_t P13:1;            /*!< bit:     13  Glitch Filter Enable               */
    uint32_t P14:1;            /*!< bit:     14  Glitch Filter Enable               */
    uint32_t P15:1;            /*!< bit:     15  Glitch Filter Enable               */
    uint32_t P16:1;            /*!< bit:     16  Glitch Filter Enable               */
    uint32_t P17:1;            /*!< bit:     17  Glitch Filter Enable               */
    uint32_t P18:1;            /*!< bit:     18  Glitch Filter Enable               */
    uint32_t P19:1;            /*!< bit:     19  Glitch Filter Enable               */
    uint32_t P20:1;            /*!< bit:     20  Glitch Filter Enable               */
    uint32_t P21:1;            /*!< bit:     21  Glitch Filter Enable               */
    uint32_t P22:1;            /*!< bit:     22  Glitch Filter Enable               */
    uint32_t P23:1;            /*!< bit:     23  Glitch Filter Enable               */
    uint32_t P24:1;            /*!< bit:     24  Glitch Filter Enable               */
    uint32_t P25:1;            /*!< bit:     25  Glitch Filter Enable               */
    uint32_t P26:1;            /*!< bit:     26  Glitch Filter Enable               */
    uint32_t P27:1;            /*!< bit:     27  Glitch Filter Enable               */
    uint32_t P28:1;            /*!< bit:     28  Glitch Filter Enable               */
    uint32_t P29:1;            /*!< bit:     29  Glitch Filter Enable               */
    uint32_t P30:1;            /*!< bit:     30  Glitch Filter Enable               */
    uint32_t P31:1;            /*!< bit:     31  Glitch Filter Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_GFERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_GFERT_OFFSET           0x0CC        /**< \brief (GPIO_GFERT offset) Glitch Filter Enable Register - Toggle */

#define GPIO_GFERT_P0_Pos           0            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P0               (_U(0x1) << GPIO_GFERT_P0_Pos)
#define GPIO_GFERT_P1_Pos           1            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P1               (_U(0x1) << GPIO_GFERT_P1_Pos)
#define GPIO_GFERT_P2_Pos           2            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P2               (_U(0x1) << GPIO_GFERT_P2_Pos)
#define GPIO_GFERT_P3_Pos           3            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P3               (_U(0x1) << GPIO_GFERT_P3_Pos)
#define GPIO_GFERT_P4_Pos           4            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P4               (_U(0x1) << GPIO_GFERT_P4_Pos)
#define GPIO_GFERT_P5_Pos           5            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P5               (_U(0x1) << GPIO_GFERT_P5_Pos)
#define GPIO_GFERT_P6_Pos           6            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P6               (_U(0x1) << GPIO_GFERT_P6_Pos)
#define GPIO_GFERT_P7_Pos           7            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P7               (_U(0x1) << GPIO_GFERT_P7_Pos)
#define GPIO_GFERT_P8_Pos           8            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P8               (_U(0x1) << GPIO_GFERT_P8_Pos)
#define GPIO_GFERT_P9_Pos           9            /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P9               (_U(0x1) << GPIO_GFERT_P9_Pos)
#define GPIO_GFERT_P10_Pos          10           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P10              (_U(0x1) << GPIO_GFERT_P10_Pos)
#define GPIO_GFERT_P11_Pos          11           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P11              (_U(0x1) << GPIO_GFERT_P11_Pos)
#define GPIO_GFERT_P12_Pos          12           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P12              (_U(0x1) << GPIO_GFERT_P12_Pos)
#define GPIO_GFERT_P13_Pos          13           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P13              (_U(0x1) << GPIO_GFERT_P13_Pos)
#define GPIO_GFERT_P14_Pos          14           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P14              (_U(0x1) << GPIO_GFERT_P14_Pos)
#define GPIO_GFERT_P15_Pos          15           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P15              (_U(0x1) << GPIO_GFERT_P15_Pos)
#define GPIO_GFERT_P16_Pos          16           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P16              (_U(0x1) << GPIO_GFERT_P16_Pos)
#define GPIO_GFERT_P17_Pos          17           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P17              (_U(0x1) << GPIO_GFERT_P17_Pos)
#define GPIO_GFERT_P18_Pos          18           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P18              (_U(0x1) << GPIO_GFERT_P18_Pos)
#define GPIO_GFERT_P19_Pos          19           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P19              (_U(0x1) << GPIO_GFERT_P19_Pos)
#define GPIO_GFERT_P20_Pos          20           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P20              (_U(0x1) << GPIO_GFERT_P20_Pos)
#define GPIO_GFERT_P21_Pos          21           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P21              (_U(0x1) << GPIO_GFERT_P21_Pos)
#define GPIO_GFERT_P22_Pos          22           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P22              (_U(0x1) << GPIO_GFERT_P22_Pos)
#define GPIO_GFERT_P23_Pos          23           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P23              (_U(0x1) << GPIO_GFERT_P23_Pos)
#define GPIO_GFERT_P24_Pos          24           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P24              (_U(0x1) << GPIO_GFERT_P24_Pos)
#define GPIO_GFERT_P25_Pos          25           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P25              (_U(0x1) << GPIO_GFERT_P25_Pos)
#define GPIO_GFERT_P26_Pos          26           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P26              (_U(0x1) << GPIO_GFERT_P26_Pos)
#define GPIO_GFERT_P27_Pos          27           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P27              (_U(0x1) << GPIO_GFERT_P27_Pos)
#define GPIO_GFERT_P28_Pos          28           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P28              (_U(0x1) << GPIO_GFERT_P28_Pos)
#define GPIO_GFERT_P29_Pos          29           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P29              (_U(0x1) << GPIO_GFERT_P29_Pos)
#define GPIO_GFERT_P30_Pos          30           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P30              (_U(0x1) << GPIO_GFERT_P30_Pos)
#define GPIO_GFERT_P31_Pos          31           /**< \brief (GPIO_GFERT) Glitch Filter Enable */
#define GPIO_GFERT_P31              (_U(0x1) << GPIO_GFERT_P31_Pos)
#define GPIO_GFERT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_GFERT) MASK Register */

/* -------- GPIO_IFR : (GPIO Offset: 0x0D0) (R/  32) port Interrupt Flag Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Flag                     */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Flag                     */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Flag                     */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Flag                     */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Flag                     */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Flag                     */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Flag                     */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Flag                     */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Flag                     */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Flag                     */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Flag                     */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Flag                     */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Flag                     */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Flag                     */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Flag                     */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Flag                     */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Flag                     */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Flag                     */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Flag                     */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Flag                     */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Flag                     */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Flag                     */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Flag                     */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Flag                     */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Flag                     */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Flag                     */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Flag                     */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Flag                     */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Flag                     */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Flag                     */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Flag                     */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Flag                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IFR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IFR_OFFSET             0x0D0        /**< \brief (GPIO_IFR offset) Interrupt Flag Register */

#define GPIO_IFR_P0_Pos             0            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P0                 (_U(0x1) << GPIO_IFR_P0_Pos)
#define GPIO_IFR_P1_Pos             1            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P1                 (_U(0x1) << GPIO_IFR_P1_Pos)
#define GPIO_IFR_P2_Pos             2            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P2                 (_U(0x1) << GPIO_IFR_P2_Pos)
#define GPIO_IFR_P3_Pos             3            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P3                 (_U(0x1) << GPIO_IFR_P3_Pos)
#define GPIO_IFR_P4_Pos             4            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P4                 (_U(0x1) << GPIO_IFR_P4_Pos)
#define GPIO_IFR_P5_Pos             5            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P5                 (_U(0x1) << GPIO_IFR_P5_Pos)
#define GPIO_IFR_P6_Pos             6            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P6                 (_U(0x1) << GPIO_IFR_P6_Pos)
#define GPIO_IFR_P7_Pos             7            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P7                 (_U(0x1) << GPIO_IFR_P7_Pos)
#define GPIO_IFR_P8_Pos             8            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P8                 (_U(0x1) << GPIO_IFR_P8_Pos)
#define GPIO_IFR_P9_Pos             9            /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P9                 (_U(0x1) << GPIO_IFR_P9_Pos)
#define GPIO_IFR_P10_Pos            10           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P10                (_U(0x1) << GPIO_IFR_P10_Pos)
#define GPIO_IFR_P11_Pos            11           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P11                (_U(0x1) << GPIO_IFR_P11_Pos)
#define GPIO_IFR_P12_Pos            12           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P12                (_U(0x1) << GPIO_IFR_P12_Pos)
#define GPIO_IFR_P13_Pos            13           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P13                (_U(0x1) << GPIO_IFR_P13_Pos)
#define GPIO_IFR_P14_Pos            14           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P14                (_U(0x1) << GPIO_IFR_P14_Pos)
#define GPIO_IFR_P15_Pos            15           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P15                (_U(0x1) << GPIO_IFR_P15_Pos)
#define GPIO_IFR_P16_Pos            16           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P16                (_U(0x1) << GPIO_IFR_P16_Pos)
#define GPIO_IFR_P17_Pos            17           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P17                (_U(0x1) << GPIO_IFR_P17_Pos)
#define GPIO_IFR_P18_Pos            18           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P18                (_U(0x1) << GPIO_IFR_P18_Pos)
#define GPIO_IFR_P19_Pos            19           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P19                (_U(0x1) << GPIO_IFR_P19_Pos)
#define GPIO_IFR_P20_Pos            20           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P20                (_U(0x1) << GPIO_IFR_P20_Pos)
#define GPIO_IFR_P21_Pos            21           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P21                (_U(0x1) << GPIO_IFR_P21_Pos)
#define GPIO_IFR_P22_Pos            22           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P22                (_U(0x1) << GPIO_IFR_P22_Pos)
#define GPIO_IFR_P23_Pos            23           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P23                (_U(0x1) << GPIO_IFR_P23_Pos)
#define GPIO_IFR_P24_Pos            24           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P24                (_U(0x1) << GPIO_IFR_P24_Pos)
#define GPIO_IFR_P25_Pos            25           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P25                (_U(0x1) << GPIO_IFR_P25_Pos)
#define GPIO_IFR_P26_Pos            26           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P26                (_U(0x1) << GPIO_IFR_P26_Pos)
#define GPIO_IFR_P27_Pos            27           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P27                (_U(0x1) << GPIO_IFR_P27_Pos)
#define GPIO_IFR_P28_Pos            28           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P28                (_U(0x1) << GPIO_IFR_P28_Pos)
#define GPIO_IFR_P29_Pos            29           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P29                (_U(0x1) << GPIO_IFR_P29_Pos)
#define GPIO_IFR_P30_Pos            30           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P30                (_U(0x1) << GPIO_IFR_P30_Pos)
#define GPIO_IFR_P31_Pos            31           /**< \brief (GPIO_IFR) Interrupt Flag */
#define GPIO_IFR_P31                (_U(0x1) << GPIO_IFR_P31_Pos)
#define GPIO_IFR_MASK               _U(0xFFFFFFFF) /**< \brief (GPIO_IFR) MASK Register */

/* -------- GPIO_IFRC : (GPIO Offset: 0x0D8) ( /W 32) port Interrupt Flag Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Interrupt Flag                     */
    uint32_t P1:1;             /*!< bit:      1  Interrupt Flag                     */
    uint32_t P2:1;             /*!< bit:      2  Interrupt Flag                     */
    uint32_t P3:1;             /*!< bit:      3  Interrupt Flag                     */
    uint32_t P4:1;             /*!< bit:      4  Interrupt Flag                     */
    uint32_t P5:1;             /*!< bit:      5  Interrupt Flag                     */
    uint32_t P6:1;             /*!< bit:      6  Interrupt Flag                     */
    uint32_t P7:1;             /*!< bit:      7  Interrupt Flag                     */
    uint32_t P8:1;             /*!< bit:      8  Interrupt Flag                     */
    uint32_t P9:1;             /*!< bit:      9  Interrupt Flag                     */
    uint32_t P10:1;            /*!< bit:     10  Interrupt Flag                     */
    uint32_t P11:1;            /*!< bit:     11  Interrupt Flag                     */
    uint32_t P12:1;            /*!< bit:     12  Interrupt Flag                     */
    uint32_t P13:1;            /*!< bit:     13  Interrupt Flag                     */
    uint32_t P14:1;            /*!< bit:     14  Interrupt Flag                     */
    uint32_t P15:1;            /*!< bit:     15  Interrupt Flag                     */
    uint32_t P16:1;            /*!< bit:     16  Interrupt Flag                     */
    uint32_t P17:1;            /*!< bit:     17  Interrupt Flag                     */
    uint32_t P18:1;            /*!< bit:     18  Interrupt Flag                     */
    uint32_t P19:1;            /*!< bit:     19  Interrupt Flag                     */
    uint32_t P20:1;            /*!< bit:     20  Interrupt Flag                     */
    uint32_t P21:1;            /*!< bit:     21  Interrupt Flag                     */
    uint32_t P22:1;            /*!< bit:     22  Interrupt Flag                     */
    uint32_t P23:1;            /*!< bit:     23  Interrupt Flag                     */
    uint32_t P24:1;            /*!< bit:     24  Interrupt Flag                     */
    uint32_t P25:1;            /*!< bit:     25  Interrupt Flag                     */
    uint32_t P26:1;            /*!< bit:     26  Interrupt Flag                     */
    uint32_t P27:1;            /*!< bit:     27  Interrupt Flag                     */
    uint32_t P28:1;            /*!< bit:     28  Interrupt Flag                     */
    uint32_t P29:1;            /*!< bit:     29  Interrupt Flag                     */
    uint32_t P30:1;            /*!< bit:     30  Interrupt Flag                     */
    uint32_t P31:1;            /*!< bit:     31  Interrupt Flag                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_IFRC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_IFRC_OFFSET            0x0D8        /**< \brief (GPIO_IFRC offset) Interrupt Flag Register - Clear */

#define GPIO_IFRC_P0_Pos            0            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P0                (_U(0x1) << GPIO_IFRC_P0_Pos)
#define GPIO_IFRC_P1_Pos            1            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P1                (_U(0x1) << GPIO_IFRC_P1_Pos)
#define GPIO_IFRC_P2_Pos            2            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P2                (_U(0x1) << GPIO_IFRC_P2_Pos)
#define GPIO_IFRC_P3_Pos            3            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P3                (_U(0x1) << GPIO_IFRC_P3_Pos)
#define GPIO_IFRC_P4_Pos            4            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P4                (_U(0x1) << GPIO_IFRC_P4_Pos)
#define GPIO_IFRC_P5_Pos            5            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P5                (_U(0x1) << GPIO_IFRC_P5_Pos)
#define GPIO_IFRC_P6_Pos            6            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P6                (_U(0x1) << GPIO_IFRC_P6_Pos)
#define GPIO_IFRC_P7_Pos            7            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P7                (_U(0x1) << GPIO_IFRC_P7_Pos)
#define GPIO_IFRC_P8_Pos            8            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P8                (_U(0x1) << GPIO_IFRC_P8_Pos)
#define GPIO_IFRC_P9_Pos            9            /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P9                (_U(0x1) << GPIO_IFRC_P9_Pos)
#define GPIO_IFRC_P10_Pos           10           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P10               (_U(0x1) << GPIO_IFRC_P10_Pos)
#define GPIO_IFRC_P11_Pos           11           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P11               (_U(0x1) << GPIO_IFRC_P11_Pos)
#define GPIO_IFRC_P12_Pos           12           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P12               (_U(0x1) << GPIO_IFRC_P12_Pos)
#define GPIO_IFRC_P13_Pos           13           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P13               (_U(0x1) << GPIO_IFRC_P13_Pos)
#define GPIO_IFRC_P14_Pos           14           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P14               (_U(0x1) << GPIO_IFRC_P14_Pos)
#define GPIO_IFRC_P15_Pos           15           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P15               (_U(0x1) << GPIO_IFRC_P15_Pos)
#define GPIO_IFRC_P16_Pos           16           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P16               (_U(0x1) << GPIO_IFRC_P16_Pos)
#define GPIO_IFRC_P17_Pos           17           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P17               (_U(0x1) << GPIO_IFRC_P17_Pos)
#define GPIO_IFRC_P18_Pos           18           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P18               (_U(0x1) << GPIO_IFRC_P18_Pos)
#define GPIO_IFRC_P19_Pos           19           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P19               (_U(0x1) << GPIO_IFRC_P19_Pos)
#define GPIO_IFRC_P20_Pos           20           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P20               (_U(0x1) << GPIO_IFRC_P20_Pos)
#define GPIO_IFRC_P21_Pos           21           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P21               (_U(0x1) << GPIO_IFRC_P21_Pos)
#define GPIO_IFRC_P22_Pos           22           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P22               (_U(0x1) << GPIO_IFRC_P22_Pos)
#define GPIO_IFRC_P23_Pos           23           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P23               (_U(0x1) << GPIO_IFRC_P23_Pos)
#define GPIO_IFRC_P24_Pos           24           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P24               (_U(0x1) << GPIO_IFRC_P24_Pos)
#define GPIO_IFRC_P25_Pos           25           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P25               (_U(0x1) << GPIO_IFRC_P25_Pos)
#define GPIO_IFRC_P26_Pos           26           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P26               (_U(0x1) << GPIO_IFRC_P26_Pos)
#define GPIO_IFRC_P27_Pos           27           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P27               (_U(0x1) << GPIO_IFRC_P27_Pos)
#define GPIO_IFRC_P28_Pos           28           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P28               (_U(0x1) << GPIO_IFRC_P28_Pos)
#define GPIO_IFRC_P29_Pos           29           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P29               (_U(0x1) << GPIO_IFRC_P29_Pos)
#define GPIO_IFRC_P30_Pos           30           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P30               (_U(0x1) << GPIO_IFRC_P30_Pos)
#define GPIO_IFRC_P31_Pos           31           /**< \brief (GPIO_IFRC) Interrupt Flag */
#define GPIO_IFRC_P31               (_U(0x1) << GPIO_IFRC_P31_Pos)
#define GPIO_IFRC_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_IFRC) MASK Register */

/* -------- GPIO_ODMER : (GPIO Offset: 0x0E0) (R/W 32) port Open Drain Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Open Drain Mode Enable             */
    uint32_t P1:1;             /*!< bit:      1  Open Drain Mode Enable             */
    uint32_t P2:1;             /*!< bit:      2  Open Drain Mode Enable             */
    uint32_t P3:1;             /*!< bit:      3  Open Drain Mode Enable             */
    uint32_t P4:1;             /*!< bit:      4  Open Drain Mode Enable             */
    uint32_t P5:1;             /*!< bit:      5  Open Drain Mode Enable             */
    uint32_t P6:1;             /*!< bit:      6  Open Drain Mode Enable             */
    uint32_t P7:1;             /*!< bit:      7  Open Drain Mode Enable             */
    uint32_t P8:1;             /*!< bit:      8  Open Drain Mode Enable             */
    uint32_t P9:1;             /*!< bit:      9  Open Drain Mode Enable             */
    uint32_t P10:1;            /*!< bit:     10  Open Drain Mode Enable             */
    uint32_t P11:1;            /*!< bit:     11  Open Drain Mode Enable             */
    uint32_t P12:1;            /*!< bit:     12  Open Drain Mode Enable             */
    uint32_t P13:1;            /*!< bit:     13  Open Drain Mode Enable             */
    uint32_t P14:1;            /*!< bit:     14  Open Drain Mode Enable             */
    uint32_t P15:1;            /*!< bit:     15  Open Drain Mode Enable             */
    uint32_t P16:1;            /*!< bit:     16  Open Drain Mode Enable             */
    uint32_t P17:1;            /*!< bit:     17  Open Drain Mode Enable             */
    uint32_t P18:1;            /*!< bit:     18  Open Drain Mode Enable             */
    uint32_t P19:1;            /*!< bit:     19  Open Drain Mode Enable             */
    uint32_t P20:1;            /*!< bit:     20  Open Drain Mode Enable             */
    uint32_t P21:1;            /*!< bit:     21  Open Drain Mode Enable             */
    uint32_t P22:1;            /*!< bit:     22  Open Drain Mode Enable             */
    uint32_t P23:1;            /*!< bit:     23  Open Drain Mode Enable             */
    uint32_t P24:1;            /*!< bit:     24  Open Drain Mode Enable             */
    uint32_t P25:1;            /*!< bit:     25  Open Drain Mode Enable             */
    uint32_t P26:1;            /*!< bit:     26  Open Drain Mode Enable             */
    uint32_t P27:1;            /*!< bit:     27  Open Drain Mode Enable             */
    uint32_t P28:1;            /*!< bit:     28  Open Drain Mode Enable             */
    uint32_t P29:1;            /*!< bit:     29  Open Drain Mode Enable             */
    uint32_t P30:1;            /*!< bit:     30  Open Drain Mode Enable             */
    uint32_t P31:1;            /*!< bit:     31  Open Drain Mode Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODMER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODMER_OFFSET           0x0E0        /**< \brief (GPIO_ODMER offset) Open Drain Mode Register */

#define GPIO_ODMER_P0_Pos           0            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P0               (_U(0x1) << GPIO_ODMER_P0_Pos)
#define GPIO_ODMER_P1_Pos           1            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P1               (_U(0x1) << GPIO_ODMER_P1_Pos)
#define GPIO_ODMER_P2_Pos           2            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P2               (_U(0x1) << GPIO_ODMER_P2_Pos)
#define GPIO_ODMER_P3_Pos           3            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P3               (_U(0x1) << GPIO_ODMER_P3_Pos)
#define GPIO_ODMER_P4_Pos           4            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P4               (_U(0x1) << GPIO_ODMER_P4_Pos)
#define GPIO_ODMER_P5_Pos           5            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P5               (_U(0x1) << GPIO_ODMER_P5_Pos)
#define GPIO_ODMER_P6_Pos           6            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P6               (_U(0x1) << GPIO_ODMER_P6_Pos)
#define GPIO_ODMER_P7_Pos           7            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P7               (_U(0x1) << GPIO_ODMER_P7_Pos)
#define GPIO_ODMER_P8_Pos           8            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P8               (_U(0x1) << GPIO_ODMER_P8_Pos)
#define GPIO_ODMER_P9_Pos           9            /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P9               (_U(0x1) << GPIO_ODMER_P9_Pos)
#define GPIO_ODMER_P10_Pos          10           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P10              (_U(0x1) << GPIO_ODMER_P10_Pos)
#define GPIO_ODMER_P11_Pos          11           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P11              (_U(0x1) << GPIO_ODMER_P11_Pos)
#define GPIO_ODMER_P12_Pos          12           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P12              (_U(0x1) << GPIO_ODMER_P12_Pos)
#define GPIO_ODMER_P13_Pos          13           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P13              (_U(0x1) << GPIO_ODMER_P13_Pos)
#define GPIO_ODMER_P14_Pos          14           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P14              (_U(0x1) << GPIO_ODMER_P14_Pos)
#define GPIO_ODMER_P15_Pos          15           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P15              (_U(0x1) << GPIO_ODMER_P15_Pos)
#define GPIO_ODMER_P16_Pos          16           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P16              (_U(0x1) << GPIO_ODMER_P16_Pos)
#define GPIO_ODMER_P17_Pos          17           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P17              (_U(0x1) << GPIO_ODMER_P17_Pos)
#define GPIO_ODMER_P18_Pos          18           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P18              (_U(0x1) << GPIO_ODMER_P18_Pos)
#define GPIO_ODMER_P19_Pos          19           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P19              (_U(0x1) << GPIO_ODMER_P19_Pos)
#define GPIO_ODMER_P20_Pos          20           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P20              (_U(0x1) << GPIO_ODMER_P20_Pos)
#define GPIO_ODMER_P21_Pos          21           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P21              (_U(0x1) << GPIO_ODMER_P21_Pos)
#define GPIO_ODMER_P22_Pos          22           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P22              (_U(0x1) << GPIO_ODMER_P22_Pos)
#define GPIO_ODMER_P23_Pos          23           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P23              (_U(0x1) << GPIO_ODMER_P23_Pos)
#define GPIO_ODMER_P24_Pos          24           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P24              (_U(0x1) << GPIO_ODMER_P24_Pos)
#define GPIO_ODMER_P25_Pos          25           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P25              (_U(0x1) << GPIO_ODMER_P25_Pos)
#define GPIO_ODMER_P26_Pos          26           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P26              (_U(0x1) << GPIO_ODMER_P26_Pos)
#define GPIO_ODMER_P27_Pos          27           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P27              (_U(0x1) << GPIO_ODMER_P27_Pos)
#define GPIO_ODMER_P28_Pos          28           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P28              (_U(0x1) << GPIO_ODMER_P28_Pos)
#define GPIO_ODMER_P29_Pos          29           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P29              (_U(0x1) << GPIO_ODMER_P29_Pos)
#define GPIO_ODMER_P30_Pos          30           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P30              (_U(0x1) << GPIO_ODMER_P30_Pos)
#define GPIO_ODMER_P31_Pos          31           /**< \brief (GPIO_ODMER) Open Drain Mode Enable */
#define GPIO_ODMER_P31              (_U(0x1) << GPIO_ODMER_P31_Pos)
#define GPIO_ODMER_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_ODMER) MASK Register */

/* -------- GPIO_ODMERS : (GPIO Offset: 0x0E4) ( /W 32) port Open Drain Mode Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Open Drain Mode Enable             */
    uint32_t P1:1;             /*!< bit:      1  Open Drain Mode Enable             */
    uint32_t P2:1;             /*!< bit:      2  Open Drain Mode Enable             */
    uint32_t P3:1;             /*!< bit:      3  Open Drain Mode Enable             */
    uint32_t P4:1;             /*!< bit:      4  Open Drain Mode Enable             */
    uint32_t P5:1;             /*!< bit:      5  Open Drain Mode Enable             */
    uint32_t P6:1;             /*!< bit:      6  Open Drain Mode Enable             */
    uint32_t P7:1;             /*!< bit:      7  Open Drain Mode Enable             */
    uint32_t P8:1;             /*!< bit:      8  Open Drain Mode Enable             */
    uint32_t P9:1;             /*!< bit:      9  Open Drain Mode Enable             */
    uint32_t P10:1;            /*!< bit:     10  Open Drain Mode Enable             */
    uint32_t P11:1;            /*!< bit:     11  Open Drain Mode Enable             */
    uint32_t P12:1;            /*!< bit:     12  Open Drain Mode Enable             */
    uint32_t P13:1;            /*!< bit:     13  Open Drain Mode Enable             */
    uint32_t P14:1;            /*!< bit:     14  Open Drain Mode Enable             */
    uint32_t P15:1;            /*!< bit:     15  Open Drain Mode Enable             */
    uint32_t P16:1;            /*!< bit:     16  Open Drain Mode Enable             */
    uint32_t P17:1;            /*!< bit:     17  Open Drain Mode Enable             */
    uint32_t P18:1;            /*!< bit:     18  Open Drain Mode Enable             */
    uint32_t P19:1;            /*!< bit:     19  Open Drain Mode Enable             */
    uint32_t P20:1;            /*!< bit:     20  Open Drain Mode Enable             */
    uint32_t P21:1;            /*!< bit:     21  Open Drain Mode Enable             */
    uint32_t P22:1;            /*!< bit:     22  Open Drain Mode Enable             */
    uint32_t P23:1;            /*!< bit:     23  Open Drain Mode Enable             */
    uint32_t P24:1;            /*!< bit:     24  Open Drain Mode Enable             */
    uint32_t P25:1;            /*!< bit:     25  Open Drain Mode Enable             */
    uint32_t P26:1;            /*!< bit:     26  Open Drain Mode Enable             */
    uint32_t P27:1;            /*!< bit:     27  Open Drain Mode Enable             */
    uint32_t P28:1;            /*!< bit:     28  Open Drain Mode Enable             */
    uint32_t P29:1;            /*!< bit:     29  Open Drain Mode Enable             */
    uint32_t P30:1;            /*!< bit:     30  Open Drain Mode Enable             */
    uint32_t P31:1;            /*!< bit:     31  Open Drain Mode Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODMERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODMERS_OFFSET          0x0E4        /**< \brief (GPIO_ODMERS offset) Open Drain Mode Register - Set */

#define GPIO_ODMERS_P0_Pos          0            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P0              (_U(0x1) << GPIO_ODMERS_P0_Pos)
#define GPIO_ODMERS_P1_Pos          1            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P1              (_U(0x1) << GPIO_ODMERS_P1_Pos)
#define GPIO_ODMERS_P2_Pos          2            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P2              (_U(0x1) << GPIO_ODMERS_P2_Pos)
#define GPIO_ODMERS_P3_Pos          3            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P3              (_U(0x1) << GPIO_ODMERS_P3_Pos)
#define GPIO_ODMERS_P4_Pos          4            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P4              (_U(0x1) << GPIO_ODMERS_P4_Pos)
#define GPIO_ODMERS_P5_Pos          5            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P5              (_U(0x1) << GPIO_ODMERS_P5_Pos)
#define GPIO_ODMERS_P6_Pos          6            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P6              (_U(0x1) << GPIO_ODMERS_P6_Pos)
#define GPIO_ODMERS_P7_Pos          7            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P7              (_U(0x1) << GPIO_ODMERS_P7_Pos)
#define GPIO_ODMERS_P8_Pos          8            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P8              (_U(0x1) << GPIO_ODMERS_P8_Pos)
#define GPIO_ODMERS_P9_Pos          9            /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P9              (_U(0x1) << GPIO_ODMERS_P9_Pos)
#define GPIO_ODMERS_P10_Pos         10           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P10             (_U(0x1) << GPIO_ODMERS_P10_Pos)
#define GPIO_ODMERS_P11_Pos         11           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P11             (_U(0x1) << GPIO_ODMERS_P11_Pos)
#define GPIO_ODMERS_P12_Pos         12           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P12             (_U(0x1) << GPIO_ODMERS_P12_Pos)
#define GPIO_ODMERS_P13_Pos         13           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P13             (_U(0x1) << GPIO_ODMERS_P13_Pos)
#define GPIO_ODMERS_P14_Pos         14           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P14             (_U(0x1) << GPIO_ODMERS_P14_Pos)
#define GPIO_ODMERS_P15_Pos         15           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P15             (_U(0x1) << GPIO_ODMERS_P15_Pos)
#define GPIO_ODMERS_P16_Pos         16           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P16             (_U(0x1) << GPIO_ODMERS_P16_Pos)
#define GPIO_ODMERS_P17_Pos         17           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P17             (_U(0x1) << GPIO_ODMERS_P17_Pos)
#define GPIO_ODMERS_P18_Pos         18           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P18             (_U(0x1) << GPIO_ODMERS_P18_Pos)
#define GPIO_ODMERS_P19_Pos         19           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P19             (_U(0x1) << GPIO_ODMERS_P19_Pos)
#define GPIO_ODMERS_P20_Pos         20           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P20             (_U(0x1) << GPIO_ODMERS_P20_Pos)
#define GPIO_ODMERS_P21_Pos         21           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P21             (_U(0x1) << GPIO_ODMERS_P21_Pos)
#define GPIO_ODMERS_P22_Pos         22           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P22             (_U(0x1) << GPIO_ODMERS_P22_Pos)
#define GPIO_ODMERS_P23_Pos         23           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P23             (_U(0x1) << GPIO_ODMERS_P23_Pos)
#define GPIO_ODMERS_P24_Pos         24           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P24             (_U(0x1) << GPIO_ODMERS_P24_Pos)
#define GPIO_ODMERS_P25_Pos         25           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P25             (_U(0x1) << GPIO_ODMERS_P25_Pos)
#define GPIO_ODMERS_P26_Pos         26           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P26             (_U(0x1) << GPIO_ODMERS_P26_Pos)
#define GPIO_ODMERS_P27_Pos         27           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P27             (_U(0x1) << GPIO_ODMERS_P27_Pos)
#define GPIO_ODMERS_P28_Pos         28           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P28             (_U(0x1) << GPIO_ODMERS_P28_Pos)
#define GPIO_ODMERS_P29_Pos         29           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P29             (_U(0x1) << GPIO_ODMERS_P29_Pos)
#define GPIO_ODMERS_P30_Pos         30           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P30             (_U(0x1) << GPIO_ODMERS_P30_Pos)
#define GPIO_ODMERS_P31_Pos         31           /**< \brief (GPIO_ODMERS) Open Drain Mode Enable */
#define GPIO_ODMERS_P31             (_U(0x1) << GPIO_ODMERS_P31_Pos)
#define GPIO_ODMERS_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODMERS) MASK Register */

/* -------- GPIO_ODMERC : (GPIO Offset: 0x0E8) ( /W 32) port Open Drain Mode Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Open Drain Mode Enable             */
    uint32_t P1:1;             /*!< bit:      1  Open Drain Mode Enable             */
    uint32_t P2:1;             /*!< bit:      2  Open Drain Mode Enable             */
    uint32_t P3:1;             /*!< bit:      3  Open Drain Mode Enable             */
    uint32_t P4:1;             /*!< bit:      4  Open Drain Mode Enable             */
    uint32_t P5:1;             /*!< bit:      5  Open Drain Mode Enable             */
    uint32_t P6:1;             /*!< bit:      6  Open Drain Mode Enable             */
    uint32_t P7:1;             /*!< bit:      7  Open Drain Mode Enable             */
    uint32_t P8:1;             /*!< bit:      8  Open Drain Mode Enable             */
    uint32_t P9:1;             /*!< bit:      9  Open Drain Mode Enable             */
    uint32_t P10:1;            /*!< bit:     10  Open Drain Mode Enable             */
    uint32_t P11:1;            /*!< bit:     11  Open Drain Mode Enable             */
    uint32_t P12:1;            /*!< bit:     12  Open Drain Mode Enable             */
    uint32_t P13:1;            /*!< bit:     13  Open Drain Mode Enable             */
    uint32_t P14:1;            /*!< bit:     14  Open Drain Mode Enable             */
    uint32_t P15:1;            /*!< bit:     15  Open Drain Mode Enable             */
    uint32_t P16:1;            /*!< bit:     16  Open Drain Mode Enable             */
    uint32_t P17:1;            /*!< bit:     17  Open Drain Mode Enable             */
    uint32_t P18:1;            /*!< bit:     18  Open Drain Mode Enable             */
    uint32_t P19:1;            /*!< bit:     19  Open Drain Mode Enable             */
    uint32_t P20:1;            /*!< bit:     20  Open Drain Mode Enable             */
    uint32_t P21:1;            /*!< bit:     21  Open Drain Mode Enable             */
    uint32_t P22:1;            /*!< bit:     22  Open Drain Mode Enable             */
    uint32_t P23:1;            /*!< bit:     23  Open Drain Mode Enable             */
    uint32_t P24:1;            /*!< bit:     24  Open Drain Mode Enable             */
    uint32_t P25:1;            /*!< bit:     25  Open Drain Mode Enable             */
    uint32_t P26:1;            /*!< bit:     26  Open Drain Mode Enable             */
    uint32_t P27:1;            /*!< bit:     27  Open Drain Mode Enable             */
    uint32_t P28:1;            /*!< bit:     28  Open Drain Mode Enable             */
    uint32_t P29:1;            /*!< bit:     29  Open Drain Mode Enable             */
    uint32_t P30:1;            /*!< bit:     30  Open Drain Mode Enable             */
    uint32_t P31:1;            /*!< bit:     31  Open Drain Mode Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODMERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODMERC_OFFSET          0x0E8        /**< \brief (GPIO_ODMERC offset) Open Drain Mode Register - Clear */

#define GPIO_ODMERC_P0_Pos          0            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P0              (_U(0x1) << GPIO_ODMERC_P0_Pos)
#define GPIO_ODMERC_P1_Pos          1            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P1              (_U(0x1) << GPIO_ODMERC_P1_Pos)
#define GPIO_ODMERC_P2_Pos          2            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P2              (_U(0x1) << GPIO_ODMERC_P2_Pos)
#define GPIO_ODMERC_P3_Pos          3            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P3              (_U(0x1) << GPIO_ODMERC_P3_Pos)
#define GPIO_ODMERC_P4_Pos          4            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P4              (_U(0x1) << GPIO_ODMERC_P4_Pos)
#define GPIO_ODMERC_P5_Pos          5            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P5              (_U(0x1) << GPIO_ODMERC_P5_Pos)
#define GPIO_ODMERC_P6_Pos          6            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P6              (_U(0x1) << GPIO_ODMERC_P6_Pos)
#define GPIO_ODMERC_P7_Pos          7            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P7              (_U(0x1) << GPIO_ODMERC_P7_Pos)
#define GPIO_ODMERC_P8_Pos          8            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P8              (_U(0x1) << GPIO_ODMERC_P8_Pos)
#define GPIO_ODMERC_P9_Pos          9            /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P9              (_U(0x1) << GPIO_ODMERC_P9_Pos)
#define GPIO_ODMERC_P10_Pos         10           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P10             (_U(0x1) << GPIO_ODMERC_P10_Pos)
#define GPIO_ODMERC_P11_Pos         11           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P11             (_U(0x1) << GPIO_ODMERC_P11_Pos)
#define GPIO_ODMERC_P12_Pos         12           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P12             (_U(0x1) << GPIO_ODMERC_P12_Pos)
#define GPIO_ODMERC_P13_Pos         13           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P13             (_U(0x1) << GPIO_ODMERC_P13_Pos)
#define GPIO_ODMERC_P14_Pos         14           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P14             (_U(0x1) << GPIO_ODMERC_P14_Pos)
#define GPIO_ODMERC_P15_Pos         15           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P15             (_U(0x1) << GPIO_ODMERC_P15_Pos)
#define GPIO_ODMERC_P16_Pos         16           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P16             (_U(0x1) << GPIO_ODMERC_P16_Pos)
#define GPIO_ODMERC_P17_Pos         17           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P17             (_U(0x1) << GPIO_ODMERC_P17_Pos)
#define GPIO_ODMERC_P18_Pos         18           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P18             (_U(0x1) << GPIO_ODMERC_P18_Pos)
#define GPIO_ODMERC_P19_Pos         19           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P19             (_U(0x1) << GPIO_ODMERC_P19_Pos)
#define GPIO_ODMERC_P20_Pos         20           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P20             (_U(0x1) << GPIO_ODMERC_P20_Pos)
#define GPIO_ODMERC_P21_Pos         21           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P21             (_U(0x1) << GPIO_ODMERC_P21_Pos)
#define GPIO_ODMERC_P22_Pos         22           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P22             (_U(0x1) << GPIO_ODMERC_P22_Pos)
#define GPIO_ODMERC_P23_Pos         23           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P23             (_U(0x1) << GPIO_ODMERC_P23_Pos)
#define GPIO_ODMERC_P24_Pos         24           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P24             (_U(0x1) << GPIO_ODMERC_P24_Pos)
#define GPIO_ODMERC_P25_Pos         25           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P25             (_U(0x1) << GPIO_ODMERC_P25_Pos)
#define GPIO_ODMERC_P26_Pos         26           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P26             (_U(0x1) << GPIO_ODMERC_P26_Pos)
#define GPIO_ODMERC_P27_Pos         27           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P27             (_U(0x1) << GPIO_ODMERC_P27_Pos)
#define GPIO_ODMERC_P28_Pos         28           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P28             (_U(0x1) << GPIO_ODMERC_P28_Pos)
#define GPIO_ODMERC_P29_Pos         29           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P29             (_U(0x1) << GPIO_ODMERC_P29_Pos)
#define GPIO_ODMERC_P30_Pos         30           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P30             (_U(0x1) << GPIO_ODMERC_P30_Pos)
#define GPIO_ODMERC_P31_Pos         31           /**< \brief (GPIO_ODMERC) Open Drain Mode Enable */
#define GPIO_ODMERC_P31             (_U(0x1) << GPIO_ODMERC_P31_Pos)
#define GPIO_ODMERC_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODMERC) MASK Register */

/* -------- GPIO_ODMERT : (GPIO Offset: 0x0EC) ( /W 32) port Open Drain Mode Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Open Drain Mode Enable             */
    uint32_t P1:1;             /*!< bit:      1  Open Drain Mode Enable             */
    uint32_t P2:1;             /*!< bit:      2  Open Drain Mode Enable             */
    uint32_t P3:1;             /*!< bit:      3  Open Drain Mode Enable             */
    uint32_t P4:1;             /*!< bit:      4  Open Drain Mode Enable             */
    uint32_t P5:1;             /*!< bit:      5  Open Drain Mode Enable             */
    uint32_t P6:1;             /*!< bit:      6  Open Drain Mode Enable             */
    uint32_t P7:1;             /*!< bit:      7  Open Drain Mode Enable             */
    uint32_t P8:1;             /*!< bit:      8  Open Drain Mode Enable             */
    uint32_t P9:1;             /*!< bit:      9  Open Drain Mode Enable             */
    uint32_t P10:1;            /*!< bit:     10  Open Drain Mode Enable             */
    uint32_t P11:1;            /*!< bit:     11  Open Drain Mode Enable             */
    uint32_t P12:1;            /*!< bit:     12  Open Drain Mode Enable             */
    uint32_t P13:1;            /*!< bit:     13  Open Drain Mode Enable             */
    uint32_t P14:1;            /*!< bit:     14  Open Drain Mode Enable             */
    uint32_t P15:1;            /*!< bit:     15  Open Drain Mode Enable             */
    uint32_t P16:1;            /*!< bit:     16  Open Drain Mode Enable             */
    uint32_t P17:1;            /*!< bit:     17  Open Drain Mode Enable             */
    uint32_t P18:1;            /*!< bit:     18  Open Drain Mode Enable             */
    uint32_t P19:1;            /*!< bit:     19  Open Drain Mode Enable             */
    uint32_t P20:1;            /*!< bit:     20  Open Drain Mode Enable             */
    uint32_t P21:1;            /*!< bit:     21  Open Drain Mode Enable             */
    uint32_t P22:1;            /*!< bit:     22  Open Drain Mode Enable             */
    uint32_t P23:1;            /*!< bit:     23  Open Drain Mode Enable             */
    uint32_t P24:1;            /*!< bit:     24  Open Drain Mode Enable             */
    uint32_t P25:1;            /*!< bit:     25  Open Drain Mode Enable             */
    uint32_t P26:1;            /*!< bit:     26  Open Drain Mode Enable             */
    uint32_t P27:1;            /*!< bit:     27  Open Drain Mode Enable             */
    uint32_t P28:1;            /*!< bit:     28  Open Drain Mode Enable             */
    uint32_t P29:1;            /*!< bit:     29  Open Drain Mode Enable             */
    uint32_t P30:1;            /*!< bit:     30  Open Drain Mode Enable             */
    uint32_t P31:1;            /*!< bit:     31  Open Drain Mode Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODMERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODMERT_OFFSET          0x0EC        /**< \brief (GPIO_ODMERT offset) Open Drain Mode Register - Toggle */

#define GPIO_ODMERT_P0_Pos          0            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P0              (_U(0x1) << GPIO_ODMERT_P0_Pos)
#define GPIO_ODMERT_P1_Pos          1            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P1              (_U(0x1) << GPIO_ODMERT_P1_Pos)
#define GPIO_ODMERT_P2_Pos          2            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P2              (_U(0x1) << GPIO_ODMERT_P2_Pos)
#define GPIO_ODMERT_P3_Pos          3            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P3              (_U(0x1) << GPIO_ODMERT_P3_Pos)
#define GPIO_ODMERT_P4_Pos          4            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P4              (_U(0x1) << GPIO_ODMERT_P4_Pos)
#define GPIO_ODMERT_P5_Pos          5            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P5              (_U(0x1) << GPIO_ODMERT_P5_Pos)
#define GPIO_ODMERT_P6_Pos          6            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P6              (_U(0x1) << GPIO_ODMERT_P6_Pos)
#define GPIO_ODMERT_P7_Pos          7            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P7              (_U(0x1) << GPIO_ODMERT_P7_Pos)
#define GPIO_ODMERT_P8_Pos          8            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P8              (_U(0x1) << GPIO_ODMERT_P8_Pos)
#define GPIO_ODMERT_P9_Pos          9            /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P9              (_U(0x1) << GPIO_ODMERT_P9_Pos)
#define GPIO_ODMERT_P10_Pos         10           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P10             (_U(0x1) << GPIO_ODMERT_P10_Pos)
#define GPIO_ODMERT_P11_Pos         11           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P11             (_U(0x1) << GPIO_ODMERT_P11_Pos)
#define GPIO_ODMERT_P12_Pos         12           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P12             (_U(0x1) << GPIO_ODMERT_P12_Pos)
#define GPIO_ODMERT_P13_Pos         13           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P13             (_U(0x1) << GPIO_ODMERT_P13_Pos)
#define GPIO_ODMERT_P14_Pos         14           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P14             (_U(0x1) << GPIO_ODMERT_P14_Pos)
#define GPIO_ODMERT_P15_Pos         15           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P15             (_U(0x1) << GPIO_ODMERT_P15_Pos)
#define GPIO_ODMERT_P16_Pos         16           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P16             (_U(0x1) << GPIO_ODMERT_P16_Pos)
#define GPIO_ODMERT_P17_Pos         17           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P17             (_U(0x1) << GPIO_ODMERT_P17_Pos)
#define GPIO_ODMERT_P18_Pos         18           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P18             (_U(0x1) << GPIO_ODMERT_P18_Pos)
#define GPIO_ODMERT_P19_Pos         19           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P19             (_U(0x1) << GPIO_ODMERT_P19_Pos)
#define GPIO_ODMERT_P20_Pos         20           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P20             (_U(0x1) << GPIO_ODMERT_P20_Pos)
#define GPIO_ODMERT_P21_Pos         21           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P21             (_U(0x1) << GPIO_ODMERT_P21_Pos)
#define GPIO_ODMERT_P22_Pos         22           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P22             (_U(0x1) << GPIO_ODMERT_P22_Pos)
#define GPIO_ODMERT_P23_Pos         23           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P23             (_U(0x1) << GPIO_ODMERT_P23_Pos)
#define GPIO_ODMERT_P24_Pos         24           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P24             (_U(0x1) << GPIO_ODMERT_P24_Pos)
#define GPIO_ODMERT_P25_Pos         25           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P25             (_U(0x1) << GPIO_ODMERT_P25_Pos)
#define GPIO_ODMERT_P26_Pos         26           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P26             (_U(0x1) << GPIO_ODMERT_P26_Pos)
#define GPIO_ODMERT_P27_Pos         27           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P27             (_U(0x1) << GPIO_ODMERT_P27_Pos)
#define GPIO_ODMERT_P28_Pos         28           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P28             (_U(0x1) << GPIO_ODMERT_P28_Pos)
#define GPIO_ODMERT_P29_Pos         29           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P29             (_U(0x1) << GPIO_ODMERT_P29_Pos)
#define GPIO_ODMERT_P30_Pos         30           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P30             (_U(0x1) << GPIO_ODMERT_P30_Pos)
#define GPIO_ODMERT_P31_Pos         31           /**< \brief (GPIO_ODMERT) Open Drain Mode Enable */
#define GPIO_ODMERT_P31             (_U(0x1) << GPIO_ODMERT_P31_Pos)
#define GPIO_ODMERT_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODMERT) MASK Register */

/* -------- GPIO_ODCR0 : (GPIO Offset: 0x100) (R/W 32) port Output Driving Capability Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR0_OFFSET           0x100        /**< \brief (GPIO_ODCR0 offset) Output Driving Capability Register 0 */

#define GPIO_ODCR0_P0_Pos           0            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P0               (_U(0x1) << GPIO_ODCR0_P0_Pos)
#define GPIO_ODCR0_P1_Pos           1            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P1               (_U(0x1) << GPIO_ODCR0_P1_Pos)
#define GPIO_ODCR0_P2_Pos           2            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P2               (_U(0x1) << GPIO_ODCR0_P2_Pos)
#define GPIO_ODCR0_P3_Pos           3            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P3               (_U(0x1) << GPIO_ODCR0_P3_Pos)
#define GPIO_ODCR0_P4_Pos           4            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P4               (_U(0x1) << GPIO_ODCR0_P4_Pos)
#define GPIO_ODCR0_P5_Pos           5            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P5               (_U(0x1) << GPIO_ODCR0_P5_Pos)
#define GPIO_ODCR0_P6_Pos           6            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P6               (_U(0x1) << GPIO_ODCR0_P6_Pos)
#define GPIO_ODCR0_P7_Pos           7            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P7               (_U(0x1) << GPIO_ODCR0_P7_Pos)
#define GPIO_ODCR0_P8_Pos           8            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P8               (_U(0x1) << GPIO_ODCR0_P8_Pos)
#define GPIO_ODCR0_P9_Pos           9            /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P9               (_U(0x1) << GPIO_ODCR0_P9_Pos)
#define GPIO_ODCR0_P10_Pos          10           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P10              (_U(0x1) << GPIO_ODCR0_P10_Pos)
#define GPIO_ODCR0_P11_Pos          11           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P11              (_U(0x1) << GPIO_ODCR0_P11_Pos)
#define GPIO_ODCR0_P12_Pos          12           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P12              (_U(0x1) << GPIO_ODCR0_P12_Pos)
#define GPIO_ODCR0_P13_Pos          13           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P13              (_U(0x1) << GPIO_ODCR0_P13_Pos)
#define GPIO_ODCR0_P14_Pos          14           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P14              (_U(0x1) << GPIO_ODCR0_P14_Pos)
#define GPIO_ODCR0_P15_Pos          15           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P15              (_U(0x1) << GPIO_ODCR0_P15_Pos)
#define GPIO_ODCR0_P16_Pos          16           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P16              (_U(0x1) << GPIO_ODCR0_P16_Pos)
#define GPIO_ODCR0_P17_Pos          17           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P17              (_U(0x1) << GPIO_ODCR0_P17_Pos)
#define GPIO_ODCR0_P18_Pos          18           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P18              (_U(0x1) << GPIO_ODCR0_P18_Pos)
#define GPIO_ODCR0_P19_Pos          19           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P19              (_U(0x1) << GPIO_ODCR0_P19_Pos)
#define GPIO_ODCR0_P20_Pos          20           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P20              (_U(0x1) << GPIO_ODCR0_P20_Pos)
#define GPIO_ODCR0_P21_Pos          21           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P21              (_U(0x1) << GPIO_ODCR0_P21_Pos)
#define GPIO_ODCR0_P22_Pos          22           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P22              (_U(0x1) << GPIO_ODCR0_P22_Pos)
#define GPIO_ODCR0_P23_Pos          23           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P23              (_U(0x1) << GPIO_ODCR0_P23_Pos)
#define GPIO_ODCR0_P24_Pos          24           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P24              (_U(0x1) << GPIO_ODCR0_P24_Pos)
#define GPIO_ODCR0_P25_Pos          25           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P25              (_U(0x1) << GPIO_ODCR0_P25_Pos)
#define GPIO_ODCR0_P26_Pos          26           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P26              (_U(0x1) << GPIO_ODCR0_P26_Pos)
#define GPIO_ODCR0_P27_Pos          27           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P27              (_U(0x1) << GPIO_ODCR0_P27_Pos)
#define GPIO_ODCR0_P28_Pos          28           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P28              (_U(0x1) << GPIO_ODCR0_P28_Pos)
#define GPIO_ODCR0_P29_Pos          29           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P29              (_U(0x1) << GPIO_ODCR0_P29_Pos)
#define GPIO_ODCR0_P30_Pos          30           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P30              (_U(0x1) << GPIO_ODCR0_P30_Pos)
#define GPIO_ODCR0_P31_Pos          31           /**< \brief (GPIO_ODCR0) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0_P31              (_U(0x1) << GPIO_ODCR0_P31_Pos)
#define GPIO_ODCR0_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR0) MASK Register */

/* -------- GPIO_ODCR0S : (GPIO Offset: 0x104) (R/W 32) port Output Driving Capability Register 0 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR0S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR0S_OFFSET          0x104        /**< \brief (GPIO_ODCR0S offset) Output Driving Capability Register 0 - Set */

#define GPIO_ODCR0S_P0_Pos          0            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P0              (_U(0x1) << GPIO_ODCR0S_P0_Pos)
#define GPIO_ODCR0S_P1_Pos          1            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P1              (_U(0x1) << GPIO_ODCR0S_P1_Pos)
#define GPIO_ODCR0S_P2_Pos          2            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P2              (_U(0x1) << GPIO_ODCR0S_P2_Pos)
#define GPIO_ODCR0S_P3_Pos          3            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P3              (_U(0x1) << GPIO_ODCR0S_P3_Pos)
#define GPIO_ODCR0S_P4_Pos          4            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P4              (_U(0x1) << GPIO_ODCR0S_P4_Pos)
#define GPIO_ODCR0S_P5_Pos          5            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P5              (_U(0x1) << GPIO_ODCR0S_P5_Pos)
#define GPIO_ODCR0S_P6_Pos          6            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P6              (_U(0x1) << GPIO_ODCR0S_P6_Pos)
#define GPIO_ODCR0S_P7_Pos          7            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P7              (_U(0x1) << GPIO_ODCR0S_P7_Pos)
#define GPIO_ODCR0S_P8_Pos          8            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P8              (_U(0x1) << GPIO_ODCR0S_P8_Pos)
#define GPIO_ODCR0S_P9_Pos          9            /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P9              (_U(0x1) << GPIO_ODCR0S_P9_Pos)
#define GPIO_ODCR0S_P10_Pos         10           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P10             (_U(0x1) << GPIO_ODCR0S_P10_Pos)
#define GPIO_ODCR0S_P11_Pos         11           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P11             (_U(0x1) << GPIO_ODCR0S_P11_Pos)
#define GPIO_ODCR0S_P12_Pos         12           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P12             (_U(0x1) << GPIO_ODCR0S_P12_Pos)
#define GPIO_ODCR0S_P13_Pos         13           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P13             (_U(0x1) << GPIO_ODCR0S_P13_Pos)
#define GPIO_ODCR0S_P14_Pos         14           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P14             (_U(0x1) << GPIO_ODCR0S_P14_Pos)
#define GPIO_ODCR0S_P15_Pos         15           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P15             (_U(0x1) << GPIO_ODCR0S_P15_Pos)
#define GPIO_ODCR0S_P16_Pos         16           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P16             (_U(0x1) << GPIO_ODCR0S_P16_Pos)
#define GPIO_ODCR0S_P17_Pos         17           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P17             (_U(0x1) << GPIO_ODCR0S_P17_Pos)
#define GPIO_ODCR0S_P18_Pos         18           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P18             (_U(0x1) << GPIO_ODCR0S_P18_Pos)
#define GPIO_ODCR0S_P19_Pos         19           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P19             (_U(0x1) << GPIO_ODCR0S_P19_Pos)
#define GPIO_ODCR0S_P20_Pos         20           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P20             (_U(0x1) << GPIO_ODCR0S_P20_Pos)
#define GPIO_ODCR0S_P21_Pos         21           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P21             (_U(0x1) << GPIO_ODCR0S_P21_Pos)
#define GPIO_ODCR0S_P22_Pos         22           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P22             (_U(0x1) << GPIO_ODCR0S_P22_Pos)
#define GPIO_ODCR0S_P23_Pos         23           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P23             (_U(0x1) << GPIO_ODCR0S_P23_Pos)
#define GPIO_ODCR0S_P24_Pos         24           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P24             (_U(0x1) << GPIO_ODCR0S_P24_Pos)
#define GPIO_ODCR0S_P25_Pos         25           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P25             (_U(0x1) << GPIO_ODCR0S_P25_Pos)
#define GPIO_ODCR0S_P26_Pos         26           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P26             (_U(0x1) << GPIO_ODCR0S_P26_Pos)
#define GPIO_ODCR0S_P27_Pos         27           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P27             (_U(0x1) << GPIO_ODCR0S_P27_Pos)
#define GPIO_ODCR0S_P28_Pos         28           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P28             (_U(0x1) << GPIO_ODCR0S_P28_Pos)
#define GPIO_ODCR0S_P29_Pos         29           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P29             (_U(0x1) << GPIO_ODCR0S_P29_Pos)
#define GPIO_ODCR0S_P30_Pos         30           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P30             (_U(0x1) << GPIO_ODCR0S_P30_Pos)
#define GPIO_ODCR0S_P31_Pos         31           /**< \brief (GPIO_ODCR0S) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0S_P31             (_U(0x1) << GPIO_ODCR0S_P31_Pos)
#define GPIO_ODCR0S_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR0S) MASK Register */

/* -------- GPIO_ODCR0C : (GPIO Offset: 0x108) (R/W 32) port Output Driving Capability Register 0 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR0C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR0C_OFFSET          0x108        /**< \brief (GPIO_ODCR0C offset) Output Driving Capability Register 0 - Clear */

#define GPIO_ODCR0C_P0_Pos          0            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P0              (_U(0x1) << GPIO_ODCR0C_P0_Pos)
#define GPIO_ODCR0C_P1_Pos          1            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P1              (_U(0x1) << GPIO_ODCR0C_P1_Pos)
#define GPIO_ODCR0C_P2_Pos          2            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P2              (_U(0x1) << GPIO_ODCR0C_P2_Pos)
#define GPIO_ODCR0C_P3_Pos          3            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P3              (_U(0x1) << GPIO_ODCR0C_P3_Pos)
#define GPIO_ODCR0C_P4_Pos          4            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P4              (_U(0x1) << GPIO_ODCR0C_P4_Pos)
#define GPIO_ODCR0C_P5_Pos          5            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P5              (_U(0x1) << GPIO_ODCR0C_P5_Pos)
#define GPIO_ODCR0C_P6_Pos          6            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P6              (_U(0x1) << GPIO_ODCR0C_P6_Pos)
#define GPIO_ODCR0C_P7_Pos          7            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P7              (_U(0x1) << GPIO_ODCR0C_P7_Pos)
#define GPIO_ODCR0C_P8_Pos          8            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P8              (_U(0x1) << GPIO_ODCR0C_P8_Pos)
#define GPIO_ODCR0C_P9_Pos          9            /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P9              (_U(0x1) << GPIO_ODCR0C_P9_Pos)
#define GPIO_ODCR0C_P10_Pos         10           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P10             (_U(0x1) << GPIO_ODCR0C_P10_Pos)
#define GPIO_ODCR0C_P11_Pos         11           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P11             (_U(0x1) << GPIO_ODCR0C_P11_Pos)
#define GPIO_ODCR0C_P12_Pos         12           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P12             (_U(0x1) << GPIO_ODCR0C_P12_Pos)
#define GPIO_ODCR0C_P13_Pos         13           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P13             (_U(0x1) << GPIO_ODCR0C_P13_Pos)
#define GPIO_ODCR0C_P14_Pos         14           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P14             (_U(0x1) << GPIO_ODCR0C_P14_Pos)
#define GPIO_ODCR0C_P15_Pos         15           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P15             (_U(0x1) << GPIO_ODCR0C_P15_Pos)
#define GPIO_ODCR0C_P16_Pos         16           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P16             (_U(0x1) << GPIO_ODCR0C_P16_Pos)
#define GPIO_ODCR0C_P17_Pos         17           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P17             (_U(0x1) << GPIO_ODCR0C_P17_Pos)
#define GPIO_ODCR0C_P18_Pos         18           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P18             (_U(0x1) << GPIO_ODCR0C_P18_Pos)
#define GPIO_ODCR0C_P19_Pos         19           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P19             (_U(0x1) << GPIO_ODCR0C_P19_Pos)
#define GPIO_ODCR0C_P20_Pos         20           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P20             (_U(0x1) << GPIO_ODCR0C_P20_Pos)
#define GPIO_ODCR0C_P21_Pos         21           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P21             (_U(0x1) << GPIO_ODCR0C_P21_Pos)
#define GPIO_ODCR0C_P22_Pos         22           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P22             (_U(0x1) << GPIO_ODCR0C_P22_Pos)
#define GPIO_ODCR0C_P23_Pos         23           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P23             (_U(0x1) << GPIO_ODCR0C_P23_Pos)
#define GPIO_ODCR0C_P24_Pos         24           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P24             (_U(0x1) << GPIO_ODCR0C_P24_Pos)
#define GPIO_ODCR0C_P25_Pos         25           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P25             (_U(0x1) << GPIO_ODCR0C_P25_Pos)
#define GPIO_ODCR0C_P26_Pos         26           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P26             (_U(0x1) << GPIO_ODCR0C_P26_Pos)
#define GPIO_ODCR0C_P27_Pos         27           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P27             (_U(0x1) << GPIO_ODCR0C_P27_Pos)
#define GPIO_ODCR0C_P28_Pos         28           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P28             (_U(0x1) << GPIO_ODCR0C_P28_Pos)
#define GPIO_ODCR0C_P29_Pos         29           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P29             (_U(0x1) << GPIO_ODCR0C_P29_Pos)
#define GPIO_ODCR0C_P30_Pos         30           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P30             (_U(0x1) << GPIO_ODCR0C_P30_Pos)
#define GPIO_ODCR0C_P31_Pos         31           /**< \brief (GPIO_ODCR0C) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0C_P31             (_U(0x1) << GPIO_ODCR0C_P31_Pos)
#define GPIO_ODCR0C_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR0C) MASK Register */

/* -------- GPIO_ODCR0T : (GPIO Offset: 0x10C) (R/W 32) port Output Driving Capability Register 0 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 0 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 0 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 0 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 0 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 0 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 0 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 0 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 0 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 0 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 0 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 0 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 0 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 0 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 0 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 0 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 0 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 0 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 0 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 0 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 0 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 0 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 0 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 0 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 0 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 0 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 0 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 0 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 0 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 0 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 0 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 0 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 0 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR0T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR0T_OFFSET          0x10C        /**< \brief (GPIO_ODCR0T offset) Output Driving Capability Register 0 - Toggle */

#define GPIO_ODCR0T_P0_Pos          0            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P0              (_U(0x1) << GPIO_ODCR0T_P0_Pos)
#define GPIO_ODCR0T_P1_Pos          1            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P1              (_U(0x1) << GPIO_ODCR0T_P1_Pos)
#define GPIO_ODCR0T_P2_Pos          2            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P2              (_U(0x1) << GPIO_ODCR0T_P2_Pos)
#define GPIO_ODCR0T_P3_Pos          3            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P3              (_U(0x1) << GPIO_ODCR0T_P3_Pos)
#define GPIO_ODCR0T_P4_Pos          4            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P4              (_U(0x1) << GPIO_ODCR0T_P4_Pos)
#define GPIO_ODCR0T_P5_Pos          5            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P5              (_U(0x1) << GPIO_ODCR0T_P5_Pos)
#define GPIO_ODCR0T_P6_Pos          6            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P6              (_U(0x1) << GPIO_ODCR0T_P6_Pos)
#define GPIO_ODCR0T_P7_Pos          7            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P7              (_U(0x1) << GPIO_ODCR0T_P7_Pos)
#define GPIO_ODCR0T_P8_Pos          8            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P8              (_U(0x1) << GPIO_ODCR0T_P8_Pos)
#define GPIO_ODCR0T_P9_Pos          9            /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P9              (_U(0x1) << GPIO_ODCR0T_P9_Pos)
#define GPIO_ODCR0T_P10_Pos         10           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P10             (_U(0x1) << GPIO_ODCR0T_P10_Pos)
#define GPIO_ODCR0T_P11_Pos         11           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P11             (_U(0x1) << GPIO_ODCR0T_P11_Pos)
#define GPIO_ODCR0T_P12_Pos         12           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P12             (_U(0x1) << GPIO_ODCR0T_P12_Pos)
#define GPIO_ODCR0T_P13_Pos         13           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P13             (_U(0x1) << GPIO_ODCR0T_P13_Pos)
#define GPIO_ODCR0T_P14_Pos         14           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P14             (_U(0x1) << GPIO_ODCR0T_P14_Pos)
#define GPIO_ODCR0T_P15_Pos         15           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P15             (_U(0x1) << GPIO_ODCR0T_P15_Pos)
#define GPIO_ODCR0T_P16_Pos         16           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P16             (_U(0x1) << GPIO_ODCR0T_P16_Pos)
#define GPIO_ODCR0T_P17_Pos         17           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P17             (_U(0x1) << GPIO_ODCR0T_P17_Pos)
#define GPIO_ODCR0T_P18_Pos         18           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P18             (_U(0x1) << GPIO_ODCR0T_P18_Pos)
#define GPIO_ODCR0T_P19_Pos         19           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P19             (_U(0x1) << GPIO_ODCR0T_P19_Pos)
#define GPIO_ODCR0T_P20_Pos         20           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P20             (_U(0x1) << GPIO_ODCR0T_P20_Pos)
#define GPIO_ODCR0T_P21_Pos         21           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P21             (_U(0x1) << GPIO_ODCR0T_P21_Pos)
#define GPIO_ODCR0T_P22_Pos         22           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P22             (_U(0x1) << GPIO_ODCR0T_P22_Pos)
#define GPIO_ODCR0T_P23_Pos         23           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P23             (_U(0x1) << GPIO_ODCR0T_P23_Pos)
#define GPIO_ODCR0T_P24_Pos         24           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P24             (_U(0x1) << GPIO_ODCR0T_P24_Pos)
#define GPIO_ODCR0T_P25_Pos         25           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P25             (_U(0x1) << GPIO_ODCR0T_P25_Pos)
#define GPIO_ODCR0T_P26_Pos         26           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P26             (_U(0x1) << GPIO_ODCR0T_P26_Pos)
#define GPIO_ODCR0T_P27_Pos         27           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P27             (_U(0x1) << GPIO_ODCR0T_P27_Pos)
#define GPIO_ODCR0T_P28_Pos         28           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P28             (_U(0x1) << GPIO_ODCR0T_P28_Pos)
#define GPIO_ODCR0T_P29_Pos         29           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P29             (_U(0x1) << GPIO_ODCR0T_P29_Pos)
#define GPIO_ODCR0T_P30_Pos         30           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P30             (_U(0x1) << GPIO_ODCR0T_P30_Pos)
#define GPIO_ODCR0T_P31_Pos         31           /**< \brief (GPIO_ODCR0T) Output Driving Capability Register Bit 0 */
#define GPIO_ODCR0T_P31             (_U(0x1) << GPIO_ODCR0T_P31_Pos)
#define GPIO_ODCR0T_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR0T) MASK Register */

/* -------- GPIO_ODCR1 : (GPIO Offset: 0x110) (R/W 32) port Output Driving Capability Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR1_OFFSET           0x110        /**< \brief (GPIO_ODCR1 offset) Output Driving Capability Register 1 */

#define GPIO_ODCR1_P0_Pos           0            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P0               (_U(0x1) << GPIO_ODCR1_P0_Pos)
#define GPIO_ODCR1_P1_Pos           1            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P1               (_U(0x1) << GPIO_ODCR1_P1_Pos)
#define GPIO_ODCR1_P2_Pos           2            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P2               (_U(0x1) << GPIO_ODCR1_P2_Pos)
#define GPIO_ODCR1_P3_Pos           3            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P3               (_U(0x1) << GPIO_ODCR1_P3_Pos)
#define GPIO_ODCR1_P4_Pos           4            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P4               (_U(0x1) << GPIO_ODCR1_P4_Pos)
#define GPIO_ODCR1_P5_Pos           5            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P5               (_U(0x1) << GPIO_ODCR1_P5_Pos)
#define GPIO_ODCR1_P6_Pos           6            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P6               (_U(0x1) << GPIO_ODCR1_P6_Pos)
#define GPIO_ODCR1_P7_Pos           7            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P7               (_U(0x1) << GPIO_ODCR1_P7_Pos)
#define GPIO_ODCR1_P8_Pos           8            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P8               (_U(0x1) << GPIO_ODCR1_P8_Pos)
#define GPIO_ODCR1_P9_Pos           9            /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P9               (_U(0x1) << GPIO_ODCR1_P9_Pos)
#define GPIO_ODCR1_P10_Pos          10           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P10              (_U(0x1) << GPIO_ODCR1_P10_Pos)
#define GPIO_ODCR1_P11_Pos          11           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P11              (_U(0x1) << GPIO_ODCR1_P11_Pos)
#define GPIO_ODCR1_P12_Pos          12           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P12              (_U(0x1) << GPIO_ODCR1_P12_Pos)
#define GPIO_ODCR1_P13_Pos          13           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P13              (_U(0x1) << GPIO_ODCR1_P13_Pos)
#define GPIO_ODCR1_P14_Pos          14           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P14              (_U(0x1) << GPIO_ODCR1_P14_Pos)
#define GPIO_ODCR1_P15_Pos          15           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P15              (_U(0x1) << GPIO_ODCR1_P15_Pos)
#define GPIO_ODCR1_P16_Pos          16           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P16              (_U(0x1) << GPIO_ODCR1_P16_Pos)
#define GPIO_ODCR1_P17_Pos          17           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P17              (_U(0x1) << GPIO_ODCR1_P17_Pos)
#define GPIO_ODCR1_P18_Pos          18           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P18              (_U(0x1) << GPIO_ODCR1_P18_Pos)
#define GPIO_ODCR1_P19_Pos          19           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P19              (_U(0x1) << GPIO_ODCR1_P19_Pos)
#define GPIO_ODCR1_P20_Pos          20           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P20              (_U(0x1) << GPIO_ODCR1_P20_Pos)
#define GPIO_ODCR1_P21_Pos          21           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P21              (_U(0x1) << GPIO_ODCR1_P21_Pos)
#define GPIO_ODCR1_P22_Pos          22           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P22              (_U(0x1) << GPIO_ODCR1_P22_Pos)
#define GPIO_ODCR1_P23_Pos          23           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P23              (_U(0x1) << GPIO_ODCR1_P23_Pos)
#define GPIO_ODCR1_P24_Pos          24           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P24              (_U(0x1) << GPIO_ODCR1_P24_Pos)
#define GPIO_ODCR1_P25_Pos          25           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P25              (_U(0x1) << GPIO_ODCR1_P25_Pos)
#define GPIO_ODCR1_P26_Pos          26           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P26              (_U(0x1) << GPIO_ODCR1_P26_Pos)
#define GPIO_ODCR1_P27_Pos          27           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P27              (_U(0x1) << GPIO_ODCR1_P27_Pos)
#define GPIO_ODCR1_P28_Pos          28           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P28              (_U(0x1) << GPIO_ODCR1_P28_Pos)
#define GPIO_ODCR1_P29_Pos          29           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P29              (_U(0x1) << GPIO_ODCR1_P29_Pos)
#define GPIO_ODCR1_P30_Pos          30           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P30              (_U(0x1) << GPIO_ODCR1_P30_Pos)
#define GPIO_ODCR1_P31_Pos          31           /**< \brief (GPIO_ODCR1) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1_P31              (_U(0x1) << GPIO_ODCR1_P31_Pos)
#define GPIO_ODCR1_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR1) MASK Register */

/* -------- GPIO_ODCR1S : (GPIO Offset: 0x114) (R/W 32) port Output Driving Capability Register 1 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR1S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR1S_OFFSET          0x114        /**< \brief (GPIO_ODCR1S offset) Output Driving Capability Register 1 - Set */

#define GPIO_ODCR1S_P0_Pos          0            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P0              (_U(0x1) << GPIO_ODCR1S_P0_Pos)
#define GPIO_ODCR1S_P1_Pos          1            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P1              (_U(0x1) << GPIO_ODCR1S_P1_Pos)
#define GPIO_ODCR1S_P2_Pos          2            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P2              (_U(0x1) << GPIO_ODCR1S_P2_Pos)
#define GPIO_ODCR1S_P3_Pos          3            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P3              (_U(0x1) << GPIO_ODCR1S_P3_Pos)
#define GPIO_ODCR1S_P4_Pos          4            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P4              (_U(0x1) << GPIO_ODCR1S_P4_Pos)
#define GPIO_ODCR1S_P5_Pos          5            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P5              (_U(0x1) << GPIO_ODCR1S_P5_Pos)
#define GPIO_ODCR1S_P6_Pos          6            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P6              (_U(0x1) << GPIO_ODCR1S_P6_Pos)
#define GPIO_ODCR1S_P7_Pos          7            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P7              (_U(0x1) << GPIO_ODCR1S_P7_Pos)
#define GPIO_ODCR1S_P8_Pos          8            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P8              (_U(0x1) << GPIO_ODCR1S_P8_Pos)
#define GPIO_ODCR1S_P9_Pos          9            /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P9              (_U(0x1) << GPIO_ODCR1S_P9_Pos)
#define GPIO_ODCR1S_P10_Pos         10           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P10             (_U(0x1) << GPIO_ODCR1S_P10_Pos)
#define GPIO_ODCR1S_P11_Pos         11           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P11             (_U(0x1) << GPIO_ODCR1S_P11_Pos)
#define GPIO_ODCR1S_P12_Pos         12           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P12             (_U(0x1) << GPIO_ODCR1S_P12_Pos)
#define GPIO_ODCR1S_P13_Pos         13           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P13             (_U(0x1) << GPIO_ODCR1S_P13_Pos)
#define GPIO_ODCR1S_P14_Pos         14           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P14             (_U(0x1) << GPIO_ODCR1S_P14_Pos)
#define GPIO_ODCR1S_P15_Pos         15           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P15             (_U(0x1) << GPIO_ODCR1S_P15_Pos)
#define GPIO_ODCR1S_P16_Pos         16           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P16             (_U(0x1) << GPIO_ODCR1S_P16_Pos)
#define GPIO_ODCR1S_P17_Pos         17           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P17             (_U(0x1) << GPIO_ODCR1S_P17_Pos)
#define GPIO_ODCR1S_P18_Pos         18           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P18             (_U(0x1) << GPIO_ODCR1S_P18_Pos)
#define GPIO_ODCR1S_P19_Pos         19           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P19             (_U(0x1) << GPIO_ODCR1S_P19_Pos)
#define GPIO_ODCR1S_P20_Pos         20           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P20             (_U(0x1) << GPIO_ODCR1S_P20_Pos)
#define GPIO_ODCR1S_P21_Pos         21           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P21             (_U(0x1) << GPIO_ODCR1S_P21_Pos)
#define GPIO_ODCR1S_P22_Pos         22           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P22             (_U(0x1) << GPIO_ODCR1S_P22_Pos)
#define GPIO_ODCR1S_P23_Pos         23           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P23             (_U(0x1) << GPIO_ODCR1S_P23_Pos)
#define GPIO_ODCR1S_P24_Pos         24           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P24             (_U(0x1) << GPIO_ODCR1S_P24_Pos)
#define GPIO_ODCR1S_P25_Pos         25           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P25             (_U(0x1) << GPIO_ODCR1S_P25_Pos)
#define GPIO_ODCR1S_P26_Pos         26           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P26             (_U(0x1) << GPIO_ODCR1S_P26_Pos)
#define GPIO_ODCR1S_P27_Pos         27           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P27             (_U(0x1) << GPIO_ODCR1S_P27_Pos)
#define GPIO_ODCR1S_P28_Pos         28           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P28             (_U(0x1) << GPIO_ODCR1S_P28_Pos)
#define GPIO_ODCR1S_P29_Pos         29           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P29             (_U(0x1) << GPIO_ODCR1S_P29_Pos)
#define GPIO_ODCR1S_P30_Pos         30           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P30             (_U(0x1) << GPIO_ODCR1S_P30_Pos)
#define GPIO_ODCR1S_P31_Pos         31           /**< \brief (GPIO_ODCR1S) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1S_P31             (_U(0x1) << GPIO_ODCR1S_P31_Pos)
#define GPIO_ODCR1S_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR1S) MASK Register */

/* -------- GPIO_ODCR1C : (GPIO Offset: 0x118) (R/W 32) port Output Driving Capability Register 1 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR1C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR1C_OFFSET          0x118        /**< \brief (GPIO_ODCR1C offset) Output Driving Capability Register 1 - Clear */

#define GPIO_ODCR1C_P0_Pos          0            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P0              (_U(0x1) << GPIO_ODCR1C_P0_Pos)
#define GPIO_ODCR1C_P1_Pos          1            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P1              (_U(0x1) << GPIO_ODCR1C_P1_Pos)
#define GPIO_ODCR1C_P2_Pos          2            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P2              (_U(0x1) << GPIO_ODCR1C_P2_Pos)
#define GPIO_ODCR1C_P3_Pos          3            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P3              (_U(0x1) << GPIO_ODCR1C_P3_Pos)
#define GPIO_ODCR1C_P4_Pos          4            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P4              (_U(0x1) << GPIO_ODCR1C_P4_Pos)
#define GPIO_ODCR1C_P5_Pos          5            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P5              (_U(0x1) << GPIO_ODCR1C_P5_Pos)
#define GPIO_ODCR1C_P6_Pos          6            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P6              (_U(0x1) << GPIO_ODCR1C_P6_Pos)
#define GPIO_ODCR1C_P7_Pos          7            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P7              (_U(0x1) << GPIO_ODCR1C_P7_Pos)
#define GPIO_ODCR1C_P8_Pos          8            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P8              (_U(0x1) << GPIO_ODCR1C_P8_Pos)
#define GPIO_ODCR1C_P9_Pos          9            /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P9              (_U(0x1) << GPIO_ODCR1C_P9_Pos)
#define GPIO_ODCR1C_P10_Pos         10           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P10             (_U(0x1) << GPIO_ODCR1C_P10_Pos)
#define GPIO_ODCR1C_P11_Pos         11           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P11             (_U(0x1) << GPIO_ODCR1C_P11_Pos)
#define GPIO_ODCR1C_P12_Pos         12           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P12             (_U(0x1) << GPIO_ODCR1C_P12_Pos)
#define GPIO_ODCR1C_P13_Pos         13           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P13             (_U(0x1) << GPIO_ODCR1C_P13_Pos)
#define GPIO_ODCR1C_P14_Pos         14           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P14             (_U(0x1) << GPIO_ODCR1C_P14_Pos)
#define GPIO_ODCR1C_P15_Pos         15           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P15             (_U(0x1) << GPIO_ODCR1C_P15_Pos)
#define GPIO_ODCR1C_P16_Pos         16           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P16             (_U(0x1) << GPIO_ODCR1C_P16_Pos)
#define GPIO_ODCR1C_P17_Pos         17           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P17             (_U(0x1) << GPIO_ODCR1C_P17_Pos)
#define GPIO_ODCR1C_P18_Pos         18           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P18             (_U(0x1) << GPIO_ODCR1C_P18_Pos)
#define GPIO_ODCR1C_P19_Pos         19           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P19             (_U(0x1) << GPIO_ODCR1C_P19_Pos)
#define GPIO_ODCR1C_P20_Pos         20           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P20             (_U(0x1) << GPIO_ODCR1C_P20_Pos)
#define GPIO_ODCR1C_P21_Pos         21           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P21             (_U(0x1) << GPIO_ODCR1C_P21_Pos)
#define GPIO_ODCR1C_P22_Pos         22           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P22             (_U(0x1) << GPIO_ODCR1C_P22_Pos)
#define GPIO_ODCR1C_P23_Pos         23           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P23             (_U(0x1) << GPIO_ODCR1C_P23_Pos)
#define GPIO_ODCR1C_P24_Pos         24           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P24             (_U(0x1) << GPIO_ODCR1C_P24_Pos)
#define GPIO_ODCR1C_P25_Pos         25           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P25             (_U(0x1) << GPIO_ODCR1C_P25_Pos)
#define GPIO_ODCR1C_P26_Pos         26           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P26             (_U(0x1) << GPIO_ODCR1C_P26_Pos)
#define GPIO_ODCR1C_P27_Pos         27           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P27             (_U(0x1) << GPIO_ODCR1C_P27_Pos)
#define GPIO_ODCR1C_P28_Pos         28           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P28             (_U(0x1) << GPIO_ODCR1C_P28_Pos)
#define GPIO_ODCR1C_P29_Pos         29           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P29             (_U(0x1) << GPIO_ODCR1C_P29_Pos)
#define GPIO_ODCR1C_P30_Pos         30           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P30             (_U(0x1) << GPIO_ODCR1C_P30_Pos)
#define GPIO_ODCR1C_P31_Pos         31           /**< \brief (GPIO_ODCR1C) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1C_P31             (_U(0x1) << GPIO_ODCR1C_P31_Pos)
#define GPIO_ODCR1C_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR1C) MASK Register */

/* -------- GPIO_ODCR1T : (GPIO Offset: 0x11C) (R/W 32) port Output Driving Capability Register 1 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Driving Capability Register Bit 1 */
    uint32_t P1:1;             /*!< bit:      1  Output Driving Capability Register Bit 1 */
    uint32_t P2:1;             /*!< bit:      2  Output Driving Capability Register Bit 1 */
    uint32_t P3:1;             /*!< bit:      3  Output Driving Capability Register Bit 1 */
    uint32_t P4:1;             /*!< bit:      4  Output Driving Capability Register Bit 1 */
    uint32_t P5:1;             /*!< bit:      5  Output Driving Capability Register Bit 1 */
    uint32_t P6:1;             /*!< bit:      6  Output Driving Capability Register Bit 1 */
    uint32_t P7:1;             /*!< bit:      7  Output Driving Capability Register Bit 1 */
    uint32_t P8:1;             /*!< bit:      8  Output Driving Capability Register Bit 1 */
    uint32_t P9:1;             /*!< bit:      9  Output Driving Capability Register Bit 1 */
    uint32_t P10:1;            /*!< bit:     10  Output Driving Capability Register Bit 1 */
    uint32_t P11:1;            /*!< bit:     11  Output Driving Capability Register Bit 1 */
    uint32_t P12:1;            /*!< bit:     12  Output Driving Capability Register Bit 1 */
    uint32_t P13:1;            /*!< bit:     13  Output Driving Capability Register Bit 1 */
    uint32_t P14:1;            /*!< bit:     14  Output Driving Capability Register Bit 1 */
    uint32_t P15:1;            /*!< bit:     15  Output Driving Capability Register Bit 1 */
    uint32_t P16:1;            /*!< bit:     16  Output Driving Capability Register Bit 1 */
    uint32_t P17:1;            /*!< bit:     17  Output Driving Capability Register Bit 1 */
    uint32_t P18:1;            /*!< bit:     18  Output Driving Capability Register Bit 1 */
    uint32_t P19:1;            /*!< bit:     19  Output Driving Capability Register Bit 1 */
    uint32_t P20:1;            /*!< bit:     20  Output Driving Capability Register Bit 1 */
    uint32_t P21:1;            /*!< bit:     21  Output Driving Capability Register Bit 1 */
    uint32_t P22:1;            /*!< bit:     22  Output Driving Capability Register Bit 1 */
    uint32_t P23:1;            /*!< bit:     23  Output Driving Capability Register Bit 1 */
    uint32_t P24:1;            /*!< bit:     24  Output Driving Capability Register Bit 1 */
    uint32_t P25:1;            /*!< bit:     25  Output Driving Capability Register Bit 1 */
    uint32_t P26:1;            /*!< bit:     26  Output Driving Capability Register Bit 1 */
    uint32_t P27:1;            /*!< bit:     27  Output Driving Capability Register Bit 1 */
    uint32_t P28:1;            /*!< bit:     28  Output Driving Capability Register Bit 1 */
    uint32_t P29:1;            /*!< bit:     29  Output Driving Capability Register Bit 1 */
    uint32_t P30:1;            /*!< bit:     30  Output Driving Capability Register Bit 1 */
    uint32_t P31:1;            /*!< bit:     31  Output Driving Capability Register Bit 1 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ODCR1T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ODCR1T_OFFSET          0x11C        /**< \brief (GPIO_ODCR1T offset) Output Driving Capability Register 1 - Toggle */

#define GPIO_ODCR1T_P0_Pos          0            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P0              (_U(0x1) << GPIO_ODCR1T_P0_Pos)
#define GPIO_ODCR1T_P1_Pos          1            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P1              (_U(0x1) << GPIO_ODCR1T_P1_Pos)
#define GPIO_ODCR1T_P2_Pos          2            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P2              (_U(0x1) << GPIO_ODCR1T_P2_Pos)
#define GPIO_ODCR1T_P3_Pos          3            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P3              (_U(0x1) << GPIO_ODCR1T_P3_Pos)
#define GPIO_ODCR1T_P4_Pos          4            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P4              (_U(0x1) << GPIO_ODCR1T_P4_Pos)
#define GPIO_ODCR1T_P5_Pos          5            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P5              (_U(0x1) << GPIO_ODCR1T_P5_Pos)
#define GPIO_ODCR1T_P6_Pos          6            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P6              (_U(0x1) << GPIO_ODCR1T_P6_Pos)
#define GPIO_ODCR1T_P7_Pos          7            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P7              (_U(0x1) << GPIO_ODCR1T_P7_Pos)
#define GPIO_ODCR1T_P8_Pos          8            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P8              (_U(0x1) << GPIO_ODCR1T_P8_Pos)
#define GPIO_ODCR1T_P9_Pos          9            /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P9              (_U(0x1) << GPIO_ODCR1T_P9_Pos)
#define GPIO_ODCR1T_P10_Pos         10           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P10             (_U(0x1) << GPIO_ODCR1T_P10_Pos)
#define GPIO_ODCR1T_P11_Pos         11           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P11             (_U(0x1) << GPIO_ODCR1T_P11_Pos)
#define GPIO_ODCR1T_P12_Pos         12           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P12             (_U(0x1) << GPIO_ODCR1T_P12_Pos)
#define GPIO_ODCR1T_P13_Pos         13           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P13             (_U(0x1) << GPIO_ODCR1T_P13_Pos)
#define GPIO_ODCR1T_P14_Pos         14           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P14             (_U(0x1) << GPIO_ODCR1T_P14_Pos)
#define GPIO_ODCR1T_P15_Pos         15           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P15             (_U(0x1) << GPIO_ODCR1T_P15_Pos)
#define GPIO_ODCR1T_P16_Pos         16           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P16             (_U(0x1) << GPIO_ODCR1T_P16_Pos)
#define GPIO_ODCR1T_P17_Pos         17           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P17             (_U(0x1) << GPIO_ODCR1T_P17_Pos)
#define GPIO_ODCR1T_P18_Pos         18           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P18             (_U(0x1) << GPIO_ODCR1T_P18_Pos)
#define GPIO_ODCR1T_P19_Pos         19           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P19             (_U(0x1) << GPIO_ODCR1T_P19_Pos)
#define GPIO_ODCR1T_P20_Pos         20           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P20             (_U(0x1) << GPIO_ODCR1T_P20_Pos)
#define GPIO_ODCR1T_P21_Pos         21           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P21             (_U(0x1) << GPIO_ODCR1T_P21_Pos)
#define GPIO_ODCR1T_P22_Pos         22           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P22             (_U(0x1) << GPIO_ODCR1T_P22_Pos)
#define GPIO_ODCR1T_P23_Pos         23           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P23             (_U(0x1) << GPIO_ODCR1T_P23_Pos)
#define GPIO_ODCR1T_P24_Pos         24           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P24             (_U(0x1) << GPIO_ODCR1T_P24_Pos)
#define GPIO_ODCR1T_P25_Pos         25           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P25             (_U(0x1) << GPIO_ODCR1T_P25_Pos)
#define GPIO_ODCR1T_P26_Pos         26           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P26             (_U(0x1) << GPIO_ODCR1T_P26_Pos)
#define GPIO_ODCR1T_P27_Pos         27           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P27             (_U(0x1) << GPIO_ODCR1T_P27_Pos)
#define GPIO_ODCR1T_P28_Pos         28           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P28             (_U(0x1) << GPIO_ODCR1T_P28_Pos)
#define GPIO_ODCR1T_P29_Pos         29           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P29             (_U(0x1) << GPIO_ODCR1T_P29_Pos)
#define GPIO_ODCR1T_P30_Pos         30           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P30             (_U(0x1) << GPIO_ODCR1T_P30_Pos)
#define GPIO_ODCR1T_P31_Pos         31           /**< \brief (GPIO_ODCR1T) Output Driving Capability Register Bit 1 */
#define GPIO_ODCR1T_P31             (_U(0x1) << GPIO_ODCR1T_P31_Pos)
#define GPIO_ODCR1T_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_ODCR1T) MASK Register */

/* -------- GPIO_OSRR0 : (GPIO Offset: 0x130) (R/W 32) port Output Slew Rate Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Slew Rate Control Enable    */
    uint32_t P1:1;             /*!< bit:      1  Output Slew Rate Control Enable    */
    uint32_t P2:1;             /*!< bit:      2  Output Slew Rate Control Enable    */
    uint32_t P3:1;             /*!< bit:      3  Output Slew Rate Control Enable    */
    uint32_t P4:1;             /*!< bit:      4  Output Slew Rate Control Enable    */
    uint32_t P5:1;             /*!< bit:      5  Output Slew Rate Control Enable    */
    uint32_t P6:1;             /*!< bit:      6  Output Slew Rate Control Enable    */
    uint32_t P7:1;             /*!< bit:      7  Output Slew Rate Control Enable    */
    uint32_t P8:1;             /*!< bit:      8  Output Slew Rate Control Enable    */
    uint32_t P9:1;             /*!< bit:      9  Output Slew Rate Control Enable    */
    uint32_t P10:1;            /*!< bit:     10  Output Slew Rate Control Enable    */
    uint32_t P11:1;            /*!< bit:     11  Output Slew Rate Control Enable    */
    uint32_t P12:1;            /*!< bit:     12  Output Slew Rate Control Enable    */
    uint32_t P13:1;            /*!< bit:     13  Output Slew Rate Control Enable    */
    uint32_t P14:1;            /*!< bit:     14  Output Slew Rate Control Enable    */
    uint32_t P15:1;            /*!< bit:     15  Output Slew Rate Control Enable    */
    uint32_t P16:1;            /*!< bit:     16  Output Slew Rate Control Enable    */
    uint32_t P17:1;            /*!< bit:     17  Output Slew Rate Control Enable    */
    uint32_t P18:1;            /*!< bit:     18  Output Slew Rate Control Enable    */
    uint32_t P19:1;            /*!< bit:     19  Output Slew Rate Control Enable    */
    uint32_t P20:1;            /*!< bit:     20  Output Slew Rate Control Enable    */
    uint32_t P21:1;            /*!< bit:     21  Output Slew Rate Control Enable    */
    uint32_t P22:1;            /*!< bit:     22  Output Slew Rate Control Enable    */
    uint32_t P23:1;            /*!< bit:     23  Output Slew Rate Control Enable    */
    uint32_t P24:1;            /*!< bit:     24  Output Slew Rate Control Enable    */
    uint32_t P25:1;            /*!< bit:     25  Output Slew Rate Control Enable    */
    uint32_t P26:1;            /*!< bit:     26  Output Slew Rate Control Enable    */
    uint32_t P27:1;            /*!< bit:     27  Output Slew Rate Control Enable    */
    uint32_t P28:1;            /*!< bit:     28  Output Slew Rate Control Enable    */
    uint32_t P29:1;            /*!< bit:     29  Output Slew Rate Control Enable    */
    uint32_t P30:1;            /*!< bit:     30  Output Slew Rate Control Enable    */
    uint32_t P31:1;            /*!< bit:     31  Output Slew Rate Control Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OSRR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OSRR0_OFFSET           0x130        /**< \brief (GPIO_OSRR0 offset) Output Slew Rate Register 0 */

#define GPIO_OSRR0_P0_Pos           0            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P0               (_U(0x1) << GPIO_OSRR0_P0_Pos)
#define GPIO_OSRR0_P1_Pos           1            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P1               (_U(0x1) << GPIO_OSRR0_P1_Pos)
#define GPIO_OSRR0_P2_Pos           2            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P2               (_U(0x1) << GPIO_OSRR0_P2_Pos)
#define GPIO_OSRR0_P3_Pos           3            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P3               (_U(0x1) << GPIO_OSRR0_P3_Pos)
#define GPIO_OSRR0_P4_Pos           4            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P4               (_U(0x1) << GPIO_OSRR0_P4_Pos)
#define GPIO_OSRR0_P5_Pos           5            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P5               (_U(0x1) << GPIO_OSRR0_P5_Pos)
#define GPIO_OSRR0_P6_Pos           6            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P6               (_U(0x1) << GPIO_OSRR0_P6_Pos)
#define GPIO_OSRR0_P7_Pos           7            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P7               (_U(0x1) << GPIO_OSRR0_P7_Pos)
#define GPIO_OSRR0_P8_Pos           8            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P8               (_U(0x1) << GPIO_OSRR0_P8_Pos)
#define GPIO_OSRR0_P9_Pos           9            /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P9               (_U(0x1) << GPIO_OSRR0_P9_Pos)
#define GPIO_OSRR0_P10_Pos          10           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P10              (_U(0x1) << GPIO_OSRR0_P10_Pos)
#define GPIO_OSRR0_P11_Pos          11           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P11              (_U(0x1) << GPIO_OSRR0_P11_Pos)
#define GPIO_OSRR0_P12_Pos          12           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P12              (_U(0x1) << GPIO_OSRR0_P12_Pos)
#define GPIO_OSRR0_P13_Pos          13           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P13              (_U(0x1) << GPIO_OSRR0_P13_Pos)
#define GPIO_OSRR0_P14_Pos          14           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P14              (_U(0x1) << GPIO_OSRR0_P14_Pos)
#define GPIO_OSRR0_P15_Pos          15           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P15              (_U(0x1) << GPIO_OSRR0_P15_Pos)
#define GPIO_OSRR0_P16_Pos          16           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P16              (_U(0x1) << GPIO_OSRR0_P16_Pos)
#define GPIO_OSRR0_P17_Pos          17           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P17              (_U(0x1) << GPIO_OSRR0_P17_Pos)
#define GPIO_OSRR0_P18_Pos          18           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P18              (_U(0x1) << GPIO_OSRR0_P18_Pos)
#define GPIO_OSRR0_P19_Pos          19           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P19              (_U(0x1) << GPIO_OSRR0_P19_Pos)
#define GPIO_OSRR0_P20_Pos          20           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P20              (_U(0x1) << GPIO_OSRR0_P20_Pos)
#define GPIO_OSRR0_P21_Pos          21           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P21              (_U(0x1) << GPIO_OSRR0_P21_Pos)
#define GPIO_OSRR0_P22_Pos          22           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P22              (_U(0x1) << GPIO_OSRR0_P22_Pos)
#define GPIO_OSRR0_P23_Pos          23           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P23              (_U(0x1) << GPIO_OSRR0_P23_Pos)
#define GPIO_OSRR0_P24_Pos          24           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P24              (_U(0x1) << GPIO_OSRR0_P24_Pos)
#define GPIO_OSRR0_P25_Pos          25           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P25              (_U(0x1) << GPIO_OSRR0_P25_Pos)
#define GPIO_OSRR0_P26_Pos          26           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P26              (_U(0x1) << GPIO_OSRR0_P26_Pos)
#define GPIO_OSRR0_P27_Pos          27           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P27              (_U(0x1) << GPIO_OSRR0_P27_Pos)
#define GPIO_OSRR0_P28_Pos          28           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P28              (_U(0x1) << GPIO_OSRR0_P28_Pos)
#define GPIO_OSRR0_P29_Pos          29           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P29              (_U(0x1) << GPIO_OSRR0_P29_Pos)
#define GPIO_OSRR0_P30_Pos          30           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P30              (_U(0x1) << GPIO_OSRR0_P30_Pos)
#define GPIO_OSRR0_P31_Pos          31           /**< \brief (GPIO_OSRR0) Output Slew Rate Control Enable */
#define GPIO_OSRR0_P31              (_U(0x1) << GPIO_OSRR0_P31_Pos)
#define GPIO_OSRR0_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_OSRR0) MASK Register */

/* -------- GPIO_OSRR0S : (GPIO Offset: 0x134) (R/W 32) port Output Slew Rate Register 0 - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Slew Rate Control Enable    */
    uint32_t P1:1;             /*!< bit:      1  Output Slew Rate Control Enable    */
    uint32_t P2:1;             /*!< bit:      2  Output Slew Rate Control Enable    */
    uint32_t P3:1;             /*!< bit:      3  Output Slew Rate Control Enable    */
    uint32_t P4:1;             /*!< bit:      4  Output Slew Rate Control Enable    */
    uint32_t P5:1;             /*!< bit:      5  Output Slew Rate Control Enable    */
    uint32_t P6:1;             /*!< bit:      6  Output Slew Rate Control Enable    */
    uint32_t P7:1;             /*!< bit:      7  Output Slew Rate Control Enable    */
    uint32_t P8:1;             /*!< bit:      8  Output Slew Rate Control Enable    */
    uint32_t P9:1;             /*!< bit:      9  Output Slew Rate Control Enable    */
    uint32_t P10:1;            /*!< bit:     10  Output Slew Rate Control Enable    */
    uint32_t P11:1;            /*!< bit:     11  Output Slew Rate Control Enable    */
    uint32_t P12:1;            /*!< bit:     12  Output Slew Rate Control Enable    */
    uint32_t P13:1;            /*!< bit:     13  Output Slew Rate Control Enable    */
    uint32_t P14:1;            /*!< bit:     14  Output Slew Rate Control Enable    */
    uint32_t P15:1;            /*!< bit:     15  Output Slew Rate Control Enable    */
    uint32_t P16:1;            /*!< bit:     16  Output Slew Rate Control Enable    */
    uint32_t P17:1;            /*!< bit:     17  Output Slew Rate Control Enable    */
    uint32_t P18:1;            /*!< bit:     18  Output Slew Rate Control Enable    */
    uint32_t P19:1;            /*!< bit:     19  Output Slew Rate Control Enable    */
    uint32_t P20:1;            /*!< bit:     20  Output Slew Rate Control Enable    */
    uint32_t P21:1;            /*!< bit:     21  Output Slew Rate Control Enable    */
    uint32_t P22:1;            /*!< bit:     22  Output Slew Rate Control Enable    */
    uint32_t P23:1;            /*!< bit:     23  Output Slew Rate Control Enable    */
    uint32_t P24:1;            /*!< bit:     24  Output Slew Rate Control Enable    */
    uint32_t P25:1;            /*!< bit:     25  Output Slew Rate Control Enable    */
    uint32_t P26:1;            /*!< bit:     26  Output Slew Rate Control Enable    */
    uint32_t P27:1;            /*!< bit:     27  Output Slew Rate Control Enable    */
    uint32_t P28:1;            /*!< bit:     28  Output Slew Rate Control Enable    */
    uint32_t P29:1;            /*!< bit:     29  Output Slew Rate Control Enable    */
    uint32_t P30:1;            /*!< bit:     30  Output Slew Rate Control Enable    */
    uint32_t P31:1;            /*!< bit:     31  Output Slew Rate Control Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OSRR0S_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OSRR0S_OFFSET          0x134        /**< \brief (GPIO_OSRR0S offset) Output Slew Rate Register 0 - Set */

#define GPIO_OSRR0S_P0_Pos          0            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P0              (_U(0x1) << GPIO_OSRR0S_P0_Pos)
#define GPIO_OSRR0S_P1_Pos          1            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P1              (_U(0x1) << GPIO_OSRR0S_P1_Pos)
#define GPIO_OSRR0S_P2_Pos          2            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P2              (_U(0x1) << GPIO_OSRR0S_P2_Pos)
#define GPIO_OSRR0S_P3_Pos          3            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P3              (_U(0x1) << GPIO_OSRR0S_P3_Pos)
#define GPIO_OSRR0S_P4_Pos          4            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P4              (_U(0x1) << GPIO_OSRR0S_P4_Pos)
#define GPIO_OSRR0S_P5_Pos          5            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P5              (_U(0x1) << GPIO_OSRR0S_P5_Pos)
#define GPIO_OSRR0S_P6_Pos          6            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P6              (_U(0x1) << GPIO_OSRR0S_P6_Pos)
#define GPIO_OSRR0S_P7_Pos          7            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P7              (_U(0x1) << GPIO_OSRR0S_P7_Pos)
#define GPIO_OSRR0S_P8_Pos          8            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P8              (_U(0x1) << GPIO_OSRR0S_P8_Pos)
#define GPIO_OSRR0S_P9_Pos          9            /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P9              (_U(0x1) << GPIO_OSRR0S_P9_Pos)
#define GPIO_OSRR0S_P10_Pos         10           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P10             (_U(0x1) << GPIO_OSRR0S_P10_Pos)
#define GPIO_OSRR0S_P11_Pos         11           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P11             (_U(0x1) << GPIO_OSRR0S_P11_Pos)
#define GPIO_OSRR0S_P12_Pos         12           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P12             (_U(0x1) << GPIO_OSRR0S_P12_Pos)
#define GPIO_OSRR0S_P13_Pos         13           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P13             (_U(0x1) << GPIO_OSRR0S_P13_Pos)
#define GPIO_OSRR0S_P14_Pos         14           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P14             (_U(0x1) << GPIO_OSRR0S_P14_Pos)
#define GPIO_OSRR0S_P15_Pos         15           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P15             (_U(0x1) << GPIO_OSRR0S_P15_Pos)
#define GPIO_OSRR0S_P16_Pos         16           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P16             (_U(0x1) << GPIO_OSRR0S_P16_Pos)
#define GPIO_OSRR0S_P17_Pos         17           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P17             (_U(0x1) << GPIO_OSRR0S_P17_Pos)
#define GPIO_OSRR0S_P18_Pos         18           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P18             (_U(0x1) << GPIO_OSRR0S_P18_Pos)
#define GPIO_OSRR0S_P19_Pos         19           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P19             (_U(0x1) << GPIO_OSRR0S_P19_Pos)
#define GPIO_OSRR0S_P20_Pos         20           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P20             (_U(0x1) << GPIO_OSRR0S_P20_Pos)
#define GPIO_OSRR0S_P21_Pos         21           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P21             (_U(0x1) << GPIO_OSRR0S_P21_Pos)
#define GPIO_OSRR0S_P22_Pos         22           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P22             (_U(0x1) << GPIO_OSRR0S_P22_Pos)
#define GPIO_OSRR0S_P23_Pos         23           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P23             (_U(0x1) << GPIO_OSRR0S_P23_Pos)
#define GPIO_OSRR0S_P24_Pos         24           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P24             (_U(0x1) << GPIO_OSRR0S_P24_Pos)
#define GPIO_OSRR0S_P25_Pos         25           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P25             (_U(0x1) << GPIO_OSRR0S_P25_Pos)
#define GPIO_OSRR0S_P26_Pos         26           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P26             (_U(0x1) << GPIO_OSRR0S_P26_Pos)
#define GPIO_OSRR0S_P27_Pos         27           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P27             (_U(0x1) << GPIO_OSRR0S_P27_Pos)
#define GPIO_OSRR0S_P28_Pos         28           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P28             (_U(0x1) << GPIO_OSRR0S_P28_Pos)
#define GPIO_OSRR0S_P29_Pos         29           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P29             (_U(0x1) << GPIO_OSRR0S_P29_Pos)
#define GPIO_OSRR0S_P30_Pos         30           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P30             (_U(0x1) << GPIO_OSRR0S_P30_Pos)
#define GPIO_OSRR0S_P31_Pos         31           /**< \brief (GPIO_OSRR0S) Output Slew Rate Control Enable */
#define GPIO_OSRR0S_P31             (_U(0x1) << GPIO_OSRR0S_P31_Pos)
#define GPIO_OSRR0S_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_OSRR0S) MASK Register */

/* -------- GPIO_OSRR0C : (GPIO Offset: 0x138) (R/W 32) port Output Slew Rate Register 0 - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Slew Rate Control Enable    */
    uint32_t P1:1;             /*!< bit:      1  Output Slew Rate Control Enable    */
    uint32_t P2:1;             /*!< bit:      2  Output Slew Rate Control Enable    */
    uint32_t P3:1;             /*!< bit:      3  Output Slew Rate Control Enable    */
    uint32_t P4:1;             /*!< bit:      4  Output Slew Rate Control Enable    */
    uint32_t P5:1;             /*!< bit:      5  Output Slew Rate Control Enable    */
    uint32_t P6:1;             /*!< bit:      6  Output Slew Rate Control Enable    */
    uint32_t P7:1;             /*!< bit:      7  Output Slew Rate Control Enable    */
    uint32_t P8:1;             /*!< bit:      8  Output Slew Rate Control Enable    */
    uint32_t P9:1;             /*!< bit:      9  Output Slew Rate Control Enable    */
    uint32_t P10:1;            /*!< bit:     10  Output Slew Rate Control Enable    */
    uint32_t P11:1;            /*!< bit:     11  Output Slew Rate Control Enable    */
    uint32_t P12:1;            /*!< bit:     12  Output Slew Rate Control Enable    */
    uint32_t P13:1;            /*!< bit:     13  Output Slew Rate Control Enable    */
    uint32_t P14:1;            /*!< bit:     14  Output Slew Rate Control Enable    */
    uint32_t P15:1;            /*!< bit:     15  Output Slew Rate Control Enable    */
    uint32_t P16:1;            /*!< bit:     16  Output Slew Rate Control Enable    */
    uint32_t P17:1;            /*!< bit:     17  Output Slew Rate Control Enable    */
    uint32_t P18:1;            /*!< bit:     18  Output Slew Rate Control Enable    */
    uint32_t P19:1;            /*!< bit:     19  Output Slew Rate Control Enable    */
    uint32_t P20:1;            /*!< bit:     20  Output Slew Rate Control Enable    */
    uint32_t P21:1;            /*!< bit:     21  Output Slew Rate Control Enable    */
    uint32_t P22:1;            /*!< bit:     22  Output Slew Rate Control Enable    */
    uint32_t P23:1;            /*!< bit:     23  Output Slew Rate Control Enable    */
    uint32_t P24:1;            /*!< bit:     24  Output Slew Rate Control Enable    */
    uint32_t P25:1;            /*!< bit:     25  Output Slew Rate Control Enable    */
    uint32_t P26:1;            /*!< bit:     26  Output Slew Rate Control Enable    */
    uint32_t P27:1;            /*!< bit:     27  Output Slew Rate Control Enable    */
    uint32_t P28:1;            /*!< bit:     28  Output Slew Rate Control Enable    */
    uint32_t P29:1;            /*!< bit:     29  Output Slew Rate Control Enable    */
    uint32_t P30:1;            /*!< bit:     30  Output Slew Rate Control Enable    */
    uint32_t P31:1;            /*!< bit:     31  Output Slew Rate Control Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OSRR0C_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OSRR0C_OFFSET          0x138        /**< \brief (GPIO_OSRR0C offset) Output Slew Rate Register 0 - Clear */

#define GPIO_OSRR0C_P0_Pos          0            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P0              (_U(0x1) << GPIO_OSRR0C_P0_Pos)
#define GPIO_OSRR0C_P1_Pos          1            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P1              (_U(0x1) << GPIO_OSRR0C_P1_Pos)
#define GPIO_OSRR0C_P2_Pos          2            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P2              (_U(0x1) << GPIO_OSRR0C_P2_Pos)
#define GPIO_OSRR0C_P3_Pos          3            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P3              (_U(0x1) << GPIO_OSRR0C_P3_Pos)
#define GPIO_OSRR0C_P4_Pos          4            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P4              (_U(0x1) << GPIO_OSRR0C_P4_Pos)
#define GPIO_OSRR0C_P5_Pos          5            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P5              (_U(0x1) << GPIO_OSRR0C_P5_Pos)
#define GPIO_OSRR0C_P6_Pos          6            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P6              (_U(0x1) << GPIO_OSRR0C_P6_Pos)
#define GPIO_OSRR0C_P7_Pos          7            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P7              (_U(0x1) << GPIO_OSRR0C_P7_Pos)
#define GPIO_OSRR0C_P8_Pos          8            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P8              (_U(0x1) << GPIO_OSRR0C_P8_Pos)
#define GPIO_OSRR0C_P9_Pos          9            /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P9              (_U(0x1) << GPIO_OSRR0C_P9_Pos)
#define GPIO_OSRR0C_P10_Pos         10           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P10             (_U(0x1) << GPIO_OSRR0C_P10_Pos)
#define GPIO_OSRR0C_P11_Pos         11           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P11             (_U(0x1) << GPIO_OSRR0C_P11_Pos)
#define GPIO_OSRR0C_P12_Pos         12           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P12             (_U(0x1) << GPIO_OSRR0C_P12_Pos)
#define GPIO_OSRR0C_P13_Pos         13           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P13             (_U(0x1) << GPIO_OSRR0C_P13_Pos)
#define GPIO_OSRR0C_P14_Pos         14           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P14             (_U(0x1) << GPIO_OSRR0C_P14_Pos)
#define GPIO_OSRR0C_P15_Pos         15           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P15             (_U(0x1) << GPIO_OSRR0C_P15_Pos)
#define GPIO_OSRR0C_P16_Pos         16           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P16             (_U(0x1) << GPIO_OSRR0C_P16_Pos)
#define GPIO_OSRR0C_P17_Pos         17           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P17             (_U(0x1) << GPIO_OSRR0C_P17_Pos)
#define GPIO_OSRR0C_P18_Pos         18           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P18             (_U(0x1) << GPIO_OSRR0C_P18_Pos)
#define GPIO_OSRR0C_P19_Pos         19           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P19             (_U(0x1) << GPIO_OSRR0C_P19_Pos)
#define GPIO_OSRR0C_P20_Pos         20           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P20             (_U(0x1) << GPIO_OSRR0C_P20_Pos)
#define GPIO_OSRR0C_P21_Pos         21           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P21             (_U(0x1) << GPIO_OSRR0C_P21_Pos)
#define GPIO_OSRR0C_P22_Pos         22           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P22             (_U(0x1) << GPIO_OSRR0C_P22_Pos)
#define GPIO_OSRR0C_P23_Pos         23           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P23             (_U(0x1) << GPIO_OSRR0C_P23_Pos)
#define GPIO_OSRR0C_P24_Pos         24           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P24             (_U(0x1) << GPIO_OSRR0C_P24_Pos)
#define GPIO_OSRR0C_P25_Pos         25           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P25             (_U(0x1) << GPIO_OSRR0C_P25_Pos)
#define GPIO_OSRR0C_P26_Pos         26           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P26             (_U(0x1) << GPIO_OSRR0C_P26_Pos)
#define GPIO_OSRR0C_P27_Pos         27           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P27             (_U(0x1) << GPIO_OSRR0C_P27_Pos)
#define GPIO_OSRR0C_P28_Pos         28           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P28             (_U(0x1) << GPIO_OSRR0C_P28_Pos)
#define GPIO_OSRR0C_P29_Pos         29           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P29             (_U(0x1) << GPIO_OSRR0C_P29_Pos)
#define GPIO_OSRR0C_P30_Pos         30           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P30             (_U(0x1) << GPIO_OSRR0C_P30_Pos)
#define GPIO_OSRR0C_P31_Pos         31           /**< \brief (GPIO_OSRR0C) Output Slew Rate Control Enable */
#define GPIO_OSRR0C_P31             (_U(0x1) << GPIO_OSRR0C_P31_Pos)
#define GPIO_OSRR0C_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_OSRR0C) MASK Register */

/* -------- GPIO_OSRR0T : (GPIO Offset: 0x13C) (R/W 32) port Output Slew Rate Register 0 - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Output Slew Rate Control Enable    */
    uint32_t P1:1;             /*!< bit:      1  Output Slew Rate Control Enable    */
    uint32_t P2:1;             /*!< bit:      2  Output Slew Rate Control Enable    */
    uint32_t P3:1;             /*!< bit:      3  Output Slew Rate Control Enable    */
    uint32_t P4:1;             /*!< bit:      4  Output Slew Rate Control Enable    */
    uint32_t P5:1;             /*!< bit:      5  Output Slew Rate Control Enable    */
    uint32_t P6:1;             /*!< bit:      6  Output Slew Rate Control Enable    */
    uint32_t P7:1;             /*!< bit:      7  Output Slew Rate Control Enable    */
    uint32_t P8:1;             /*!< bit:      8  Output Slew Rate Control Enable    */
    uint32_t P9:1;             /*!< bit:      9  Output Slew Rate Control Enable    */
    uint32_t P10:1;            /*!< bit:     10  Output Slew Rate Control Enable    */
    uint32_t P11:1;            /*!< bit:     11  Output Slew Rate Control Enable    */
    uint32_t P12:1;            /*!< bit:     12  Output Slew Rate Control Enable    */
    uint32_t P13:1;            /*!< bit:     13  Output Slew Rate Control Enable    */
    uint32_t P14:1;            /*!< bit:     14  Output Slew Rate Control Enable    */
    uint32_t P15:1;            /*!< bit:     15  Output Slew Rate Control Enable    */
    uint32_t P16:1;            /*!< bit:     16  Output Slew Rate Control Enable    */
    uint32_t P17:1;            /*!< bit:     17  Output Slew Rate Control Enable    */
    uint32_t P18:1;            /*!< bit:     18  Output Slew Rate Control Enable    */
    uint32_t P19:1;            /*!< bit:     19  Output Slew Rate Control Enable    */
    uint32_t P20:1;            /*!< bit:     20  Output Slew Rate Control Enable    */
    uint32_t P21:1;            /*!< bit:     21  Output Slew Rate Control Enable    */
    uint32_t P22:1;            /*!< bit:     22  Output Slew Rate Control Enable    */
    uint32_t P23:1;            /*!< bit:     23  Output Slew Rate Control Enable    */
    uint32_t P24:1;            /*!< bit:     24  Output Slew Rate Control Enable    */
    uint32_t P25:1;            /*!< bit:     25  Output Slew Rate Control Enable    */
    uint32_t P26:1;            /*!< bit:     26  Output Slew Rate Control Enable    */
    uint32_t P27:1;            /*!< bit:     27  Output Slew Rate Control Enable    */
    uint32_t P28:1;            /*!< bit:     28  Output Slew Rate Control Enable    */
    uint32_t P29:1;            /*!< bit:     29  Output Slew Rate Control Enable    */
    uint32_t P30:1;            /*!< bit:     30  Output Slew Rate Control Enable    */
    uint32_t P31:1;            /*!< bit:     31  Output Slew Rate Control Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_OSRR0T_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OSRR0T_OFFSET          0x13C        /**< \brief (GPIO_OSRR0T offset) Output Slew Rate Register 0 - Toggle */

#define GPIO_OSRR0T_P0_Pos          0            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P0              (_U(0x1) << GPIO_OSRR0T_P0_Pos)
#define GPIO_OSRR0T_P1_Pos          1            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P1              (_U(0x1) << GPIO_OSRR0T_P1_Pos)
#define GPIO_OSRR0T_P2_Pos          2            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P2              (_U(0x1) << GPIO_OSRR0T_P2_Pos)
#define GPIO_OSRR0T_P3_Pos          3            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P3              (_U(0x1) << GPIO_OSRR0T_P3_Pos)
#define GPIO_OSRR0T_P4_Pos          4            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P4              (_U(0x1) << GPIO_OSRR0T_P4_Pos)
#define GPIO_OSRR0T_P5_Pos          5            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P5              (_U(0x1) << GPIO_OSRR0T_P5_Pos)
#define GPIO_OSRR0T_P6_Pos          6            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P6              (_U(0x1) << GPIO_OSRR0T_P6_Pos)
#define GPIO_OSRR0T_P7_Pos          7            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P7              (_U(0x1) << GPIO_OSRR0T_P7_Pos)
#define GPIO_OSRR0T_P8_Pos          8            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P8              (_U(0x1) << GPIO_OSRR0T_P8_Pos)
#define GPIO_OSRR0T_P9_Pos          9            /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P9              (_U(0x1) << GPIO_OSRR0T_P9_Pos)
#define GPIO_OSRR0T_P10_Pos         10           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P10             (_U(0x1) << GPIO_OSRR0T_P10_Pos)
#define GPIO_OSRR0T_P11_Pos         11           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P11             (_U(0x1) << GPIO_OSRR0T_P11_Pos)
#define GPIO_OSRR0T_P12_Pos         12           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P12             (_U(0x1) << GPIO_OSRR0T_P12_Pos)
#define GPIO_OSRR0T_P13_Pos         13           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P13             (_U(0x1) << GPIO_OSRR0T_P13_Pos)
#define GPIO_OSRR0T_P14_Pos         14           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P14             (_U(0x1) << GPIO_OSRR0T_P14_Pos)
#define GPIO_OSRR0T_P15_Pos         15           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P15             (_U(0x1) << GPIO_OSRR0T_P15_Pos)
#define GPIO_OSRR0T_P16_Pos         16           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P16             (_U(0x1) << GPIO_OSRR0T_P16_Pos)
#define GPIO_OSRR0T_P17_Pos         17           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P17             (_U(0x1) << GPIO_OSRR0T_P17_Pos)
#define GPIO_OSRR0T_P18_Pos         18           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P18             (_U(0x1) << GPIO_OSRR0T_P18_Pos)
#define GPIO_OSRR0T_P19_Pos         19           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P19             (_U(0x1) << GPIO_OSRR0T_P19_Pos)
#define GPIO_OSRR0T_P20_Pos         20           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P20             (_U(0x1) << GPIO_OSRR0T_P20_Pos)
#define GPIO_OSRR0T_P21_Pos         21           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P21             (_U(0x1) << GPIO_OSRR0T_P21_Pos)
#define GPIO_OSRR0T_P22_Pos         22           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P22             (_U(0x1) << GPIO_OSRR0T_P22_Pos)
#define GPIO_OSRR0T_P23_Pos         23           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P23             (_U(0x1) << GPIO_OSRR0T_P23_Pos)
#define GPIO_OSRR0T_P24_Pos         24           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P24             (_U(0x1) << GPIO_OSRR0T_P24_Pos)
#define GPIO_OSRR0T_P25_Pos         25           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P25             (_U(0x1) << GPIO_OSRR0T_P25_Pos)
#define GPIO_OSRR0T_P26_Pos         26           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P26             (_U(0x1) << GPIO_OSRR0T_P26_Pos)
#define GPIO_OSRR0T_P27_Pos         27           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P27             (_U(0x1) << GPIO_OSRR0T_P27_Pos)
#define GPIO_OSRR0T_P28_Pos         28           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P28             (_U(0x1) << GPIO_OSRR0T_P28_Pos)
#define GPIO_OSRR0T_P29_Pos         29           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P29             (_U(0x1) << GPIO_OSRR0T_P29_Pos)
#define GPIO_OSRR0T_P30_Pos         30           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P30             (_U(0x1) << GPIO_OSRR0T_P30_Pos)
#define GPIO_OSRR0T_P31_Pos         31           /**< \brief (GPIO_OSRR0T) Output Slew Rate Control Enable */
#define GPIO_OSRR0T_P31             (_U(0x1) << GPIO_OSRR0T_P31_Pos)
#define GPIO_OSRR0T_MASK            _U(0xFFFFFFFF) /**< \brief (GPIO_OSRR0T) MASK Register */

/* -------- GPIO_STER : (GPIO Offset: 0x160) (R/W 32) port Schmitt Trigger Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Schmitt Trigger Enable             */
    uint32_t P1:1;             /*!< bit:      1  Schmitt Trigger Enable             */
    uint32_t P2:1;             /*!< bit:      2  Schmitt Trigger Enable             */
    uint32_t P3:1;             /*!< bit:      3  Schmitt Trigger Enable             */
    uint32_t P4:1;             /*!< bit:      4  Schmitt Trigger Enable             */
    uint32_t P5:1;             /*!< bit:      5  Schmitt Trigger Enable             */
    uint32_t P6:1;             /*!< bit:      6  Schmitt Trigger Enable             */
    uint32_t P7:1;             /*!< bit:      7  Schmitt Trigger Enable             */
    uint32_t P8:1;             /*!< bit:      8  Schmitt Trigger Enable             */
    uint32_t P9:1;             /*!< bit:      9  Schmitt Trigger Enable             */
    uint32_t P10:1;            /*!< bit:     10  Schmitt Trigger Enable             */
    uint32_t P11:1;            /*!< bit:     11  Schmitt Trigger Enable             */
    uint32_t P12:1;            /*!< bit:     12  Schmitt Trigger Enable             */
    uint32_t P13:1;            /*!< bit:     13  Schmitt Trigger Enable             */
    uint32_t P14:1;            /*!< bit:     14  Schmitt Trigger Enable             */
    uint32_t P15:1;            /*!< bit:     15  Schmitt Trigger Enable             */
    uint32_t P16:1;            /*!< bit:     16  Schmitt Trigger Enable             */
    uint32_t P17:1;            /*!< bit:     17  Schmitt Trigger Enable             */
    uint32_t P18:1;            /*!< bit:     18  Schmitt Trigger Enable             */
    uint32_t P19:1;            /*!< bit:     19  Schmitt Trigger Enable             */
    uint32_t P20:1;            /*!< bit:     20  Schmitt Trigger Enable             */
    uint32_t P21:1;            /*!< bit:     21  Schmitt Trigger Enable             */
    uint32_t P22:1;            /*!< bit:     22  Schmitt Trigger Enable             */
    uint32_t P23:1;            /*!< bit:     23  Schmitt Trigger Enable             */
    uint32_t P24:1;            /*!< bit:     24  Schmitt Trigger Enable             */
    uint32_t P25:1;            /*!< bit:     25  Schmitt Trigger Enable             */
    uint32_t P26:1;            /*!< bit:     26  Schmitt Trigger Enable             */
    uint32_t P27:1;            /*!< bit:     27  Schmitt Trigger Enable             */
    uint32_t P28:1;            /*!< bit:     28  Schmitt Trigger Enable             */
    uint32_t P29:1;            /*!< bit:     29  Schmitt Trigger Enable             */
    uint32_t P30:1;            /*!< bit:     30  Schmitt Trigger Enable             */
    uint32_t P31:1;            /*!< bit:     31  Schmitt Trigger Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_STER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_STER_OFFSET            0x160        /**< \brief (GPIO_STER offset) Schmitt Trigger Enable Register */

#define GPIO_STER_P0_Pos            0            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P0                (_U(0x1) << GPIO_STER_P0_Pos)
#define GPIO_STER_P1_Pos            1            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P1                (_U(0x1) << GPIO_STER_P1_Pos)
#define GPIO_STER_P2_Pos            2            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P2                (_U(0x1) << GPIO_STER_P2_Pos)
#define GPIO_STER_P3_Pos            3            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P3                (_U(0x1) << GPIO_STER_P3_Pos)
#define GPIO_STER_P4_Pos            4            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P4                (_U(0x1) << GPIO_STER_P4_Pos)
#define GPIO_STER_P5_Pos            5            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P5                (_U(0x1) << GPIO_STER_P5_Pos)
#define GPIO_STER_P6_Pos            6            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P6                (_U(0x1) << GPIO_STER_P6_Pos)
#define GPIO_STER_P7_Pos            7            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P7                (_U(0x1) << GPIO_STER_P7_Pos)
#define GPIO_STER_P8_Pos            8            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P8                (_U(0x1) << GPIO_STER_P8_Pos)
#define GPIO_STER_P9_Pos            9            /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P9                (_U(0x1) << GPIO_STER_P9_Pos)
#define GPIO_STER_P10_Pos           10           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P10               (_U(0x1) << GPIO_STER_P10_Pos)
#define GPIO_STER_P11_Pos           11           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P11               (_U(0x1) << GPIO_STER_P11_Pos)
#define GPIO_STER_P12_Pos           12           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P12               (_U(0x1) << GPIO_STER_P12_Pos)
#define GPIO_STER_P13_Pos           13           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P13               (_U(0x1) << GPIO_STER_P13_Pos)
#define GPIO_STER_P14_Pos           14           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P14               (_U(0x1) << GPIO_STER_P14_Pos)
#define GPIO_STER_P15_Pos           15           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P15               (_U(0x1) << GPIO_STER_P15_Pos)
#define GPIO_STER_P16_Pos           16           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P16               (_U(0x1) << GPIO_STER_P16_Pos)
#define GPIO_STER_P17_Pos           17           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P17               (_U(0x1) << GPIO_STER_P17_Pos)
#define GPIO_STER_P18_Pos           18           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P18               (_U(0x1) << GPIO_STER_P18_Pos)
#define GPIO_STER_P19_Pos           19           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P19               (_U(0x1) << GPIO_STER_P19_Pos)
#define GPIO_STER_P20_Pos           20           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P20               (_U(0x1) << GPIO_STER_P20_Pos)
#define GPIO_STER_P21_Pos           21           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P21               (_U(0x1) << GPIO_STER_P21_Pos)
#define GPIO_STER_P22_Pos           22           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P22               (_U(0x1) << GPIO_STER_P22_Pos)
#define GPIO_STER_P23_Pos           23           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P23               (_U(0x1) << GPIO_STER_P23_Pos)
#define GPIO_STER_P24_Pos           24           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P24               (_U(0x1) << GPIO_STER_P24_Pos)
#define GPIO_STER_P25_Pos           25           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P25               (_U(0x1) << GPIO_STER_P25_Pos)
#define GPIO_STER_P26_Pos           26           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P26               (_U(0x1) << GPIO_STER_P26_Pos)
#define GPIO_STER_P27_Pos           27           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P27               (_U(0x1) << GPIO_STER_P27_Pos)
#define GPIO_STER_P28_Pos           28           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P28               (_U(0x1) << GPIO_STER_P28_Pos)
#define GPIO_STER_P29_Pos           29           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P29               (_U(0x1) << GPIO_STER_P29_Pos)
#define GPIO_STER_P30_Pos           30           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P30               (_U(0x1) << GPIO_STER_P30_Pos)
#define GPIO_STER_P31_Pos           31           /**< \brief (GPIO_STER) Schmitt Trigger Enable */
#define GPIO_STER_P31               (_U(0x1) << GPIO_STER_P31_Pos)
#define GPIO_STER_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_STER) MASK Register */

/* -------- GPIO_STERS : (GPIO Offset: 0x164) (R/W 32) port Schmitt Trigger Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Schmitt Trigger Enable             */
    uint32_t P1:1;             /*!< bit:      1  Schmitt Trigger Enable             */
    uint32_t P2:1;             /*!< bit:      2  Schmitt Trigger Enable             */
    uint32_t P3:1;             /*!< bit:      3  Schmitt Trigger Enable             */
    uint32_t P4:1;             /*!< bit:      4  Schmitt Trigger Enable             */
    uint32_t P5:1;             /*!< bit:      5  Schmitt Trigger Enable             */
    uint32_t P6:1;             /*!< bit:      6  Schmitt Trigger Enable             */
    uint32_t P7:1;             /*!< bit:      7  Schmitt Trigger Enable             */
    uint32_t P8:1;             /*!< bit:      8  Schmitt Trigger Enable             */
    uint32_t P9:1;             /*!< bit:      9  Schmitt Trigger Enable             */
    uint32_t P10:1;            /*!< bit:     10  Schmitt Trigger Enable             */
    uint32_t P11:1;            /*!< bit:     11  Schmitt Trigger Enable             */
    uint32_t P12:1;            /*!< bit:     12  Schmitt Trigger Enable             */
    uint32_t P13:1;            /*!< bit:     13  Schmitt Trigger Enable             */
    uint32_t P14:1;            /*!< bit:     14  Schmitt Trigger Enable             */
    uint32_t P15:1;            /*!< bit:     15  Schmitt Trigger Enable             */
    uint32_t P16:1;            /*!< bit:     16  Schmitt Trigger Enable             */
    uint32_t P17:1;            /*!< bit:     17  Schmitt Trigger Enable             */
    uint32_t P18:1;            /*!< bit:     18  Schmitt Trigger Enable             */
    uint32_t P19:1;            /*!< bit:     19  Schmitt Trigger Enable             */
    uint32_t P20:1;            /*!< bit:     20  Schmitt Trigger Enable             */
    uint32_t P21:1;            /*!< bit:     21  Schmitt Trigger Enable             */
    uint32_t P22:1;            /*!< bit:     22  Schmitt Trigger Enable             */
    uint32_t P23:1;            /*!< bit:     23  Schmitt Trigger Enable             */
    uint32_t P24:1;            /*!< bit:     24  Schmitt Trigger Enable             */
    uint32_t P25:1;            /*!< bit:     25  Schmitt Trigger Enable             */
    uint32_t P26:1;            /*!< bit:     26  Schmitt Trigger Enable             */
    uint32_t P27:1;            /*!< bit:     27  Schmitt Trigger Enable             */
    uint32_t P28:1;            /*!< bit:     28  Schmitt Trigger Enable             */
    uint32_t P29:1;            /*!< bit:     29  Schmitt Trigger Enable             */
    uint32_t P30:1;            /*!< bit:     30  Schmitt Trigger Enable             */
    uint32_t P31:1;            /*!< bit:     31  Schmitt Trigger Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_STERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_STERS_OFFSET           0x164        /**< \brief (GPIO_STERS offset) Schmitt Trigger Enable Register - Set */

#define GPIO_STERS_P0_Pos           0            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P0               (_U(0x1) << GPIO_STERS_P0_Pos)
#define GPIO_STERS_P1_Pos           1            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P1               (_U(0x1) << GPIO_STERS_P1_Pos)
#define GPIO_STERS_P2_Pos           2            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P2               (_U(0x1) << GPIO_STERS_P2_Pos)
#define GPIO_STERS_P3_Pos           3            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P3               (_U(0x1) << GPIO_STERS_P3_Pos)
#define GPIO_STERS_P4_Pos           4            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P4               (_U(0x1) << GPIO_STERS_P4_Pos)
#define GPIO_STERS_P5_Pos           5            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P5               (_U(0x1) << GPIO_STERS_P5_Pos)
#define GPIO_STERS_P6_Pos           6            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P6               (_U(0x1) << GPIO_STERS_P6_Pos)
#define GPIO_STERS_P7_Pos           7            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P7               (_U(0x1) << GPIO_STERS_P7_Pos)
#define GPIO_STERS_P8_Pos           8            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P8               (_U(0x1) << GPIO_STERS_P8_Pos)
#define GPIO_STERS_P9_Pos           9            /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P9               (_U(0x1) << GPIO_STERS_P9_Pos)
#define GPIO_STERS_P10_Pos          10           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P10              (_U(0x1) << GPIO_STERS_P10_Pos)
#define GPIO_STERS_P11_Pos          11           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P11              (_U(0x1) << GPIO_STERS_P11_Pos)
#define GPIO_STERS_P12_Pos          12           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P12              (_U(0x1) << GPIO_STERS_P12_Pos)
#define GPIO_STERS_P13_Pos          13           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P13              (_U(0x1) << GPIO_STERS_P13_Pos)
#define GPIO_STERS_P14_Pos          14           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P14              (_U(0x1) << GPIO_STERS_P14_Pos)
#define GPIO_STERS_P15_Pos          15           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P15              (_U(0x1) << GPIO_STERS_P15_Pos)
#define GPIO_STERS_P16_Pos          16           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P16              (_U(0x1) << GPIO_STERS_P16_Pos)
#define GPIO_STERS_P17_Pos          17           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P17              (_U(0x1) << GPIO_STERS_P17_Pos)
#define GPIO_STERS_P18_Pos          18           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P18              (_U(0x1) << GPIO_STERS_P18_Pos)
#define GPIO_STERS_P19_Pos          19           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P19              (_U(0x1) << GPIO_STERS_P19_Pos)
#define GPIO_STERS_P20_Pos          20           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P20              (_U(0x1) << GPIO_STERS_P20_Pos)
#define GPIO_STERS_P21_Pos          21           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P21              (_U(0x1) << GPIO_STERS_P21_Pos)
#define GPIO_STERS_P22_Pos          22           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P22              (_U(0x1) << GPIO_STERS_P22_Pos)
#define GPIO_STERS_P23_Pos          23           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P23              (_U(0x1) << GPIO_STERS_P23_Pos)
#define GPIO_STERS_P24_Pos          24           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P24              (_U(0x1) << GPIO_STERS_P24_Pos)
#define GPIO_STERS_P25_Pos          25           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P25              (_U(0x1) << GPIO_STERS_P25_Pos)
#define GPIO_STERS_P26_Pos          26           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P26              (_U(0x1) << GPIO_STERS_P26_Pos)
#define GPIO_STERS_P27_Pos          27           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P27              (_U(0x1) << GPIO_STERS_P27_Pos)
#define GPIO_STERS_P28_Pos          28           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P28              (_U(0x1) << GPIO_STERS_P28_Pos)
#define GPIO_STERS_P29_Pos          29           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P29              (_U(0x1) << GPIO_STERS_P29_Pos)
#define GPIO_STERS_P30_Pos          30           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P30              (_U(0x1) << GPIO_STERS_P30_Pos)
#define GPIO_STERS_P31_Pos          31           /**< \brief (GPIO_STERS) Schmitt Trigger Enable */
#define GPIO_STERS_P31              (_U(0x1) << GPIO_STERS_P31_Pos)
#define GPIO_STERS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_STERS) MASK Register */

/* -------- GPIO_STERC : (GPIO Offset: 0x168) (R/W 32) port Schmitt Trigger Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Schmitt Trigger Enable             */
    uint32_t P1:1;             /*!< bit:      1  Schmitt Trigger Enable             */
    uint32_t P2:1;             /*!< bit:      2  Schmitt Trigger Enable             */
    uint32_t P3:1;             /*!< bit:      3  Schmitt Trigger Enable             */
    uint32_t P4:1;             /*!< bit:      4  Schmitt Trigger Enable             */
    uint32_t P5:1;             /*!< bit:      5  Schmitt Trigger Enable             */
    uint32_t P6:1;             /*!< bit:      6  Schmitt Trigger Enable             */
    uint32_t P7:1;             /*!< bit:      7  Schmitt Trigger Enable             */
    uint32_t P8:1;             /*!< bit:      8  Schmitt Trigger Enable             */
    uint32_t P9:1;             /*!< bit:      9  Schmitt Trigger Enable             */
    uint32_t P10:1;            /*!< bit:     10  Schmitt Trigger Enable             */
    uint32_t P11:1;            /*!< bit:     11  Schmitt Trigger Enable             */
    uint32_t P12:1;            /*!< bit:     12  Schmitt Trigger Enable             */
    uint32_t P13:1;            /*!< bit:     13  Schmitt Trigger Enable             */
    uint32_t P14:1;            /*!< bit:     14  Schmitt Trigger Enable             */
    uint32_t P15:1;            /*!< bit:     15  Schmitt Trigger Enable             */
    uint32_t P16:1;            /*!< bit:     16  Schmitt Trigger Enable             */
    uint32_t P17:1;            /*!< bit:     17  Schmitt Trigger Enable             */
    uint32_t P18:1;            /*!< bit:     18  Schmitt Trigger Enable             */
    uint32_t P19:1;            /*!< bit:     19  Schmitt Trigger Enable             */
    uint32_t P20:1;            /*!< bit:     20  Schmitt Trigger Enable             */
    uint32_t P21:1;            /*!< bit:     21  Schmitt Trigger Enable             */
    uint32_t P22:1;            /*!< bit:     22  Schmitt Trigger Enable             */
    uint32_t P23:1;            /*!< bit:     23  Schmitt Trigger Enable             */
    uint32_t P24:1;            /*!< bit:     24  Schmitt Trigger Enable             */
    uint32_t P25:1;            /*!< bit:     25  Schmitt Trigger Enable             */
    uint32_t P26:1;            /*!< bit:     26  Schmitt Trigger Enable             */
    uint32_t P27:1;            /*!< bit:     27  Schmitt Trigger Enable             */
    uint32_t P28:1;            /*!< bit:     28  Schmitt Trigger Enable             */
    uint32_t P29:1;            /*!< bit:     29  Schmitt Trigger Enable             */
    uint32_t P30:1;            /*!< bit:     30  Schmitt Trigger Enable             */
    uint32_t P31:1;            /*!< bit:     31  Schmitt Trigger Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_STERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_STERC_OFFSET           0x168        /**< \brief (GPIO_STERC offset) Schmitt Trigger Enable Register - Clear */

#define GPIO_STERC_P0_Pos           0            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P0               (_U(0x1) << GPIO_STERC_P0_Pos)
#define GPIO_STERC_P1_Pos           1            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P1               (_U(0x1) << GPIO_STERC_P1_Pos)
#define GPIO_STERC_P2_Pos           2            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P2               (_U(0x1) << GPIO_STERC_P2_Pos)
#define GPIO_STERC_P3_Pos           3            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P3               (_U(0x1) << GPIO_STERC_P3_Pos)
#define GPIO_STERC_P4_Pos           4            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P4               (_U(0x1) << GPIO_STERC_P4_Pos)
#define GPIO_STERC_P5_Pos           5            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P5               (_U(0x1) << GPIO_STERC_P5_Pos)
#define GPIO_STERC_P6_Pos           6            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P6               (_U(0x1) << GPIO_STERC_P6_Pos)
#define GPIO_STERC_P7_Pos           7            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P7               (_U(0x1) << GPIO_STERC_P7_Pos)
#define GPIO_STERC_P8_Pos           8            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P8               (_U(0x1) << GPIO_STERC_P8_Pos)
#define GPIO_STERC_P9_Pos           9            /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P9               (_U(0x1) << GPIO_STERC_P9_Pos)
#define GPIO_STERC_P10_Pos          10           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P10              (_U(0x1) << GPIO_STERC_P10_Pos)
#define GPIO_STERC_P11_Pos          11           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P11              (_U(0x1) << GPIO_STERC_P11_Pos)
#define GPIO_STERC_P12_Pos          12           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P12              (_U(0x1) << GPIO_STERC_P12_Pos)
#define GPIO_STERC_P13_Pos          13           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P13              (_U(0x1) << GPIO_STERC_P13_Pos)
#define GPIO_STERC_P14_Pos          14           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P14              (_U(0x1) << GPIO_STERC_P14_Pos)
#define GPIO_STERC_P15_Pos          15           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P15              (_U(0x1) << GPIO_STERC_P15_Pos)
#define GPIO_STERC_P16_Pos          16           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P16              (_U(0x1) << GPIO_STERC_P16_Pos)
#define GPIO_STERC_P17_Pos          17           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P17              (_U(0x1) << GPIO_STERC_P17_Pos)
#define GPIO_STERC_P18_Pos          18           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P18              (_U(0x1) << GPIO_STERC_P18_Pos)
#define GPIO_STERC_P19_Pos          19           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P19              (_U(0x1) << GPIO_STERC_P19_Pos)
#define GPIO_STERC_P20_Pos          20           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P20              (_U(0x1) << GPIO_STERC_P20_Pos)
#define GPIO_STERC_P21_Pos          21           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P21              (_U(0x1) << GPIO_STERC_P21_Pos)
#define GPIO_STERC_P22_Pos          22           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P22              (_U(0x1) << GPIO_STERC_P22_Pos)
#define GPIO_STERC_P23_Pos          23           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P23              (_U(0x1) << GPIO_STERC_P23_Pos)
#define GPIO_STERC_P24_Pos          24           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P24              (_U(0x1) << GPIO_STERC_P24_Pos)
#define GPIO_STERC_P25_Pos          25           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P25              (_U(0x1) << GPIO_STERC_P25_Pos)
#define GPIO_STERC_P26_Pos          26           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P26              (_U(0x1) << GPIO_STERC_P26_Pos)
#define GPIO_STERC_P27_Pos          27           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P27              (_U(0x1) << GPIO_STERC_P27_Pos)
#define GPIO_STERC_P28_Pos          28           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P28              (_U(0x1) << GPIO_STERC_P28_Pos)
#define GPIO_STERC_P29_Pos          29           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P29              (_U(0x1) << GPIO_STERC_P29_Pos)
#define GPIO_STERC_P30_Pos          30           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P30              (_U(0x1) << GPIO_STERC_P30_Pos)
#define GPIO_STERC_P31_Pos          31           /**< \brief (GPIO_STERC) Schmitt Trigger Enable */
#define GPIO_STERC_P31              (_U(0x1) << GPIO_STERC_P31_Pos)
#define GPIO_STERC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_STERC) MASK Register */

/* -------- GPIO_STERT : (GPIO Offset: 0x16C) (R/W 32) port Schmitt Trigger Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Schmitt Trigger Enable             */
    uint32_t P1:1;             /*!< bit:      1  Schmitt Trigger Enable             */
    uint32_t P2:1;             /*!< bit:      2  Schmitt Trigger Enable             */
    uint32_t P3:1;             /*!< bit:      3  Schmitt Trigger Enable             */
    uint32_t P4:1;             /*!< bit:      4  Schmitt Trigger Enable             */
    uint32_t P5:1;             /*!< bit:      5  Schmitt Trigger Enable             */
    uint32_t P6:1;             /*!< bit:      6  Schmitt Trigger Enable             */
    uint32_t P7:1;             /*!< bit:      7  Schmitt Trigger Enable             */
    uint32_t P8:1;             /*!< bit:      8  Schmitt Trigger Enable             */
    uint32_t P9:1;             /*!< bit:      9  Schmitt Trigger Enable             */
    uint32_t P10:1;            /*!< bit:     10  Schmitt Trigger Enable             */
    uint32_t P11:1;            /*!< bit:     11  Schmitt Trigger Enable             */
    uint32_t P12:1;            /*!< bit:     12  Schmitt Trigger Enable             */
    uint32_t P13:1;            /*!< bit:     13  Schmitt Trigger Enable             */
    uint32_t P14:1;            /*!< bit:     14  Schmitt Trigger Enable             */
    uint32_t P15:1;            /*!< bit:     15  Schmitt Trigger Enable             */
    uint32_t P16:1;            /*!< bit:     16  Schmitt Trigger Enable             */
    uint32_t P17:1;            /*!< bit:     17  Schmitt Trigger Enable             */
    uint32_t P18:1;            /*!< bit:     18  Schmitt Trigger Enable             */
    uint32_t P19:1;            /*!< bit:     19  Schmitt Trigger Enable             */
    uint32_t P20:1;            /*!< bit:     20  Schmitt Trigger Enable             */
    uint32_t P21:1;            /*!< bit:     21  Schmitt Trigger Enable             */
    uint32_t P22:1;            /*!< bit:     22  Schmitt Trigger Enable             */
    uint32_t P23:1;            /*!< bit:     23  Schmitt Trigger Enable             */
    uint32_t P24:1;            /*!< bit:     24  Schmitt Trigger Enable             */
    uint32_t P25:1;            /*!< bit:     25  Schmitt Trigger Enable             */
    uint32_t P26:1;            /*!< bit:     26  Schmitt Trigger Enable             */
    uint32_t P27:1;            /*!< bit:     27  Schmitt Trigger Enable             */
    uint32_t P28:1;            /*!< bit:     28  Schmitt Trigger Enable             */
    uint32_t P29:1;            /*!< bit:     29  Schmitt Trigger Enable             */
    uint32_t P30:1;            /*!< bit:     30  Schmitt Trigger Enable             */
    uint32_t P31:1;            /*!< bit:     31  Schmitt Trigger Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_STERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_STERT_OFFSET           0x16C        /**< \brief (GPIO_STERT offset) Schmitt Trigger Enable Register - Toggle */

#define GPIO_STERT_P0_Pos           0            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P0               (_U(0x1) << GPIO_STERT_P0_Pos)
#define GPIO_STERT_P1_Pos           1            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P1               (_U(0x1) << GPIO_STERT_P1_Pos)
#define GPIO_STERT_P2_Pos           2            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P2               (_U(0x1) << GPIO_STERT_P2_Pos)
#define GPIO_STERT_P3_Pos           3            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P3               (_U(0x1) << GPIO_STERT_P3_Pos)
#define GPIO_STERT_P4_Pos           4            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P4               (_U(0x1) << GPIO_STERT_P4_Pos)
#define GPIO_STERT_P5_Pos           5            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P5               (_U(0x1) << GPIO_STERT_P5_Pos)
#define GPIO_STERT_P6_Pos           6            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P6               (_U(0x1) << GPIO_STERT_P6_Pos)
#define GPIO_STERT_P7_Pos           7            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P7               (_U(0x1) << GPIO_STERT_P7_Pos)
#define GPIO_STERT_P8_Pos           8            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P8               (_U(0x1) << GPIO_STERT_P8_Pos)
#define GPIO_STERT_P9_Pos           9            /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P9               (_U(0x1) << GPIO_STERT_P9_Pos)
#define GPIO_STERT_P10_Pos          10           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P10              (_U(0x1) << GPIO_STERT_P10_Pos)
#define GPIO_STERT_P11_Pos          11           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P11              (_U(0x1) << GPIO_STERT_P11_Pos)
#define GPIO_STERT_P12_Pos          12           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P12              (_U(0x1) << GPIO_STERT_P12_Pos)
#define GPIO_STERT_P13_Pos          13           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P13              (_U(0x1) << GPIO_STERT_P13_Pos)
#define GPIO_STERT_P14_Pos          14           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P14              (_U(0x1) << GPIO_STERT_P14_Pos)
#define GPIO_STERT_P15_Pos          15           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P15              (_U(0x1) << GPIO_STERT_P15_Pos)
#define GPIO_STERT_P16_Pos          16           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P16              (_U(0x1) << GPIO_STERT_P16_Pos)
#define GPIO_STERT_P17_Pos          17           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P17              (_U(0x1) << GPIO_STERT_P17_Pos)
#define GPIO_STERT_P18_Pos          18           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P18              (_U(0x1) << GPIO_STERT_P18_Pos)
#define GPIO_STERT_P19_Pos          19           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P19              (_U(0x1) << GPIO_STERT_P19_Pos)
#define GPIO_STERT_P20_Pos          20           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P20              (_U(0x1) << GPIO_STERT_P20_Pos)
#define GPIO_STERT_P21_Pos          21           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P21              (_U(0x1) << GPIO_STERT_P21_Pos)
#define GPIO_STERT_P22_Pos          22           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P22              (_U(0x1) << GPIO_STERT_P22_Pos)
#define GPIO_STERT_P23_Pos          23           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P23              (_U(0x1) << GPIO_STERT_P23_Pos)
#define GPIO_STERT_P24_Pos          24           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P24              (_U(0x1) << GPIO_STERT_P24_Pos)
#define GPIO_STERT_P25_Pos          25           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P25              (_U(0x1) << GPIO_STERT_P25_Pos)
#define GPIO_STERT_P26_Pos          26           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P26              (_U(0x1) << GPIO_STERT_P26_Pos)
#define GPIO_STERT_P27_Pos          27           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P27              (_U(0x1) << GPIO_STERT_P27_Pos)
#define GPIO_STERT_P28_Pos          28           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P28              (_U(0x1) << GPIO_STERT_P28_Pos)
#define GPIO_STERT_P29_Pos          29           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P29              (_U(0x1) << GPIO_STERT_P29_Pos)
#define GPIO_STERT_P30_Pos          30           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P30              (_U(0x1) << GPIO_STERT_P30_Pos)
#define GPIO_STERT_P31_Pos          31           /**< \brief (GPIO_STERT) Schmitt Trigger Enable */
#define GPIO_STERT_P31              (_U(0x1) << GPIO_STERT_P31_Pos)
#define GPIO_STERT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_STERT) MASK Register */

/* -------- GPIO_EVER : (GPIO Offset: 0x180) (R/W 32) port Event Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Event Enable                       */
    uint32_t P1:1;             /*!< bit:      1  Event Enable                       */
    uint32_t P2:1;             /*!< bit:      2  Event Enable                       */
    uint32_t P3:1;             /*!< bit:      3  Event Enable                       */
    uint32_t P4:1;             /*!< bit:      4  Event Enable                       */
    uint32_t P5:1;             /*!< bit:      5  Event Enable                       */
    uint32_t P6:1;             /*!< bit:      6  Event Enable                       */
    uint32_t P7:1;             /*!< bit:      7  Event Enable                       */
    uint32_t P8:1;             /*!< bit:      8  Event Enable                       */
    uint32_t P9:1;             /*!< bit:      9  Event Enable                       */
    uint32_t P10:1;            /*!< bit:     10  Event Enable                       */
    uint32_t P11:1;            /*!< bit:     11  Event Enable                       */
    uint32_t P12:1;            /*!< bit:     12  Event Enable                       */
    uint32_t P13:1;            /*!< bit:     13  Event Enable                       */
    uint32_t P14:1;            /*!< bit:     14  Event Enable                       */
    uint32_t P15:1;            /*!< bit:     15  Event Enable                       */
    uint32_t P16:1;            /*!< bit:     16  Event Enable                       */
    uint32_t P17:1;            /*!< bit:     17  Event Enable                       */
    uint32_t P18:1;            /*!< bit:     18  Event Enable                       */
    uint32_t P19:1;            /*!< bit:     19  Event Enable                       */
    uint32_t P20:1;            /*!< bit:     20  Event Enable                       */
    uint32_t P21:1;            /*!< bit:     21  Event Enable                       */
    uint32_t P22:1;            /*!< bit:     22  Event Enable                       */
    uint32_t P23:1;            /*!< bit:     23  Event Enable                       */
    uint32_t P24:1;            /*!< bit:     24  Event Enable                       */
    uint32_t P25:1;            /*!< bit:     25  Event Enable                       */
    uint32_t P26:1;            /*!< bit:     26  Event Enable                       */
    uint32_t P27:1;            /*!< bit:     27  Event Enable                       */
    uint32_t P28:1;            /*!< bit:     28  Event Enable                       */
    uint32_t P29:1;            /*!< bit:     29  Event Enable                       */
    uint32_t P30:1;            /*!< bit:     30  Event Enable                       */
    uint32_t P31:1;            /*!< bit:     31  Event Enable                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_EVER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_EVER_OFFSET            0x180        /**< \brief (GPIO_EVER offset) Event Enable Register */

#define GPIO_EVER_P0_Pos            0            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P0                (_U(0x1) << GPIO_EVER_P0_Pos)
#define GPIO_EVER_P1_Pos            1            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P1                (_U(0x1) << GPIO_EVER_P1_Pos)
#define GPIO_EVER_P2_Pos            2            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P2                (_U(0x1) << GPIO_EVER_P2_Pos)
#define GPIO_EVER_P3_Pos            3            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P3                (_U(0x1) << GPIO_EVER_P3_Pos)
#define GPIO_EVER_P4_Pos            4            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P4                (_U(0x1) << GPIO_EVER_P4_Pos)
#define GPIO_EVER_P5_Pos            5            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P5                (_U(0x1) << GPIO_EVER_P5_Pos)
#define GPIO_EVER_P6_Pos            6            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P6                (_U(0x1) << GPIO_EVER_P6_Pos)
#define GPIO_EVER_P7_Pos            7            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P7                (_U(0x1) << GPIO_EVER_P7_Pos)
#define GPIO_EVER_P8_Pos            8            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P8                (_U(0x1) << GPIO_EVER_P8_Pos)
#define GPIO_EVER_P9_Pos            9            /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P9                (_U(0x1) << GPIO_EVER_P9_Pos)
#define GPIO_EVER_P10_Pos           10           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P10               (_U(0x1) << GPIO_EVER_P10_Pos)
#define GPIO_EVER_P11_Pos           11           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P11               (_U(0x1) << GPIO_EVER_P11_Pos)
#define GPIO_EVER_P12_Pos           12           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P12               (_U(0x1) << GPIO_EVER_P12_Pos)
#define GPIO_EVER_P13_Pos           13           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P13               (_U(0x1) << GPIO_EVER_P13_Pos)
#define GPIO_EVER_P14_Pos           14           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P14               (_U(0x1) << GPIO_EVER_P14_Pos)
#define GPIO_EVER_P15_Pos           15           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P15               (_U(0x1) << GPIO_EVER_P15_Pos)
#define GPIO_EVER_P16_Pos           16           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P16               (_U(0x1) << GPIO_EVER_P16_Pos)
#define GPIO_EVER_P17_Pos           17           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P17               (_U(0x1) << GPIO_EVER_P17_Pos)
#define GPIO_EVER_P18_Pos           18           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P18               (_U(0x1) << GPIO_EVER_P18_Pos)
#define GPIO_EVER_P19_Pos           19           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P19               (_U(0x1) << GPIO_EVER_P19_Pos)
#define GPIO_EVER_P20_Pos           20           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P20               (_U(0x1) << GPIO_EVER_P20_Pos)
#define GPIO_EVER_P21_Pos           21           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P21               (_U(0x1) << GPIO_EVER_P21_Pos)
#define GPIO_EVER_P22_Pos           22           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P22               (_U(0x1) << GPIO_EVER_P22_Pos)
#define GPIO_EVER_P23_Pos           23           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P23               (_U(0x1) << GPIO_EVER_P23_Pos)
#define GPIO_EVER_P24_Pos           24           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P24               (_U(0x1) << GPIO_EVER_P24_Pos)
#define GPIO_EVER_P25_Pos           25           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P25               (_U(0x1) << GPIO_EVER_P25_Pos)
#define GPIO_EVER_P26_Pos           26           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P26               (_U(0x1) << GPIO_EVER_P26_Pos)
#define GPIO_EVER_P27_Pos           27           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P27               (_U(0x1) << GPIO_EVER_P27_Pos)
#define GPIO_EVER_P28_Pos           28           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P28               (_U(0x1) << GPIO_EVER_P28_Pos)
#define GPIO_EVER_P29_Pos           29           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P29               (_U(0x1) << GPIO_EVER_P29_Pos)
#define GPIO_EVER_P30_Pos           30           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P30               (_U(0x1) << GPIO_EVER_P30_Pos)
#define GPIO_EVER_P31_Pos           31           /**< \brief (GPIO_EVER) Event Enable */
#define GPIO_EVER_P31               (_U(0x1) << GPIO_EVER_P31_Pos)
#define GPIO_EVER_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_EVER) MASK Register */

/* -------- GPIO_EVERS : (GPIO Offset: 0x184) ( /W 32) port Event Enable Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Event Enable                       */
    uint32_t P1:1;             /*!< bit:      1  Event Enable                       */
    uint32_t P2:1;             /*!< bit:      2  Event Enable                       */
    uint32_t P3:1;             /*!< bit:      3  Event Enable                       */
    uint32_t P4:1;             /*!< bit:      4  Event Enable                       */
    uint32_t P5:1;             /*!< bit:      5  Event Enable                       */
    uint32_t P6:1;             /*!< bit:      6  Event Enable                       */
    uint32_t P7:1;             /*!< bit:      7  Event Enable                       */
    uint32_t P8:1;             /*!< bit:      8  Event Enable                       */
    uint32_t P9:1;             /*!< bit:      9  Event Enable                       */
    uint32_t P10:1;            /*!< bit:     10  Event Enable                       */
    uint32_t P11:1;            /*!< bit:     11  Event Enable                       */
    uint32_t P12:1;            /*!< bit:     12  Event Enable                       */
    uint32_t P13:1;            /*!< bit:     13  Event Enable                       */
    uint32_t P14:1;            /*!< bit:     14  Event Enable                       */
    uint32_t P15:1;            /*!< bit:     15  Event Enable                       */
    uint32_t P16:1;            /*!< bit:     16  Event Enable                       */
    uint32_t P17:1;            /*!< bit:     17  Event Enable                       */
    uint32_t P18:1;            /*!< bit:     18  Event Enable                       */
    uint32_t P19:1;            /*!< bit:     19  Event Enable                       */
    uint32_t P20:1;            /*!< bit:     20  Event Enable                       */
    uint32_t P21:1;            /*!< bit:     21  Event Enable                       */
    uint32_t P22:1;            /*!< bit:     22  Event Enable                       */
    uint32_t P23:1;            /*!< bit:     23  Event Enable                       */
    uint32_t P24:1;            /*!< bit:     24  Event Enable                       */
    uint32_t P25:1;            /*!< bit:     25  Event Enable                       */
    uint32_t P26:1;            /*!< bit:     26  Event Enable                       */
    uint32_t P27:1;            /*!< bit:     27  Event Enable                       */
    uint32_t P28:1;            /*!< bit:     28  Event Enable                       */
    uint32_t P29:1;            /*!< bit:     29  Event Enable                       */
    uint32_t P30:1;            /*!< bit:     30  Event Enable                       */
    uint32_t P31:1;            /*!< bit:     31  Event Enable                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_EVERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_EVERS_OFFSET           0x184        /**< \brief (GPIO_EVERS offset) Event Enable Register - Set */

#define GPIO_EVERS_P0_Pos           0            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P0               (_U(0x1) << GPIO_EVERS_P0_Pos)
#define GPIO_EVERS_P1_Pos           1            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P1               (_U(0x1) << GPIO_EVERS_P1_Pos)
#define GPIO_EVERS_P2_Pos           2            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P2               (_U(0x1) << GPIO_EVERS_P2_Pos)
#define GPIO_EVERS_P3_Pos           3            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P3               (_U(0x1) << GPIO_EVERS_P3_Pos)
#define GPIO_EVERS_P4_Pos           4            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P4               (_U(0x1) << GPIO_EVERS_P4_Pos)
#define GPIO_EVERS_P5_Pos           5            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P5               (_U(0x1) << GPIO_EVERS_P5_Pos)
#define GPIO_EVERS_P6_Pos           6            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P6               (_U(0x1) << GPIO_EVERS_P6_Pos)
#define GPIO_EVERS_P7_Pos           7            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P7               (_U(0x1) << GPIO_EVERS_P7_Pos)
#define GPIO_EVERS_P8_Pos           8            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P8               (_U(0x1) << GPIO_EVERS_P8_Pos)
#define GPIO_EVERS_P9_Pos           9            /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P9               (_U(0x1) << GPIO_EVERS_P9_Pos)
#define GPIO_EVERS_P10_Pos          10           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P10              (_U(0x1) << GPIO_EVERS_P10_Pos)
#define GPIO_EVERS_P11_Pos          11           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P11              (_U(0x1) << GPIO_EVERS_P11_Pos)
#define GPIO_EVERS_P12_Pos          12           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P12              (_U(0x1) << GPIO_EVERS_P12_Pos)
#define GPIO_EVERS_P13_Pos          13           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P13              (_U(0x1) << GPIO_EVERS_P13_Pos)
#define GPIO_EVERS_P14_Pos          14           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P14              (_U(0x1) << GPIO_EVERS_P14_Pos)
#define GPIO_EVERS_P15_Pos          15           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P15              (_U(0x1) << GPIO_EVERS_P15_Pos)
#define GPIO_EVERS_P16_Pos          16           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P16              (_U(0x1) << GPIO_EVERS_P16_Pos)
#define GPIO_EVERS_P17_Pos          17           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P17              (_U(0x1) << GPIO_EVERS_P17_Pos)
#define GPIO_EVERS_P18_Pos          18           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P18              (_U(0x1) << GPIO_EVERS_P18_Pos)
#define GPIO_EVERS_P19_Pos          19           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P19              (_U(0x1) << GPIO_EVERS_P19_Pos)
#define GPIO_EVERS_P20_Pos          20           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P20              (_U(0x1) << GPIO_EVERS_P20_Pos)
#define GPIO_EVERS_P21_Pos          21           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P21              (_U(0x1) << GPIO_EVERS_P21_Pos)
#define GPIO_EVERS_P22_Pos          22           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P22              (_U(0x1) << GPIO_EVERS_P22_Pos)
#define GPIO_EVERS_P23_Pos          23           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P23              (_U(0x1) << GPIO_EVERS_P23_Pos)
#define GPIO_EVERS_P24_Pos          24           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P24              (_U(0x1) << GPIO_EVERS_P24_Pos)
#define GPIO_EVERS_P25_Pos          25           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P25              (_U(0x1) << GPIO_EVERS_P25_Pos)
#define GPIO_EVERS_P26_Pos          26           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P26              (_U(0x1) << GPIO_EVERS_P26_Pos)
#define GPIO_EVERS_P27_Pos          27           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P27              (_U(0x1) << GPIO_EVERS_P27_Pos)
#define GPIO_EVERS_P28_Pos          28           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P28              (_U(0x1) << GPIO_EVERS_P28_Pos)
#define GPIO_EVERS_P29_Pos          29           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P29              (_U(0x1) << GPIO_EVERS_P29_Pos)
#define GPIO_EVERS_P30_Pos          30           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P30              (_U(0x1) << GPIO_EVERS_P30_Pos)
#define GPIO_EVERS_P31_Pos          31           /**< \brief (GPIO_EVERS) Event Enable */
#define GPIO_EVERS_P31              (_U(0x1) << GPIO_EVERS_P31_Pos)
#define GPIO_EVERS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_EVERS) MASK Register */

/* -------- GPIO_EVERC : (GPIO Offset: 0x188) ( /W 32) port Event Enable Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Event Enable                       */
    uint32_t P1:1;             /*!< bit:      1  Event Enable                       */
    uint32_t P2:1;             /*!< bit:      2  Event Enable                       */
    uint32_t P3:1;             /*!< bit:      3  Event Enable                       */
    uint32_t P4:1;             /*!< bit:      4  Event Enable                       */
    uint32_t P5:1;             /*!< bit:      5  Event Enable                       */
    uint32_t P6:1;             /*!< bit:      6  Event Enable                       */
    uint32_t P7:1;             /*!< bit:      7  Event Enable                       */
    uint32_t P8:1;             /*!< bit:      8  Event Enable                       */
    uint32_t P9:1;             /*!< bit:      9  Event Enable                       */
    uint32_t P10:1;            /*!< bit:     10  Event Enable                       */
    uint32_t P11:1;            /*!< bit:     11  Event Enable                       */
    uint32_t P12:1;            /*!< bit:     12  Event Enable                       */
    uint32_t P13:1;            /*!< bit:     13  Event Enable                       */
    uint32_t P14:1;            /*!< bit:     14  Event Enable                       */
    uint32_t P15:1;            /*!< bit:     15  Event Enable                       */
    uint32_t P16:1;            /*!< bit:     16  Event Enable                       */
    uint32_t P17:1;            /*!< bit:     17  Event Enable                       */
    uint32_t P18:1;            /*!< bit:     18  Event Enable                       */
    uint32_t P19:1;            /*!< bit:     19  Event Enable                       */
    uint32_t P20:1;            /*!< bit:     20  Event Enable                       */
    uint32_t P21:1;            /*!< bit:     21  Event Enable                       */
    uint32_t P22:1;            /*!< bit:     22  Event Enable                       */
    uint32_t P23:1;            /*!< bit:     23  Event Enable                       */
    uint32_t P24:1;            /*!< bit:     24  Event Enable                       */
    uint32_t P25:1;            /*!< bit:     25  Event Enable                       */
    uint32_t P26:1;            /*!< bit:     26  Event Enable                       */
    uint32_t P27:1;            /*!< bit:     27  Event Enable                       */
    uint32_t P28:1;            /*!< bit:     28  Event Enable                       */
    uint32_t P29:1;            /*!< bit:     29  Event Enable                       */
    uint32_t P30:1;            /*!< bit:     30  Event Enable                       */
    uint32_t P31:1;            /*!< bit:     31  Event Enable                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_EVERC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_EVERC_OFFSET           0x188        /**< \brief (GPIO_EVERC offset) Event Enable Register - Clear */

#define GPIO_EVERC_P0_Pos           0            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P0               (_U(0x1) << GPIO_EVERC_P0_Pos)
#define GPIO_EVERC_P1_Pos           1            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P1               (_U(0x1) << GPIO_EVERC_P1_Pos)
#define GPIO_EVERC_P2_Pos           2            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P2               (_U(0x1) << GPIO_EVERC_P2_Pos)
#define GPIO_EVERC_P3_Pos           3            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P3               (_U(0x1) << GPIO_EVERC_P3_Pos)
#define GPIO_EVERC_P4_Pos           4            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P4               (_U(0x1) << GPIO_EVERC_P4_Pos)
#define GPIO_EVERC_P5_Pos           5            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P5               (_U(0x1) << GPIO_EVERC_P5_Pos)
#define GPIO_EVERC_P6_Pos           6            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P6               (_U(0x1) << GPIO_EVERC_P6_Pos)
#define GPIO_EVERC_P7_Pos           7            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P7               (_U(0x1) << GPIO_EVERC_P7_Pos)
#define GPIO_EVERC_P8_Pos           8            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P8               (_U(0x1) << GPIO_EVERC_P8_Pos)
#define GPIO_EVERC_P9_Pos           9            /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P9               (_U(0x1) << GPIO_EVERC_P9_Pos)
#define GPIO_EVERC_P10_Pos          10           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P10              (_U(0x1) << GPIO_EVERC_P10_Pos)
#define GPIO_EVERC_P11_Pos          11           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P11              (_U(0x1) << GPIO_EVERC_P11_Pos)
#define GPIO_EVERC_P12_Pos          12           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P12              (_U(0x1) << GPIO_EVERC_P12_Pos)
#define GPIO_EVERC_P13_Pos          13           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P13              (_U(0x1) << GPIO_EVERC_P13_Pos)
#define GPIO_EVERC_P14_Pos          14           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P14              (_U(0x1) << GPIO_EVERC_P14_Pos)
#define GPIO_EVERC_P15_Pos          15           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P15              (_U(0x1) << GPIO_EVERC_P15_Pos)
#define GPIO_EVERC_P16_Pos          16           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P16              (_U(0x1) << GPIO_EVERC_P16_Pos)
#define GPIO_EVERC_P17_Pos          17           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P17              (_U(0x1) << GPIO_EVERC_P17_Pos)
#define GPIO_EVERC_P18_Pos          18           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P18              (_U(0x1) << GPIO_EVERC_P18_Pos)
#define GPIO_EVERC_P19_Pos          19           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P19              (_U(0x1) << GPIO_EVERC_P19_Pos)
#define GPIO_EVERC_P20_Pos          20           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P20              (_U(0x1) << GPIO_EVERC_P20_Pos)
#define GPIO_EVERC_P21_Pos          21           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P21              (_U(0x1) << GPIO_EVERC_P21_Pos)
#define GPIO_EVERC_P22_Pos          22           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P22              (_U(0x1) << GPIO_EVERC_P22_Pos)
#define GPIO_EVERC_P23_Pos          23           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P23              (_U(0x1) << GPIO_EVERC_P23_Pos)
#define GPIO_EVERC_P24_Pos          24           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P24              (_U(0x1) << GPIO_EVERC_P24_Pos)
#define GPIO_EVERC_P25_Pos          25           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P25              (_U(0x1) << GPIO_EVERC_P25_Pos)
#define GPIO_EVERC_P26_Pos          26           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P26              (_U(0x1) << GPIO_EVERC_P26_Pos)
#define GPIO_EVERC_P27_Pos          27           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P27              (_U(0x1) << GPIO_EVERC_P27_Pos)
#define GPIO_EVERC_P28_Pos          28           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P28              (_U(0x1) << GPIO_EVERC_P28_Pos)
#define GPIO_EVERC_P29_Pos          29           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P29              (_U(0x1) << GPIO_EVERC_P29_Pos)
#define GPIO_EVERC_P30_Pos          30           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P30              (_U(0x1) << GPIO_EVERC_P30_Pos)
#define GPIO_EVERC_P31_Pos          31           /**< \brief (GPIO_EVERC) Event Enable */
#define GPIO_EVERC_P31              (_U(0x1) << GPIO_EVERC_P31_Pos)
#define GPIO_EVERC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_EVERC) MASK Register */

/* -------- GPIO_EVERT : (GPIO Offset: 0x18C) ( /W 32) port Event Enable Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Event Enable                       */
    uint32_t P1:1;             /*!< bit:      1  Event Enable                       */
    uint32_t P2:1;             /*!< bit:      2  Event Enable                       */
    uint32_t P3:1;             /*!< bit:      3  Event Enable                       */
    uint32_t P4:1;             /*!< bit:      4  Event Enable                       */
    uint32_t P5:1;             /*!< bit:      5  Event Enable                       */
    uint32_t P6:1;             /*!< bit:      6  Event Enable                       */
    uint32_t P7:1;             /*!< bit:      7  Event Enable                       */
    uint32_t P8:1;             /*!< bit:      8  Event Enable                       */
    uint32_t P9:1;             /*!< bit:      9  Event Enable                       */
    uint32_t P10:1;            /*!< bit:     10  Event Enable                       */
    uint32_t P11:1;            /*!< bit:     11  Event Enable                       */
    uint32_t P12:1;            /*!< bit:     12  Event Enable                       */
    uint32_t P13:1;            /*!< bit:     13  Event Enable                       */
    uint32_t P14:1;            /*!< bit:     14  Event Enable                       */
    uint32_t P15:1;            /*!< bit:     15  Event Enable                       */
    uint32_t P16:1;            /*!< bit:     16  Event Enable                       */
    uint32_t P17:1;            /*!< bit:     17  Event Enable                       */
    uint32_t P18:1;            /*!< bit:     18  Event Enable                       */
    uint32_t P19:1;            /*!< bit:     19  Event Enable                       */
    uint32_t P20:1;            /*!< bit:     20  Event Enable                       */
    uint32_t P21:1;            /*!< bit:     21  Event Enable                       */
    uint32_t P22:1;            /*!< bit:     22  Event Enable                       */
    uint32_t P23:1;            /*!< bit:     23  Event Enable                       */
    uint32_t P24:1;            /*!< bit:     24  Event Enable                       */
    uint32_t P25:1;            /*!< bit:     25  Event Enable                       */
    uint32_t P26:1;            /*!< bit:     26  Event Enable                       */
    uint32_t P27:1;            /*!< bit:     27  Event Enable                       */
    uint32_t P28:1;            /*!< bit:     28  Event Enable                       */
    uint32_t P29:1;            /*!< bit:     29  Event Enable                       */
    uint32_t P30:1;            /*!< bit:     30  Event Enable                       */
    uint32_t P31:1;            /*!< bit:     31  Event Enable                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_EVERT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_EVERT_OFFSET           0x18C        /**< \brief (GPIO_EVERT offset) Event Enable Register - Toggle */

#define GPIO_EVERT_P0_Pos           0            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P0               (_U(0x1) << GPIO_EVERT_P0_Pos)
#define GPIO_EVERT_P1_Pos           1            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P1               (_U(0x1) << GPIO_EVERT_P1_Pos)
#define GPIO_EVERT_P2_Pos           2            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P2               (_U(0x1) << GPIO_EVERT_P2_Pos)
#define GPIO_EVERT_P3_Pos           3            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P3               (_U(0x1) << GPIO_EVERT_P3_Pos)
#define GPIO_EVERT_P4_Pos           4            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P4               (_U(0x1) << GPIO_EVERT_P4_Pos)
#define GPIO_EVERT_P5_Pos           5            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P5               (_U(0x1) << GPIO_EVERT_P5_Pos)
#define GPIO_EVERT_P6_Pos           6            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P6               (_U(0x1) << GPIO_EVERT_P6_Pos)
#define GPIO_EVERT_P7_Pos           7            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P7               (_U(0x1) << GPIO_EVERT_P7_Pos)
#define GPIO_EVERT_P8_Pos           8            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P8               (_U(0x1) << GPIO_EVERT_P8_Pos)
#define GPIO_EVERT_P9_Pos           9            /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P9               (_U(0x1) << GPIO_EVERT_P9_Pos)
#define GPIO_EVERT_P10_Pos          10           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P10              (_U(0x1) << GPIO_EVERT_P10_Pos)
#define GPIO_EVERT_P11_Pos          11           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P11              (_U(0x1) << GPIO_EVERT_P11_Pos)
#define GPIO_EVERT_P12_Pos          12           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P12              (_U(0x1) << GPIO_EVERT_P12_Pos)
#define GPIO_EVERT_P13_Pos          13           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P13              (_U(0x1) << GPIO_EVERT_P13_Pos)
#define GPIO_EVERT_P14_Pos          14           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P14              (_U(0x1) << GPIO_EVERT_P14_Pos)
#define GPIO_EVERT_P15_Pos          15           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P15              (_U(0x1) << GPIO_EVERT_P15_Pos)
#define GPIO_EVERT_P16_Pos          16           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P16              (_U(0x1) << GPIO_EVERT_P16_Pos)
#define GPIO_EVERT_P17_Pos          17           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P17              (_U(0x1) << GPIO_EVERT_P17_Pos)
#define GPIO_EVERT_P18_Pos          18           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P18              (_U(0x1) << GPIO_EVERT_P18_Pos)
#define GPIO_EVERT_P19_Pos          19           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P19              (_U(0x1) << GPIO_EVERT_P19_Pos)
#define GPIO_EVERT_P20_Pos          20           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P20              (_U(0x1) << GPIO_EVERT_P20_Pos)
#define GPIO_EVERT_P21_Pos          21           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P21              (_U(0x1) << GPIO_EVERT_P21_Pos)
#define GPIO_EVERT_P22_Pos          22           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P22              (_U(0x1) << GPIO_EVERT_P22_Pos)
#define GPIO_EVERT_P23_Pos          23           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P23              (_U(0x1) << GPIO_EVERT_P23_Pos)
#define GPIO_EVERT_P24_Pos          24           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P24              (_U(0x1) << GPIO_EVERT_P24_Pos)
#define GPIO_EVERT_P25_Pos          25           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P25              (_U(0x1) << GPIO_EVERT_P25_Pos)
#define GPIO_EVERT_P26_Pos          26           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P26              (_U(0x1) << GPIO_EVERT_P26_Pos)
#define GPIO_EVERT_P27_Pos          27           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P27              (_U(0x1) << GPIO_EVERT_P27_Pos)
#define GPIO_EVERT_P28_Pos          28           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P28              (_U(0x1) << GPIO_EVERT_P28_Pos)
#define GPIO_EVERT_P29_Pos          29           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P29              (_U(0x1) << GPIO_EVERT_P29_Pos)
#define GPIO_EVERT_P30_Pos          30           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P30              (_U(0x1) << GPIO_EVERT_P30_Pos)
#define GPIO_EVERT_P31_Pos          31           /**< \brief (GPIO_EVERT) Event Enable */
#define GPIO_EVERT_P31              (_U(0x1) << GPIO_EVERT_P31_Pos)
#define GPIO_EVERT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_EVERT) MASK Register */

/* -------- GPIO_LOCK : (GPIO Offset: 0x1A0) (R/W 32) port Lock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Lock State                         */
    uint32_t P1:1;             /*!< bit:      1  Lock State                         */
    uint32_t P2:1;             /*!< bit:      2  Lock State                         */
    uint32_t P3:1;             /*!< bit:      3  Lock State                         */
    uint32_t P4:1;             /*!< bit:      4  Lock State                         */
    uint32_t P5:1;             /*!< bit:      5  Lock State                         */
    uint32_t P6:1;             /*!< bit:      6  Lock State                         */
    uint32_t P7:1;             /*!< bit:      7  Lock State                         */
    uint32_t P8:1;             /*!< bit:      8  Lock State                         */
    uint32_t P9:1;             /*!< bit:      9  Lock State                         */
    uint32_t P10:1;            /*!< bit:     10  Lock State                         */
    uint32_t P11:1;            /*!< bit:     11  Lock State                         */
    uint32_t P12:1;            /*!< bit:     12  Lock State                         */
    uint32_t P13:1;            /*!< bit:     13  Lock State                         */
    uint32_t P14:1;            /*!< bit:     14  Lock State                         */
    uint32_t P15:1;            /*!< bit:     15  Lock State                         */
    uint32_t P16:1;            /*!< bit:     16  Lock State                         */
    uint32_t P17:1;            /*!< bit:     17  Lock State                         */
    uint32_t P18:1;            /*!< bit:     18  Lock State                         */
    uint32_t P19:1;            /*!< bit:     19  Lock State                         */
    uint32_t P20:1;            /*!< bit:     20  Lock State                         */
    uint32_t P21:1;            /*!< bit:     21  Lock State                         */
    uint32_t P22:1;            /*!< bit:     22  Lock State                         */
    uint32_t P23:1;            /*!< bit:     23  Lock State                         */
    uint32_t P24:1;            /*!< bit:     24  Lock State                         */
    uint32_t P25:1;            /*!< bit:     25  Lock State                         */
    uint32_t P26:1;            /*!< bit:     26  Lock State                         */
    uint32_t P27:1;            /*!< bit:     27  Lock State                         */
    uint32_t P28:1;            /*!< bit:     28  Lock State                         */
    uint32_t P29:1;            /*!< bit:     29  Lock State                         */
    uint32_t P30:1;            /*!< bit:     30  Lock State                         */
    uint32_t P31:1;            /*!< bit:     31  Lock State                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_LOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_LOCK_OFFSET            0x1A0        /**< \brief (GPIO_LOCK offset) Lock Register */

#define GPIO_LOCK_P0_Pos            0            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P0                (_U(0x1) << GPIO_LOCK_P0_Pos)
#define GPIO_LOCK_P1_Pos            1            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P1                (_U(0x1) << GPIO_LOCK_P1_Pos)
#define GPIO_LOCK_P2_Pos            2            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P2                (_U(0x1) << GPIO_LOCK_P2_Pos)
#define GPIO_LOCK_P3_Pos            3            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P3                (_U(0x1) << GPIO_LOCK_P3_Pos)
#define GPIO_LOCK_P4_Pos            4            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P4                (_U(0x1) << GPIO_LOCK_P4_Pos)
#define GPIO_LOCK_P5_Pos            5            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P5                (_U(0x1) << GPIO_LOCK_P5_Pos)
#define GPIO_LOCK_P6_Pos            6            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P6                (_U(0x1) << GPIO_LOCK_P6_Pos)
#define GPIO_LOCK_P7_Pos            7            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P7                (_U(0x1) << GPIO_LOCK_P7_Pos)
#define GPIO_LOCK_P8_Pos            8            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P8                (_U(0x1) << GPIO_LOCK_P8_Pos)
#define GPIO_LOCK_P9_Pos            9            /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P9                (_U(0x1) << GPIO_LOCK_P9_Pos)
#define GPIO_LOCK_P10_Pos           10           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P10               (_U(0x1) << GPIO_LOCK_P10_Pos)
#define GPIO_LOCK_P11_Pos           11           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P11               (_U(0x1) << GPIO_LOCK_P11_Pos)
#define GPIO_LOCK_P12_Pos           12           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P12               (_U(0x1) << GPIO_LOCK_P12_Pos)
#define GPIO_LOCK_P13_Pos           13           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P13               (_U(0x1) << GPIO_LOCK_P13_Pos)
#define GPIO_LOCK_P14_Pos           14           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P14               (_U(0x1) << GPIO_LOCK_P14_Pos)
#define GPIO_LOCK_P15_Pos           15           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P15               (_U(0x1) << GPIO_LOCK_P15_Pos)
#define GPIO_LOCK_P16_Pos           16           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P16               (_U(0x1) << GPIO_LOCK_P16_Pos)
#define GPIO_LOCK_P17_Pos           17           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P17               (_U(0x1) << GPIO_LOCK_P17_Pos)
#define GPIO_LOCK_P18_Pos           18           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P18               (_U(0x1) << GPIO_LOCK_P18_Pos)
#define GPIO_LOCK_P19_Pos           19           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P19               (_U(0x1) << GPIO_LOCK_P19_Pos)
#define GPIO_LOCK_P20_Pos           20           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P20               (_U(0x1) << GPIO_LOCK_P20_Pos)
#define GPIO_LOCK_P21_Pos           21           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P21               (_U(0x1) << GPIO_LOCK_P21_Pos)
#define GPIO_LOCK_P22_Pos           22           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P22               (_U(0x1) << GPIO_LOCK_P22_Pos)
#define GPIO_LOCK_P23_Pos           23           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P23               (_U(0x1) << GPIO_LOCK_P23_Pos)
#define GPIO_LOCK_P24_Pos           24           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P24               (_U(0x1) << GPIO_LOCK_P24_Pos)
#define GPIO_LOCK_P25_Pos           25           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P25               (_U(0x1) << GPIO_LOCK_P25_Pos)
#define GPIO_LOCK_P26_Pos           26           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P26               (_U(0x1) << GPIO_LOCK_P26_Pos)
#define GPIO_LOCK_P27_Pos           27           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P27               (_U(0x1) << GPIO_LOCK_P27_Pos)
#define GPIO_LOCK_P28_Pos           28           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P28               (_U(0x1) << GPIO_LOCK_P28_Pos)
#define GPIO_LOCK_P29_Pos           29           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P29               (_U(0x1) << GPIO_LOCK_P29_Pos)
#define GPIO_LOCK_P30_Pos           30           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P30               (_U(0x1) << GPIO_LOCK_P30_Pos)
#define GPIO_LOCK_P31_Pos           31           /**< \brief (GPIO_LOCK) Lock State */
#define GPIO_LOCK_P31               (_U(0x1) << GPIO_LOCK_P31_Pos)
#define GPIO_LOCK_MASK              _U(0xFFFFFFFF) /**< \brief (GPIO_LOCK) MASK Register */

/* -------- GPIO_LOCKS : (GPIO Offset: 0x1A4) ( /W 32) port Lock Register - Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Lock State                         */
    uint32_t P1:1;             /*!< bit:      1  Lock State                         */
    uint32_t P2:1;             /*!< bit:      2  Lock State                         */
    uint32_t P3:1;             /*!< bit:      3  Lock State                         */
    uint32_t P4:1;             /*!< bit:      4  Lock State                         */
    uint32_t P5:1;             /*!< bit:      5  Lock State                         */
    uint32_t P6:1;             /*!< bit:      6  Lock State                         */
    uint32_t P7:1;             /*!< bit:      7  Lock State                         */
    uint32_t P8:1;             /*!< bit:      8  Lock State                         */
    uint32_t P9:1;             /*!< bit:      9  Lock State                         */
    uint32_t P10:1;            /*!< bit:     10  Lock State                         */
    uint32_t P11:1;            /*!< bit:     11  Lock State                         */
    uint32_t P12:1;            /*!< bit:     12  Lock State                         */
    uint32_t P13:1;            /*!< bit:     13  Lock State                         */
    uint32_t P14:1;            /*!< bit:     14  Lock State                         */
    uint32_t P15:1;            /*!< bit:     15  Lock State                         */
    uint32_t P16:1;            /*!< bit:     16  Lock State                         */
    uint32_t P17:1;            /*!< bit:     17  Lock State                         */
    uint32_t P18:1;            /*!< bit:     18  Lock State                         */
    uint32_t P19:1;            /*!< bit:     19  Lock State                         */
    uint32_t P20:1;            /*!< bit:     20  Lock State                         */
    uint32_t P21:1;            /*!< bit:     21  Lock State                         */
    uint32_t P22:1;            /*!< bit:     22  Lock State                         */
    uint32_t P23:1;            /*!< bit:     23  Lock State                         */
    uint32_t P24:1;            /*!< bit:     24  Lock State                         */
    uint32_t P25:1;            /*!< bit:     25  Lock State                         */
    uint32_t P26:1;            /*!< bit:     26  Lock State                         */
    uint32_t P27:1;            /*!< bit:     27  Lock State                         */
    uint32_t P28:1;            /*!< bit:     28  Lock State                         */
    uint32_t P29:1;            /*!< bit:     29  Lock State                         */
    uint32_t P30:1;            /*!< bit:     30  Lock State                         */
    uint32_t P31:1;            /*!< bit:     31  Lock State                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_LOCKS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_LOCKS_OFFSET           0x1A4        /**< \brief (GPIO_LOCKS offset) Lock Register - Set */

#define GPIO_LOCKS_P0_Pos           0            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P0               (_U(0x1) << GPIO_LOCKS_P0_Pos)
#define GPIO_LOCKS_P1_Pos           1            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P1               (_U(0x1) << GPIO_LOCKS_P1_Pos)
#define GPIO_LOCKS_P2_Pos           2            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P2               (_U(0x1) << GPIO_LOCKS_P2_Pos)
#define GPIO_LOCKS_P3_Pos           3            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P3               (_U(0x1) << GPIO_LOCKS_P3_Pos)
#define GPIO_LOCKS_P4_Pos           4            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P4               (_U(0x1) << GPIO_LOCKS_P4_Pos)
#define GPIO_LOCKS_P5_Pos           5            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P5               (_U(0x1) << GPIO_LOCKS_P5_Pos)
#define GPIO_LOCKS_P6_Pos           6            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P6               (_U(0x1) << GPIO_LOCKS_P6_Pos)
#define GPIO_LOCKS_P7_Pos           7            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P7               (_U(0x1) << GPIO_LOCKS_P7_Pos)
#define GPIO_LOCKS_P8_Pos           8            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P8               (_U(0x1) << GPIO_LOCKS_P8_Pos)
#define GPIO_LOCKS_P9_Pos           9            /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P9               (_U(0x1) << GPIO_LOCKS_P9_Pos)
#define GPIO_LOCKS_P10_Pos          10           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P10              (_U(0x1) << GPIO_LOCKS_P10_Pos)
#define GPIO_LOCKS_P11_Pos          11           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P11              (_U(0x1) << GPIO_LOCKS_P11_Pos)
#define GPIO_LOCKS_P12_Pos          12           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P12              (_U(0x1) << GPIO_LOCKS_P12_Pos)
#define GPIO_LOCKS_P13_Pos          13           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P13              (_U(0x1) << GPIO_LOCKS_P13_Pos)
#define GPIO_LOCKS_P14_Pos          14           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P14              (_U(0x1) << GPIO_LOCKS_P14_Pos)
#define GPIO_LOCKS_P15_Pos          15           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P15              (_U(0x1) << GPIO_LOCKS_P15_Pos)
#define GPIO_LOCKS_P16_Pos          16           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P16              (_U(0x1) << GPIO_LOCKS_P16_Pos)
#define GPIO_LOCKS_P17_Pos          17           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P17              (_U(0x1) << GPIO_LOCKS_P17_Pos)
#define GPIO_LOCKS_P18_Pos          18           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P18              (_U(0x1) << GPIO_LOCKS_P18_Pos)
#define GPIO_LOCKS_P19_Pos          19           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P19              (_U(0x1) << GPIO_LOCKS_P19_Pos)
#define GPIO_LOCKS_P20_Pos          20           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P20              (_U(0x1) << GPIO_LOCKS_P20_Pos)
#define GPIO_LOCKS_P21_Pos          21           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P21              (_U(0x1) << GPIO_LOCKS_P21_Pos)
#define GPIO_LOCKS_P22_Pos          22           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P22              (_U(0x1) << GPIO_LOCKS_P22_Pos)
#define GPIO_LOCKS_P23_Pos          23           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P23              (_U(0x1) << GPIO_LOCKS_P23_Pos)
#define GPIO_LOCKS_P24_Pos          24           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P24              (_U(0x1) << GPIO_LOCKS_P24_Pos)
#define GPIO_LOCKS_P25_Pos          25           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P25              (_U(0x1) << GPIO_LOCKS_P25_Pos)
#define GPIO_LOCKS_P26_Pos          26           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P26              (_U(0x1) << GPIO_LOCKS_P26_Pos)
#define GPIO_LOCKS_P27_Pos          27           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P27              (_U(0x1) << GPIO_LOCKS_P27_Pos)
#define GPIO_LOCKS_P28_Pos          28           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P28              (_U(0x1) << GPIO_LOCKS_P28_Pos)
#define GPIO_LOCKS_P29_Pos          29           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P29              (_U(0x1) << GPIO_LOCKS_P29_Pos)
#define GPIO_LOCKS_P30_Pos          30           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P30              (_U(0x1) << GPIO_LOCKS_P30_Pos)
#define GPIO_LOCKS_P31_Pos          31           /**< \brief (GPIO_LOCKS) Lock State */
#define GPIO_LOCKS_P31              (_U(0x1) << GPIO_LOCKS_P31_Pos)
#define GPIO_LOCKS_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_LOCKS) MASK Register */

/* -------- GPIO_LOCKC : (GPIO Offset: 0x1A8) ( /W 32) port Lock Register - Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Lock State                         */
    uint32_t P1:1;             /*!< bit:      1  Lock State                         */
    uint32_t P2:1;             /*!< bit:      2  Lock State                         */
    uint32_t P3:1;             /*!< bit:      3  Lock State                         */
    uint32_t P4:1;             /*!< bit:      4  Lock State                         */
    uint32_t P5:1;             /*!< bit:      5  Lock State                         */
    uint32_t P6:1;             /*!< bit:      6  Lock State                         */
    uint32_t P7:1;             /*!< bit:      7  Lock State                         */
    uint32_t P8:1;             /*!< bit:      8  Lock State                         */
    uint32_t P9:1;             /*!< bit:      9  Lock State                         */
    uint32_t P10:1;            /*!< bit:     10  Lock State                         */
    uint32_t P11:1;            /*!< bit:     11  Lock State                         */
    uint32_t P12:1;            /*!< bit:     12  Lock State                         */
    uint32_t P13:1;            /*!< bit:     13  Lock State                         */
    uint32_t P14:1;            /*!< bit:     14  Lock State                         */
    uint32_t P15:1;            /*!< bit:     15  Lock State                         */
    uint32_t P16:1;            /*!< bit:     16  Lock State                         */
    uint32_t P17:1;            /*!< bit:     17  Lock State                         */
    uint32_t P18:1;            /*!< bit:     18  Lock State                         */
    uint32_t P19:1;            /*!< bit:     19  Lock State                         */
    uint32_t P20:1;            /*!< bit:     20  Lock State                         */
    uint32_t P21:1;            /*!< bit:     21  Lock State                         */
    uint32_t P22:1;            /*!< bit:     22  Lock State                         */
    uint32_t P23:1;            /*!< bit:     23  Lock State                         */
    uint32_t P24:1;            /*!< bit:     24  Lock State                         */
    uint32_t P25:1;            /*!< bit:     25  Lock State                         */
    uint32_t P26:1;            /*!< bit:     26  Lock State                         */
    uint32_t P27:1;            /*!< bit:     27  Lock State                         */
    uint32_t P28:1;            /*!< bit:     28  Lock State                         */
    uint32_t P29:1;            /*!< bit:     29  Lock State                         */
    uint32_t P30:1;            /*!< bit:     30  Lock State                         */
    uint32_t P31:1;            /*!< bit:     31  Lock State                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_LOCKC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_LOCKC_OFFSET           0x1A8        /**< \brief (GPIO_LOCKC offset) Lock Register - Clear */

#define GPIO_LOCKC_P0_Pos           0            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P0               (_U(0x1) << GPIO_LOCKC_P0_Pos)
#define GPIO_LOCKC_P1_Pos           1            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P1               (_U(0x1) << GPIO_LOCKC_P1_Pos)
#define GPIO_LOCKC_P2_Pos           2            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P2               (_U(0x1) << GPIO_LOCKC_P2_Pos)
#define GPIO_LOCKC_P3_Pos           3            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P3               (_U(0x1) << GPIO_LOCKC_P3_Pos)
#define GPIO_LOCKC_P4_Pos           4            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P4               (_U(0x1) << GPIO_LOCKC_P4_Pos)
#define GPIO_LOCKC_P5_Pos           5            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P5               (_U(0x1) << GPIO_LOCKC_P5_Pos)
#define GPIO_LOCKC_P6_Pos           6            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P6               (_U(0x1) << GPIO_LOCKC_P6_Pos)
#define GPIO_LOCKC_P7_Pos           7            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P7               (_U(0x1) << GPIO_LOCKC_P7_Pos)
#define GPIO_LOCKC_P8_Pos           8            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P8               (_U(0x1) << GPIO_LOCKC_P8_Pos)
#define GPIO_LOCKC_P9_Pos           9            /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P9               (_U(0x1) << GPIO_LOCKC_P9_Pos)
#define GPIO_LOCKC_P10_Pos          10           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P10              (_U(0x1) << GPIO_LOCKC_P10_Pos)
#define GPIO_LOCKC_P11_Pos          11           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P11              (_U(0x1) << GPIO_LOCKC_P11_Pos)
#define GPIO_LOCKC_P12_Pos          12           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P12              (_U(0x1) << GPIO_LOCKC_P12_Pos)
#define GPIO_LOCKC_P13_Pos          13           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P13              (_U(0x1) << GPIO_LOCKC_P13_Pos)
#define GPIO_LOCKC_P14_Pos          14           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P14              (_U(0x1) << GPIO_LOCKC_P14_Pos)
#define GPIO_LOCKC_P15_Pos          15           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P15              (_U(0x1) << GPIO_LOCKC_P15_Pos)
#define GPIO_LOCKC_P16_Pos          16           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P16              (_U(0x1) << GPIO_LOCKC_P16_Pos)
#define GPIO_LOCKC_P17_Pos          17           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P17              (_U(0x1) << GPIO_LOCKC_P17_Pos)
#define GPIO_LOCKC_P18_Pos          18           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P18              (_U(0x1) << GPIO_LOCKC_P18_Pos)
#define GPIO_LOCKC_P19_Pos          19           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P19              (_U(0x1) << GPIO_LOCKC_P19_Pos)
#define GPIO_LOCKC_P20_Pos          20           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P20              (_U(0x1) << GPIO_LOCKC_P20_Pos)
#define GPIO_LOCKC_P21_Pos          21           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P21              (_U(0x1) << GPIO_LOCKC_P21_Pos)
#define GPIO_LOCKC_P22_Pos          22           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P22              (_U(0x1) << GPIO_LOCKC_P22_Pos)
#define GPIO_LOCKC_P23_Pos          23           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P23              (_U(0x1) << GPIO_LOCKC_P23_Pos)
#define GPIO_LOCKC_P24_Pos          24           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P24              (_U(0x1) << GPIO_LOCKC_P24_Pos)
#define GPIO_LOCKC_P25_Pos          25           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P25              (_U(0x1) << GPIO_LOCKC_P25_Pos)
#define GPIO_LOCKC_P26_Pos          26           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P26              (_U(0x1) << GPIO_LOCKC_P26_Pos)
#define GPIO_LOCKC_P27_Pos          27           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P27              (_U(0x1) << GPIO_LOCKC_P27_Pos)
#define GPIO_LOCKC_P28_Pos          28           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P28              (_U(0x1) << GPIO_LOCKC_P28_Pos)
#define GPIO_LOCKC_P29_Pos          29           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P29              (_U(0x1) << GPIO_LOCKC_P29_Pos)
#define GPIO_LOCKC_P30_Pos          30           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P30              (_U(0x1) << GPIO_LOCKC_P30_Pos)
#define GPIO_LOCKC_P31_Pos          31           /**< \brief (GPIO_LOCKC) Lock State */
#define GPIO_LOCKC_P31              (_U(0x1) << GPIO_LOCKC_P31_Pos)
#define GPIO_LOCKC_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_LOCKC) MASK Register */

/* -------- GPIO_LOCKT : (GPIO Offset: 0x1AC) ( /W 32) port Lock Register - Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t P0:1;             /*!< bit:      0  Lock State                         */
    uint32_t P1:1;             /*!< bit:      1  Lock State                         */
    uint32_t P2:1;             /*!< bit:      2  Lock State                         */
    uint32_t P3:1;             /*!< bit:      3  Lock State                         */
    uint32_t P4:1;             /*!< bit:      4  Lock State                         */
    uint32_t P5:1;             /*!< bit:      5  Lock State                         */
    uint32_t P6:1;             /*!< bit:      6  Lock State                         */
    uint32_t P7:1;             /*!< bit:      7  Lock State                         */
    uint32_t P8:1;             /*!< bit:      8  Lock State                         */
    uint32_t P9:1;             /*!< bit:      9  Lock State                         */
    uint32_t P10:1;            /*!< bit:     10  Lock State                         */
    uint32_t P11:1;            /*!< bit:     11  Lock State                         */
    uint32_t P12:1;            /*!< bit:     12  Lock State                         */
    uint32_t P13:1;            /*!< bit:     13  Lock State                         */
    uint32_t P14:1;            /*!< bit:     14  Lock State                         */
    uint32_t P15:1;            /*!< bit:     15  Lock State                         */
    uint32_t P16:1;            /*!< bit:     16  Lock State                         */
    uint32_t P17:1;            /*!< bit:     17  Lock State                         */
    uint32_t P18:1;            /*!< bit:     18  Lock State                         */
    uint32_t P19:1;            /*!< bit:     19  Lock State                         */
    uint32_t P20:1;            /*!< bit:     20  Lock State                         */
    uint32_t P21:1;            /*!< bit:     21  Lock State                         */
    uint32_t P22:1;            /*!< bit:     22  Lock State                         */
    uint32_t P23:1;            /*!< bit:     23  Lock State                         */
    uint32_t P24:1;            /*!< bit:     24  Lock State                         */
    uint32_t P25:1;            /*!< bit:     25  Lock State                         */
    uint32_t P26:1;            /*!< bit:     26  Lock State                         */
    uint32_t P27:1;            /*!< bit:     27  Lock State                         */
    uint32_t P28:1;            /*!< bit:     28  Lock State                         */
    uint32_t P29:1;            /*!< bit:     29  Lock State                         */
    uint32_t P30:1;            /*!< bit:     30  Lock State                         */
    uint32_t P31:1;            /*!< bit:     31  Lock State                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_LOCKT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_LOCKT_OFFSET           0x1AC        /**< \brief (GPIO_LOCKT offset) Lock Register - Toggle */

#define GPIO_LOCKT_P0_Pos           0            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P0               (_U(0x1) << GPIO_LOCKT_P0_Pos)
#define GPIO_LOCKT_P1_Pos           1            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P1               (_U(0x1) << GPIO_LOCKT_P1_Pos)
#define GPIO_LOCKT_P2_Pos           2            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P2               (_U(0x1) << GPIO_LOCKT_P2_Pos)
#define GPIO_LOCKT_P3_Pos           3            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P3               (_U(0x1) << GPIO_LOCKT_P3_Pos)
#define GPIO_LOCKT_P4_Pos           4            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P4               (_U(0x1) << GPIO_LOCKT_P4_Pos)
#define GPIO_LOCKT_P5_Pos           5            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P5               (_U(0x1) << GPIO_LOCKT_P5_Pos)
#define GPIO_LOCKT_P6_Pos           6            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P6               (_U(0x1) << GPIO_LOCKT_P6_Pos)
#define GPIO_LOCKT_P7_Pos           7            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P7               (_U(0x1) << GPIO_LOCKT_P7_Pos)
#define GPIO_LOCKT_P8_Pos           8            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P8               (_U(0x1) << GPIO_LOCKT_P8_Pos)
#define GPIO_LOCKT_P9_Pos           9            /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P9               (_U(0x1) << GPIO_LOCKT_P9_Pos)
#define GPIO_LOCKT_P10_Pos          10           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P10              (_U(0x1) << GPIO_LOCKT_P10_Pos)
#define GPIO_LOCKT_P11_Pos          11           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P11              (_U(0x1) << GPIO_LOCKT_P11_Pos)
#define GPIO_LOCKT_P12_Pos          12           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P12              (_U(0x1) << GPIO_LOCKT_P12_Pos)
#define GPIO_LOCKT_P13_Pos          13           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P13              (_U(0x1) << GPIO_LOCKT_P13_Pos)
#define GPIO_LOCKT_P14_Pos          14           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P14              (_U(0x1) << GPIO_LOCKT_P14_Pos)
#define GPIO_LOCKT_P15_Pos          15           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P15              (_U(0x1) << GPIO_LOCKT_P15_Pos)
#define GPIO_LOCKT_P16_Pos          16           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P16              (_U(0x1) << GPIO_LOCKT_P16_Pos)
#define GPIO_LOCKT_P17_Pos          17           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P17              (_U(0x1) << GPIO_LOCKT_P17_Pos)
#define GPIO_LOCKT_P18_Pos          18           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P18              (_U(0x1) << GPIO_LOCKT_P18_Pos)
#define GPIO_LOCKT_P19_Pos          19           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P19              (_U(0x1) << GPIO_LOCKT_P19_Pos)
#define GPIO_LOCKT_P20_Pos          20           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P20              (_U(0x1) << GPIO_LOCKT_P20_Pos)
#define GPIO_LOCKT_P21_Pos          21           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P21              (_U(0x1) << GPIO_LOCKT_P21_Pos)
#define GPIO_LOCKT_P22_Pos          22           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P22              (_U(0x1) << GPIO_LOCKT_P22_Pos)
#define GPIO_LOCKT_P23_Pos          23           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P23              (_U(0x1) << GPIO_LOCKT_P23_Pos)
#define GPIO_LOCKT_P24_Pos          24           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P24              (_U(0x1) << GPIO_LOCKT_P24_Pos)
#define GPIO_LOCKT_P25_Pos          25           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P25              (_U(0x1) << GPIO_LOCKT_P25_Pos)
#define GPIO_LOCKT_P26_Pos          26           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P26              (_U(0x1) << GPIO_LOCKT_P26_Pos)
#define GPIO_LOCKT_P27_Pos          27           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P27              (_U(0x1) << GPIO_LOCKT_P27_Pos)
#define GPIO_LOCKT_P28_Pos          28           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P28              (_U(0x1) << GPIO_LOCKT_P28_Pos)
#define GPIO_LOCKT_P29_Pos          29           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P29              (_U(0x1) << GPIO_LOCKT_P29_Pos)
#define GPIO_LOCKT_P30_Pos          30           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P30              (_U(0x1) << GPIO_LOCKT_P30_Pos)
#define GPIO_LOCKT_P31_Pos          31           /**< \brief (GPIO_LOCKT) Lock State */
#define GPIO_LOCKT_P31              (_U(0x1) << GPIO_LOCKT_P31_Pos)
#define GPIO_LOCKT_MASK             _U(0xFFFFFFFF) /**< \brief (GPIO_LOCKT) MASK Register */

/* -------- GPIO_UNLOCK : (GPIO Offset: 0x1E0) ( /W 32) port Unlock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADDR:10;          /*!< bit:  0.. 9  Offset Register                    */
    uint32_t :14;              /*!< bit: 10..23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Unlocking Key                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_UNLOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_UNLOCK_OFFSET          0x1E0        /**< \brief (GPIO_UNLOCK offset) Unlock Register */

#define GPIO_UNLOCK_ADDR_Pos        0            /**< \brief (GPIO_UNLOCK) Offset Register */
#define GPIO_UNLOCK_ADDR_Msk        (_U(0x3FF) << GPIO_UNLOCK_ADDR_Pos)
#define GPIO_UNLOCK_ADDR(value)     (GPIO_UNLOCK_ADDR_Msk & ((value) << GPIO_UNLOCK_ADDR_Pos))
#define GPIO_UNLOCK_KEY_Pos         24           /**< \brief (GPIO_UNLOCK) Unlocking Key */
#define GPIO_UNLOCK_KEY_Msk         (_U(0xFF) << GPIO_UNLOCK_KEY_Pos)
#define GPIO_UNLOCK_KEY(value)      (GPIO_UNLOCK_KEY_Msk & ((value) << GPIO_UNLOCK_KEY_Pos))
#define GPIO_UNLOCK_MASK            _U(0xFF0003FF) /**< \brief (GPIO_UNLOCK) MASK Register */

/* -------- GPIO_ASR : (GPIO Offset: 0x1E4) (R/W 32) port Access Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t AR:1;             /*!< bit:      0  Access Error                       */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_ASR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_ASR_OFFSET             0x1E4        /**< \brief (GPIO_ASR offset) Access Status Register */

#define GPIO_ASR_AR_Pos             0            /**< \brief (GPIO_ASR) Access Error */
#define GPIO_ASR_AR                 (_U(0x1) << GPIO_ASR_AR_Pos)
#define GPIO_ASR_MASK               _U(0x00000001) /**< \brief (GPIO_ASR) MASK Register */

/* -------- GPIO_PARAMETER : (GPIO Offset: 0x1F8) (R/  32) port Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PARAMETER:32;     /*!< bit:  0..31  Parameter                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PARAMETER_OFFSET       0x1F8        /**< \brief (GPIO_PARAMETER offset) Parameter Register */

#define GPIO_PARAMETER_PARAMETER_Pos 0            /**< \brief (GPIO_PARAMETER) Parameter */
#define GPIO_PARAMETER_PARAMETER_Msk (_U(0xFFFFFFFF) << GPIO_PARAMETER_PARAMETER_Pos)
#define GPIO_PARAMETER_PARAMETER(value) (GPIO_PARAMETER_PARAMETER_Msk & ((value) << GPIO_PARAMETER_PARAMETER_Pos))
#define GPIO_PARAMETER_MASK         _U(0xFFFFFFFF) /**< \brief (GPIO_PARAMETER) MASK Register */

/* -------- GPIO_VERSION : (GPIO Offset: 0x1FC) (R/  32) port Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GPIO_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_VERSION_OFFSET         0x1FC        /**< \brief (GPIO_VERSION offset) Version Register */
#define GPIO_VERSION_RESETVALUE     _U(0x00000215); /**< \brief (GPIO_VERSION reset_value) Version Register */

#define GPIO_VERSION_VERSION_Pos    0            /**< \brief (GPIO_VERSION) Version Number */
#define GPIO_VERSION_VERSION_Msk    (_U(0xFFF) << GPIO_VERSION_VERSION_Pos)
#define GPIO_VERSION_VERSION(value) (GPIO_VERSION_VERSION_Msk & ((value) << GPIO_VERSION_VERSION_Pos))
#define GPIO_VERSION_VARIANT_Pos    16           /**< \brief (GPIO_VERSION) Variant Number */
#define GPIO_VERSION_VARIANT_Msk    (_U(0xF) << GPIO_VERSION_VARIANT_Pos)
#define GPIO_VERSION_VARIANT(value) (GPIO_VERSION_VARIANT_Msk & ((value) << GPIO_VERSION_VARIANT_Pos))
#define GPIO_VERSION_MASK           _U(0x000F0FFF) /**< \brief (GPIO_VERSION) MASK Register */

/** \brief GpioPort hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __IO GPIO_GPER_Type            GPER;        /**< \brief Offset: 0x000 (R/W 32) GPIO Enable Register */
  __O  GPIO_GPERS_Type           GPERS;       /**< \brief Offset: 0x004 ( /W 32) GPIO Enable Register - Set */
  __O  GPIO_GPERC_Type           GPERC;       /**< \brief Offset: 0x008 ( /W 32) GPIO Enable Register - Clear */
  __O  GPIO_GPERT_Type           GPERT;       /**< \brief Offset: 0x00C ( /W 32) GPIO Enable Register - Toggle */
  __IO GPIO_PMR0_Type            PMR0;        /**< \brief Offset: 0x010 (R/W 32) Peripheral Mux Register 0 */
  __O  GPIO_PMR0S_Type           PMR0S;       /**< \brief Offset: 0x014 ( /W 32) Peripheral Mux Register 0 - Set */
  __O  GPIO_PMR0C_Type           PMR0C;       /**< \brief Offset: 0x018 ( /W 32) Peripheral Mux Register 0 - Clear */
  __O  GPIO_PMR0T_Type           PMR0T;       /**< \brief Offset: 0x01C ( /W 32) Peripheral Mux Register 0 - Toggle */
  __IO GPIO_PMR1_Type            PMR1;        /**< \brief Offset: 0x020 (R/W 32) Peripheral Mux Register 1 */
  __O  GPIO_PMR1S_Type           PMR1S;       /**< \brief Offset: 0x024 ( /W 32) Peripheral Mux Register 1 - Set */
  __O  GPIO_PMR1C_Type           PMR1C;       /**< \brief Offset: 0x028 ( /W 32) Peripheral Mux Register 1 - Clear */
  __O  GPIO_PMR1T_Type           PMR1T;       /**< \brief Offset: 0x02C ( /W 32) Peripheral Mux Register 1 - Toggle */
  __IO GPIO_PMR2_Type            PMR2;        /**< \brief Offset: 0x030 (R/W 32) Peripheral Mux Register 2 */
  __O  GPIO_PMR2S_Type           PMR2S;       /**< \brief Offset: 0x034 ( /W 32) Peripheral Mux Register 2 - Set */
  __O  GPIO_PMR2C_Type           PMR2C;       /**< \brief Offset: 0x038 ( /W 32) Peripheral Mux Register 2 - Clear */
  __O  GPIO_PMR2T_Type           PMR2T;       /**< \brief Offset: 0x03C ( /W 32) Peripheral Mux Register 2 - Toggle */
  __IO GPIO_ODER_Type            ODER;        /**< \brief Offset: 0x040 (R/W 32) Output Driver Enable Register */
  __O  GPIO_ODERS_Type           ODERS;       /**< \brief Offset: 0x044 ( /W 32) Output Driver Enable Register - Set */
  __O  GPIO_ODERC_Type           ODERC;       /**< \brief Offset: 0x048 ( /W 32) Output Driver Enable Register - Clear */
  __O  GPIO_ODERT_Type           ODERT;       /**< \brief Offset: 0x04C ( /W 32) Output Driver Enable Register - Toggle */
  __IO GPIO_OVR_Type             OVR;         /**< \brief Offset: 0x050 (R/W 32) Output Value Register */
  __O  GPIO_OVRS_Type            OVRS;        /**< \brief Offset: 0x054 ( /W 32) Output Value Register - Set */
  __O  GPIO_OVRC_Type            OVRC;        /**< \brief Offset: 0x058 ( /W 32) Output Value Register - Clear */
  __O  GPIO_OVRT_Type            OVRT;        /**< \brief Offset: 0x05C ( /W 32) Output Value Register - Toggle */
  __I  GPIO_PVR_Type             PVR;         /**< \brief Offset: 0x060 (R/  32) Pin Value Register */
       RoReg8                    Reserved1[0xC];
  __IO GPIO_PUER_Type            PUER;        /**< \brief Offset: 0x070 (R/W 32) Pull-up Enable Register */
  __O  GPIO_PUERS_Type           PUERS;       /**< \brief Offset: 0x074 ( /W 32) Pull-up Enable Register - Set */
  __O  GPIO_PUERC_Type           PUERC;       /**< \brief Offset: 0x078 ( /W 32) Pull-up Enable Register - Clear */
  __O  GPIO_PUERT_Type           PUERT;       /**< \brief Offset: 0x07C ( /W 32) Pull-up Enable Register - Toggle */
  __IO GPIO_PDER_Type            PDER;        /**< \brief Offset: 0x080 (R/W 32) Pull-down Enable Register */
  __O  GPIO_PDERS_Type           PDERS;       /**< \brief Offset: 0x084 ( /W 32) Pull-down Enable Register - Set */
  __O  GPIO_PDERC_Type           PDERC;       /**< \brief Offset: 0x088 ( /W 32) Pull-down Enable Register - Clear */
  __O  GPIO_PDERT_Type           PDERT;       /**< \brief Offset: 0x08C ( /W 32) Pull-down Enable Register - Toggle */
  __IO GPIO_IER_Type             IER;         /**< \brief Offset: 0x090 (R/W 32) Interrupt Enable Register */
  __O  GPIO_IERS_Type            IERS;        /**< \brief Offset: 0x094 ( /W 32) Interrupt Enable Register - Set */
  __O  GPIO_IERC_Type            IERC;        /**< \brief Offset: 0x098 ( /W 32) Interrupt Enable Register - Clear */
  __O  GPIO_IERT_Type            IERT;        /**< \brief Offset: 0x09C ( /W 32) Interrupt Enable Register - Toggle */
  __IO GPIO_IMR0_Type            IMR0;        /**< \brief Offset: 0x0A0 (R/W 32) Interrupt Mode Register 0 */
  __O  GPIO_IMR0S_Type           IMR0S;       /**< \brief Offset: 0x0A4 ( /W 32) Interrupt Mode Register 0 - Set */
  __O  GPIO_IMR0C_Type           IMR0C;       /**< \brief Offset: 0x0A8 ( /W 32) Interrupt Mode Register 0 - Clear */
  __O  GPIO_IMR0T_Type           IMR0T;       /**< \brief Offset: 0x0AC ( /W 32) Interrupt Mode Register 0 - Toggle */
  __IO GPIO_IMR1_Type            IMR1;        /**< \brief Offset: 0x0B0 (R/W 32) Interrupt Mode Register 1 */
  __O  GPIO_IMR1S_Type           IMR1S;       /**< \brief Offset: 0x0B4 ( /W 32) Interrupt Mode Register 1 - Set */
  __O  GPIO_IMR1C_Type           IMR1C;       /**< \brief Offset: 0x0B8 ( /W 32) Interrupt Mode Register 1 - Clear */
  __O  GPIO_IMR1T_Type           IMR1T;       /**< \brief Offset: 0x0BC ( /W 32) Interrupt Mode Register 1 - Toggle */
  __IO GPIO_GFER_Type            GFER;        /**< \brief Offset: 0x0C0 (R/W 32) Glitch Filter Enable Register */
  __O  GPIO_GFERS_Type           GFERS;       /**< \brief Offset: 0x0C4 ( /W 32) Glitch Filter Enable Register - Set */
  __O  GPIO_GFERC_Type           GFERC;       /**< \brief Offset: 0x0C8 ( /W 32) Glitch Filter Enable Register - Clear */
  __O  GPIO_GFERT_Type           GFERT;       /**< \brief Offset: 0x0CC ( /W 32) Glitch Filter Enable Register - Toggle */
  __I  GPIO_IFR_Type             IFR;         /**< \brief Offset: 0x0D0 (R/  32) Interrupt Flag Register */
       RoReg8                    Reserved2[0x4];
  __O  GPIO_IFRC_Type            IFRC;        /**< \brief Offset: 0x0D8 ( /W 32) Interrupt Flag Register - Clear */
       RoReg8                    Reserved3[0x4];
  __IO GPIO_ODMER_Type           ODMER;       /**< \brief Offset: 0x0E0 (R/W 32) Open Drain Mode Register */
  __O  GPIO_ODMERS_Type          ODMERS;      /**< \brief Offset: 0x0E4 ( /W 32) Open Drain Mode Register - Set */
  __O  GPIO_ODMERC_Type          ODMERC;      /**< \brief Offset: 0x0E8 ( /W 32) Open Drain Mode Register - Clear */
  __O  GPIO_ODMERT_Type          ODMERT;      /**< \brief Offset: 0x0EC ( /W 32) Open Drain Mode Register - Toggle */
       RoReg8                    Reserved4[0x10];
  __IO GPIO_ODCR0_Type           ODCR0;       /**< \brief Offset: 0x100 (R/W 32) Output Driving Capability Register 0 */
  __IO GPIO_ODCR0S_Type          ODCR0S;      /**< \brief Offset: 0x104 (R/W 32) Output Driving Capability Register 0 - Set */
  __IO GPIO_ODCR0C_Type          ODCR0C;      /**< \brief Offset: 0x108 (R/W 32) Output Driving Capability Register 0 - Clear */
  __IO GPIO_ODCR0T_Type          ODCR0T;      /**< \brief Offset: 0x10C (R/W 32) Output Driving Capability Register 0 - Toggle */
  __IO GPIO_ODCR1_Type           ODCR1;       /**< \brief Offset: 0x110 (R/W 32) Output Driving Capability Register 1 */
  __IO GPIO_ODCR1S_Type          ODCR1S;      /**< \brief Offset: 0x114 (R/W 32) Output Driving Capability Register 1 - Set */
  __IO GPIO_ODCR1C_Type          ODCR1C;      /**< \brief Offset: 0x118 (R/W 32) Output Driving Capability Register 1 - Clear */
  __IO GPIO_ODCR1T_Type          ODCR1T;      /**< \brief Offset: 0x11C (R/W 32) Output Driving Capability Register 1 - Toggle */
       RoReg8                    Reserved5[0x10];
  __IO GPIO_OSRR0_Type           OSRR0;       /**< \brief Offset: 0x130 (R/W 32) Output Slew Rate Register 0 */
  __IO GPIO_OSRR0S_Type          OSRR0S;      /**< \brief Offset: 0x134 (R/W 32) Output Slew Rate Register 0 - Set */
  __IO GPIO_OSRR0C_Type          OSRR0C;      /**< \brief Offset: 0x138 (R/W 32) Output Slew Rate Register 0 - Clear */
  __IO GPIO_OSRR0T_Type          OSRR0T;      /**< \brief Offset: 0x13C (R/W 32) Output Slew Rate Register 0 - Toggle */
       RoReg8                    Reserved6[0x20];
  __IO GPIO_STER_Type            STER;        /**< \brief Offset: 0x160 (R/W 32) Schmitt Trigger Enable Register */
  __IO GPIO_STERS_Type           STERS;       /**< \brief Offset: 0x164 (R/W 32) Schmitt Trigger Enable Register - Set */
  __IO GPIO_STERC_Type           STERC;       /**< \brief Offset: 0x168 (R/W 32) Schmitt Trigger Enable Register - Clear */
  __IO GPIO_STERT_Type           STERT;       /**< \brief Offset: 0x16C (R/W 32) Schmitt Trigger Enable Register - Toggle */
       RoReg8                    Reserved7[0x10];
  __IO GPIO_EVER_Type            EVER;        /**< \brief Offset: 0x180 (R/W 32) Event Enable Register */
  __O  GPIO_EVERS_Type           EVERS;       /**< \brief Offset: 0x184 ( /W 32) Event Enable Register - Set */
  __O  GPIO_EVERC_Type           EVERC;       /**< \brief Offset: 0x188 ( /W 32) Event Enable Register - Clear */
  __O  GPIO_EVERT_Type           EVERT;       /**< \brief Offset: 0x18C ( /W 32) Event Enable Register - Toggle */
       RoReg8                    Reserved8[0x10];
  __IO GPIO_LOCK_Type            LOCK;        /**< \brief Offset: 0x1A0 (R/W 32) Lock Register */
  __O  GPIO_LOCKS_Type           LOCKS;       /**< \brief Offset: 0x1A4 ( /W 32) Lock Register - Set */
  __O  GPIO_LOCKC_Type           LOCKC;       /**< \brief Offset: 0x1A8 ( /W 32) Lock Register - Clear */
  __O  GPIO_LOCKT_Type           LOCKT;       /**< \brief Offset: 0x1AC ( /W 32) Lock Register - Toggle */
       RoReg8                    Reserved9[0x30];
  __O  GPIO_UNLOCK_Type          UNLOCK;      /**< \brief Offset: 0x1E0 ( /W 32) Unlock Register */
  __IO GPIO_ASR_Type             ASR;         /**< \brief Offset: 0x1E4 (R/W 32) Access Status Register */
       RoReg8                    Reserved10[0x10];
  __I  GPIO_PARAMETER_Type       PARAMETER;   /**< \brief Offset: 0x1F8 (R/  32) Parameter Register */
  __I  GPIO_VERSION_Type         VERSION;     /**< \brief Offset: 0x1FC (R/  32) Version Register */
 } bf;
 struct {
  RwReg   GPIO_GPER;          /**< \brief (GPIO Offset: 0x000) GPIO Enable Register */
  WoReg   GPIO_GPERS;         /**< \brief (GPIO Offset: 0x004) GPIO Enable Register - Set */
  WoReg   GPIO_GPERC;         /**< \brief (GPIO Offset: 0x008) GPIO Enable Register - Clear */
  WoReg   GPIO_GPERT;         /**< \brief (GPIO Offset: 0x00C) GPIO Enable Register - Toggle */
  RwReg   GPIO_PMR0;          /**< \brief (GPIO Offset: 0x010) Peripheral Mux Register 0 */
  WoReg   GPIO_PMR0S;         /**< \brief (GPIO Offset: 0x014) Peripheral Mux Register 0 - Set */
  WoReg   GPIO_PMR0C;         /**< \brief (GPIO Offset: 0x018) Peripheral Mux Register 0 - Clear */
  WoReg   GPIO_PMR0T;         /**< \brief (GPIO Offset: 0x01C) Peripheral Mux Register 0 - Toggle */
  RwReg   GPIO_PMR1;          /**< \brief (GPIO Offset: 0x020) Peripheral Mux Register 1 */
  WoReg   GPIO_PMR1S;         /**< \brief (GPIO Offset: 0x024) Peripheral Mux Register 1 - Set */
  WoReg   GPIO_PMR1C;         /**< \brief (GPIO Offset: 0x028) Peripheral Mux Register 1 - Clear */
  WoReg   GPIO_PMR1T;         /**< \brief (GPIO Offset: 0x02C) Peripheral Mux Register 1 - Toggle */
  RwReg   GPIO_PMR2;          /**< \brief (GPIO Offset: 0x030) Peripheral Mux Register 2 */
  WoReg   GPIO_PMR2S;         /**< \brief (GPIO Offset: 0x034) Peripheral Mux Register 2 - Set */
  WoReg   GPIO_PMR2C;         /**< \brief (GPIO Offset: 0x038) Peripheral Mux Register 2 - Clear */
  WoReg   GPIO_PMR2T;         /**< \brief (GPIO Offset: 0x03C) Peripheral Mux Register 2 - Toggle */
  RwReg   GPIO_ODER;          /**< \brief (GPIO Offset: 0x040) Output Driver Enable Register */
  WoReg   GPIO_ODERS;         /**< \brief (GPIO Offset: 0x044) Output Driver Enable Register - Set */
  WoReg   GPIO_ODERC;         /**< \brief (GPIO Offset: 0x048) Output Driver Enable Register - Clear */
  WoReg   GPIO_ODERT;         /**< \brief (GPIO Offset: 0x04C) Output Driver Enable Register - Toggle */
  RwReg   GPIO_OVR;           /**< \brief (GPIO Offset: 0x050) Output Value Register */
  WoReg   GPIO_OVRS;          /**< \brief (GPIO Offset: 0x054) Output Value Register - Set */
  WoReg   GPIO_OVRC;          /**< \brief (GPIO Offset: 0x058) Output Value Register - Clear */
  WoReg   GPIO_OVRT;          /**< \brief (GPIO Offset: 0x05C) Output Value Register - Toggle */
  RoReg   GPIO_PVR;           /**< \brief (GPIO Offset: 0x060) Pin Value Register */
  RoReg8  Reserved11[0xC];
  RwReg   GPIO_PUER;          /**< \brief (GPIO Offset: 0x070) Pull-up Enable Register */
  WoReg   GPIO_PUERS;         /**< \brief (GPIO Offset: 0x074) Pull-up Enable Register - Set */
  WoReg   GPIO_PUERC;         /**< \brief (GPIO Offset: 0x078) Pull-up Enable Register - Clear */
  WoReg   GPIO_PUERT;         /**< \brief (GPIO Offset: 0x07C) Pull-up Enable Register - Toggle */
  RwReg   GPIO_PDER;          /**< \brief (GPIO Offset: 0x080) Pull-down Enable Register */
  WoReg   GPIO_PDERS;         /**< \brief (GPIO Offset: 0x084) Pull-down Enable Register - Set */
  WoReg   GPIO_PDERC;         /**< \brief (GPIO Offset: 0x088) Pull-down Enable Register - Clear */
  WoReg   GPIO_PDERT;         /**< \brief (GPIO Offset: 0x08C) Pull-down Enable Register - Toggle */
  RwReg   GPIO_IER;           /**< \brief (GPIO Offset: 0x090) Interrupt Enable Register */
  WoReg   GPIO_IERS;          /**< \brief (GPIO Offset: 0x094) Interrupt Enable Register - Set */
  WoReg   GPIO_IERC;          /**< \brief (GPIO Offset: 0x098) Interrupt Enable Register - Clear */
  WoReg   GPIO_IERT;          /**< \brief (GPIO Offset: 0x09C) Interrupt Enable Register - Toggle */
  RwReg   GPIO_IMR0;          /**< \brief (GPIO Offset: 0x0A0) Interrupt Mode Register 0 */
  WoReg   GPIO_IMR0S;         /**< \brief (GPIO Offset: 0x0A4) Interrupt Mode Register 0 - Set */
  WoReg   GPIO_IMR0C;         /**< \brief (GPIO Offset: 0x0A8) Interrupt Mode Register 0 - Clear */
  WoReg   GPIO_IMR0T;         /**< \brief (GPIO Offset: 0x0AC) Interrupt Mode Register 0 - Toggle */
  RwReg   GPIO_IMR1;          /**< \brief (GPIO Offset: 0x0B0) Interrupt Mode Register 1 */
  WoReg   GPIO_IMR1S;         /**< \brief (GPIO Offset: 0x0B4) Interrupt Mode Register 1 - Set */
  WoReg   GPIO_IMR1C;         /**< \brief (GPIO Offset: 0x0B8) Interrupt Mode Register 1 - Clear */
  WoReg   GPIO_IMR1T;         /**< \brief (GPIO Offset: 0x0BC) Interrupt Mode Register 1 - Toggle */
  RwReg   GPIO_GFER;          /**< \brief (GPIO Offset: 0x0C0) Glitch Filter Enable Register */
  WoReg   GPIO_GFERS;         /**< \brief (GPIO Offset: 0x0C4) Glitch Filter Enable Register - Set */
  WoReg   GPIO_GFERC;         /**< \brief (GPIO Offset: 0x0C8) Glitch Filter Enable Register - Clear */
  WoReg   GPIO_GFERT;         /**< \brief (GPIO Offset: 0x0CC) Glitch Filter Enable Register - Toggle */
  RoReg   GPIO_IFR;           /**< \brief (GPIO Offset: 0x0D0) Interrupt Flag Register */
  RoReg8  Reserved12[0x4];
  WoReg   GPIO_IFRC;          /**< \brief (GPIO Offset: 0x0D8) Interrupt Flag Register - Clear */
  RoReg8  Reserved13[0x4];
  RwReg   GPIO_ODMER;         /**< \brief (GPIO Offset: 0x0E0) Open Drain Mode Register */
  WoReg   GPIO_ODMERS;        /**< \brief (GPIO Offset: 0x0E4) Open Drain Mode Register - Set */
  WoReg   GPIO_ODMERC;        /**< \brief (GPIO Offset: 0x0E8) Open Drain Mode Register - Clear */
  WoReg   GPIO_ODMERT;        /**< \brief (GPIO Offset: 0x0EC) Open Drain Mode Register - Toggle */
  RoReg8  Reserved14[0x10];
  RwReg   GPIO_ODCR0;         /**< \brief (GPIO Offset: 0x100) Output Driving Capability Register 0 */
  RwReg   GPIO_ODCR0S;        /**< \brief (GPIO Offset: 0x104) Output Driving Capability Register 0 - Set */
  RwReg   GPIO_ODCR0C;        /**< \brief (GPIO Offset: 0x108) Output Driving Capability Register 0 - Clear */
  RwReg   GPIO_ODCR0T;        /**< \brief (GPIO Offset: 0x10C) Output Driving Capability Register 0 - Toggle */
  RwReg   GPIO_ODCR1;         /**< \brief (GPIO Offset: 0x110) Output Driving Capability Register 1 */
  RwReg   GPIO_ODCR1S;        /**< \brief (GPIO Offset: 0x114) Output Driving Capability Register 1 - Set */
  RwReg   GPIO_ODCR1C;        /**< \brief (GPIO Offset: 0x118) Output Driving Capability Register 1 - Clear */
  RwReg   GPIO_ODCR1T;        /**< \brief (GPIO Offset: 0x11C) Output Driving Capability Register 1 - Toggle */
  RoReg8  Reserved15[0x10];
  RwReg   GPIO_OSRR0;         /**< \brief (GPIO Offset: 0x130) Output Slew Rate Register 0 */
  RwReg   GPIO_OSRR0S;        /**< \brief (GPIO Offset: 0x134) Output Slew Rate Register 0 - Set */
  RwReg   GPIO_OSRR0C;        /**< \brief (GPIO Offset: 0x138) Output Slew Rate Register 0 - Clear */
  RwReg   GPIO_OSRR0T;        /**< \brief (GPIO Offset: 0x13C) Output Slew Rate Register 0 - Toggle */
  RoReg8  Reserved16[0x20];
  RwReg   GPIO_STER;          /**< \brief (GPIO Offset: 0x160) Schmitt Trigger Enable Register */
  RwReg   GPIO_STERS;         /**< \brief (GPIO Offset: 0x164) Schmitt Trigger Enable Register - Set */
  RwReg   GPIO_STERC;         /**< \brief (GPIO Offset: 0x168) Schmitt Trigger Enable Register - Clear */
  RwReg   GPIO_STERT;         /**< \brief (GPIO Offset: 0x16C) Schmitt Trigger Enable Register - Toggle */
  RoReg8  Reserved17[0x10];
  RwReg   GPIO_EVER;          /**< \brief (GPIO Offset: 0x180) Event Enable Register */
  WoReg   GPIO_EVERS;         /**< \brief (GPIO Offset: 0x184) Event Enable Register - Set */
  WoReg   GPIO_EVERC;         /**< \brief (GPIO Offset: 0x188) Event Enable Register - Clear */
  WoReg   GPIO_EVERT;         /**< \brief (GPIO Offset: 0x18C) Event Enable Register - Toggle */
  RoReg8  Reserved18[0x10];
  RwReg   GPIO_LOCK;          /**< \brief (GPIO Offset: 0x1A0) Lock Register */
  WoReg   GPIO_LOCKS;         /**< \brief (GPIO Offset: 0x1A4) Lock Register - Set */
  WoReg   GPIO_LOCKC;         /**< \brief (GPIO Offset: 0x1A8) Lock Register - Clear */
  WoReg   GPIO_LOCKT;         /**< \brief (GPIO Offset: 0x1AC) Lock Register - Toggle */
  RoReg8  Reserved19[0x30];
  WoReg   GPIO_UNLOCK;        /**< \brief (GPIO Offset: 0x1E0) Unlock Register */
  RwReg   GPIO_ASR;           /**< \brief (GPIO Offset: 0x1E4) Access Status Register */
  RoReg8  Reserved20[0x10];
  RoReg   GPIO_PARAMETER;     /**< \brief (GPIO Offset: 0x1F8) Parameter Register */
  RoReg   GPIO_VERSION;       /**< \brief (GPIO Offset: 0x1FC) Version Register */
 } reg;
} GpioPort;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief GPIO hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
       GpioPort                  Port[3];     /**< \brief Offset: 0x000 GpioPort groups [PORT_LENGTH] */
 } bf;
 struct {
  GpioPort GPIO_PORT[3];       /**< \brief (GPIO Offset: 0x000) GpioPort groups [PORT_LENGTH] */
 } reg;
} Gpio;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_GPIO_COMPONENT_ */
