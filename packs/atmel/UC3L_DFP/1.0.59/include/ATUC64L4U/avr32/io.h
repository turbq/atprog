/*This file is prepared for Doxygen automatic documentation generation.*/
/*! \file *********************************************************************
 *
 * \brief Standard part header file.
 *
 * This file includes the appropriate part header file according to the defined
 * MCU.
 *
 * - Compiler:           IAR EWAVR32 and GNU GCC for AVR32
 * - Supported devices:  All AVR32 devices can be used.
 * - AppNote:
 *
 * \author               Atmel Corporation: http://www.atmel.com
 *                       Support email: avr32@atmel.com
 *
 ******************************************************************************/

/* Copyright (c) 2016 Atmel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. The name of ATMEL may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY AND
 * SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _AVR32_IO_H_
#define _AVR32_IO_H_


#if (defined (__AVR32_UC3L0128__) || defined (__AT32UC3L0128__))
#  include <avr32/uc3l0128.h>
#elif (defined (__AVR32_UC3L016__) || defined (__AT32UC3L016__))
#  include <avr32/uc3l016.h>
#elif (defined (__AVR32_UC3L0256__) || defined (__AT32UC3L0256__))
#  include <avr32/uc3l0256.h>
#elif (defined (__AVR32_UC3L032__) || defined (__AT32UC3L032__))
#  include <avr32/uc3l032.h>
#elif (defined (__AVR32_UC3L064__) || defined (__AT32UC3L064__))
#  include <avr32/uc3l064.h>
#elif (defined (__AVR32_UC128L3U__) || defined (__ATUC128L3U__))
#  include <avr32/uc128l3u.h>
#elif (defined (__AVR32_UC128L4U__) || defined (__ATUC128L4U__))
#  include <avr32/uc128l4u.h>
#elif (defined (__AVR32_UC256L3U__) || defined (__ATUC256L3U__))
#  include <avr32/uc256l3u.h>
#elif (defined (__AVR32_UC256L4U__) || defined (__ATUC256L4U__))
#  include <avr32/uc256l4u.h>
#elif (defined (__AVR32_UC64L3U__) || defined (__ATUC64L3U__))
#  include <avr32/uc64l3u.h>
#elif (defined (__AVR32_UC64L4U__) || defined (__ATUC64L4U__))
#  include <avr32/uc64l4u.h>
#else
#  error No known AVR32 part defined
#endif

#endif /* _AVR32_IO_H_ */ 
