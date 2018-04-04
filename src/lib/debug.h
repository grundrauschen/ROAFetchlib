/*
 * This file is part of ROAFetchlib
 *
 * Author: Samir Al-Sheikh (Freie Universitaet, Berlin)
 *         s.al-sheikh@fu-berlin.de
 *
 * MIT License
 *
 * Copyright (c) 2017 The ROAFetchlib authors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __DEBUG_H
#define __DEBUG_H

#include "config.h"

#ifdef RPKI_DEBUG
#define DEBUG_TEST 1
#else
#define DEBUG_TEST 0
#endif

// Prints if an unexpected error occurs and the debug mode is enabled
#define debug_err_print(fmt, ...) \
        do { fprintf(stderr, "%s:%d, %s(), " fmt, __FILE__, \
                                __LINE__, __func__, __VA_ARGS__); } while (0)

// Prints debug information if debug mode is enabled
#define debug_print(fmt, ...) \
            do { if (DEBUG_TEST) fprintf(stderr, fmt, __VA_ARGS__); } while (0)

// Prints an error or info message regardless of the debug mode
#define std_print(fmt, ...) \
            do { fprintf(stderr, fmt, __VA_ARGS__); } while (0)

#endif /* __DEBUG_H */
