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

#define S21_NAN 0.0 / 0.0  ///< Value is Not a Number (NaN).
#define S21_INF 1.0 / 0.0  ///< Value is infinity (inf).

#define S21_INF_POS 1.0 / 0.0   ///< Value is infinity (inf).
#define S21_INF_NEG -1.0 / 0.0  ///< Value is infinity (-inf).

#define S21_IS_NAN(x) (x != x)  ///< Check value is Not a Number (NaN).
#define S21_IS_INF(x) (x == S21_INF || x == -S21_INF)  ///< Check value for inf.
#define GET_SHIFT(x) (sizeof(x) * 8 - 1);  ///< Number of bits of the any type.

#define ZERO 0.0                         ///< Zero value.
#define NEGATIVE_ZERO -0.0               ///< Zero whose sign bit is set.
#define EXP_MASK 0x7fffffffffffffff      ///< Mask for exponent bits for double.
#define MANTISS_MASK 0xfffffffffffff     ///< Mask for mantissa bits for double.
#define OVERFLOW_MASK 0x10000000000000   ///< Number overflow check mask.
#define INF_BITS 0x7FF                   ///< Mask checks exponent for inf.
#define NAN_MASK 0xFFF8000000000000      ///< Mask checks double for NaN.
#define NEG_INF_MASK 0xFFF0000000000000  ///< Mask checks double for -inf.
#define POS_INF_MASK 0x7FF0000000000000  ///< Mask checks double for +inf.

#define BITS_NAN(x) (x.ulong == NAN_MASK)              ///< Check value is NaN
#define BITS_INF(x) (x.dbl.ieee.exponent == INF_BITS)  ///< Check value is inf.
#define BITS_NEG_INF(x) (x.ulong == NEG_INF_MASK)      ///< Check value is -inf.
#define BITS_POS_INF(x) (x.ulong == POS_INF_MASK)      ///< Check value is +inf.

#define TAYLOR_PRECISION 1.0e-17  ///< Limit accuracy of member Taylor series.

/**
 * @brief Union structure assigned to work with double bits.
 */
typedef union {
  union ieee754_double dbl;  ///< Union containing double bit fields.
  uint64_t ulong;            ///< Int having same bit composition as double.
} double_int;

/**
 * @brief Constants for working with bits.
 */
enum bit_constants {
  BIT_NOT_SET = 0,    ///< Signals that bits are not set.
  BIT_SET = 1,        ///< Signals that bits are set.
  DOUBLE_SHIFT = 63,  ///< Number of bits in double.
  EXP_SHIFT = 1023,   ///< Shift exponent for double.
  MANTISS_SIZE = 52,  ///< Mantissa size for double.
};

long double factorial(long double value, unsigned int n);
long double fast_pow(long double base, unsigned int exp);

#endif  // MAIN_COMMON_H_