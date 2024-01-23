/**
 * @file common.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Common header file for all modules
 * @version 1.0
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MAIN_COMMON_H_
#define MAIN_COMMON_H_

#include "ieee754.h"

#define S21_NAN 0.0 / 0.0                   ///< Value is Not a Number (NaN).
#define S21_INF 1.0 / 0.0                   ///< Value is infinity (inf).
#define GET_SHIFT(x) (sizeof(x) * 8 - 1);   ///< Returns the number of bits of the specified type depending on the processor architecture.

#endif // MAIN_COMMON_H_