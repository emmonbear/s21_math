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

#include <ieee754.h>
#include <stdint.h>

#define S21_NAN 0.0 / 0.0                   ///< Value is Not a Number (NaN).
#define S21_INF 1.0 / 0.0                   ///< Value is infinity (inf).
#define S21_IS_NAN(x) (x != x)              ///< Check value is Not a Number (NaN)
#define S21_IS_INF(x) (x == S21_INF)        ///< Check value is infinity (inf)
#define GET_SHIFT(x) (sizeof(x) * 8 - 1);   ///< Returns the number of bits of the specified type depending on the processor architecture.

#define NEGATIVE_ZERO -0.0
#define ZERO 0.0
#define EXP_MASK 0x7fffffffffffffff
#define MANTISS_MASK 0xfffffffffffff
#define OVERFLOW_MASK 0x10000000000000

union double_int {
    double dbl;
    uint64_t ulong;
};

enum bit_constants {
    BIT_NOT_SET  =    0,
    BIT_SET      =    1,
    DOUBLE_SHIFT =   63,
    EXP_SHIFT    = 1023,
    MANTISS_SIZE =   52,
};

#endif // MAIN_COMMON_H_