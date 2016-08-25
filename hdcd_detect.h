/*
 *  Copyright (C) 2016, Burt P.,
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *    2. Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *    3. The names of its contributors may not be used to endorse or promote
 *       products derived from this software without specific prior written
 *       permission.
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _HDCD_DETECT_H_
#define _HDCD_DETECT_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HDCD_NONE            = 0,  /**< HDCD packets do not (yet) appear  */
    HDCD_NO_EFFECT       = 1,  /**< HDCD packets appear, but all control codes are NOP */
    HDCD_EFFECTUAL       = 2,  /**< HDCD packets appear, and change the output in some way */
} hdcd_detection_t;

typedef enum {
    HDCD_PE_NEVER        = 0, /**< All valid packets have PE set to off */
    HDCD_PE_INTERMITTENT = 1, /**< Some valid packets have PE set to on */
    HDCD_PE_PERMANENT    = 2, /**< All valid packets have PE set to on  */
} hdcd_pe_t;

typedef enum {
    HDCD_PVER_NONE       = 0, /**< No packets discovered */
    HDCD_PVER_A          = 1, /**< Packets of type A (8-bit control) discovered */
    HDCD_PVER_B          = 2, /**< Packets of type B (8-bit control, 8-bit XOR) discovered */
    HDCD_PVER_MIX        = 3, /**< Packets of type A and B discovered, most likely an error? */
} hdcd_pf_t;

#ifdef __cplusplus
}
#endif

#endif