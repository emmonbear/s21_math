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

#define S21_NAN 0.0 / 0.0                                   ///< Value is Not a Number (NaN).
#define S21_INF 1.0 / 0.0                                   ///< Value is infinity (inf).
#define S21_IS_NAN(x) (x != x)                              ///< Check value is Not a Number (NaN).
#define S21_IS_INF(x) (x == S21_INF || x == -S21_INF)       ///< Check value is infinity (inf).
#define GET_SHIFT(x) (sizeof(x) * 8 - 1);                   ///< Returns the number of bits of the specified type depending on the processor architecture.

#define ZERO 0.0                                ///< Zero value.
#define NEGATIVE_ZERO -0.0                      ///< Zero whose sign bit is set.
#define EXP_MASK 0x7fffffffffffffff             ///< Mask for exponent bits for double.
#define MANTISS_MASK 0xfffffffffffff            ///< Mask for mantissa bits for double.
#define OVERFLOW_MASK 0x10000000000000          ///< Number overflow check mask.
#define INF_BITS 0x7FF                          ///< Mask to check infinity in exponent.
#define NAN_MASK 0xFFF8000000000000             ///< Mask to check double for NaN.

#define TAYLOR_PRECISION 1.0e-100               ///< Limiting accuracy of the constituent Taylor series.

/**
 * @brief Union structure assigned to work with double bits.
 */
typedef union {
    union ieee754_double dbl;   ///< Union containing the double in question with fields.
    uint64_t ulong;             ///< A commensurate int having the same bit composition as the double.
} double_int;

/**
 * @brief Constants for working with bits.
 */
enum bit_constants {
    BIT_NOT_SET  =    0,        ///< Signals that bits are not set.
    BIT_SET      =    1,        ///< Signals that bits are set.
    DOUBLE_SHIFT =   63,        ///< Number of bits in double.
    EXP_SHIFT    = 1023,        ///< Shift exponent for double.
    MANTISS_SIZE =   52,        ///< Mantissa size for double.
};

long double factorial(long double value, unsigned int n);
long double fast_pow(long double base, unsigned int exp);

#endif // MAIN_COMMON_H_