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

#include <stdint.h>

#define PI 3.14159265358979323846     ///< Exact value of Pi.
#define EULER 2.71828182845904523536  ///< Exact value of Euler number.
#define NEGATIVE_ZERO -0.0            ///< Zero whose sign bit is set.
#define PRECISION 1.0e-17  ///< Limit accuracy of member Taylor series.
#define S21_NAN 0.0 / 0.0  ///< Value is Not a Number (NaN).
#define S21_INF 1.0 / 0.0  ///< Value is infinity (inf).

#define POS_INF_MASK 0x7FF0000000000000  ///< Mask checks double for +inf.
#define NEG_INF_MASK 0xFFF0000000000000  ///< Mask checks double for -inf.
#define OVERFLOW_MASK 0x10000000000000   ///< Number overflow check mask.
#define MANTISS_MASK 0xfffffffffffff     ///< Mask for mantissa bits for double.
#define NAN_MASK 0xFFF8000000000000      ///< Mask checks double for NaN.
#define EXP_MASK 0x7fffffffffffffff      ///< Mask for exponent bits for double.
#define INF_BITS 0x7FF                   ///< Mask checks exponent for inf.

#define BITS_NAN(x) (x.ulong == NAN_MASK)          ///< Check value is NaN
#define BITS_INF(x) (x.ieee.exponent == INF_BITS)  ///< Check value is inf.
#define BITS_NEG_INF(x) (x.ulong == NEG_INF_MASK)  ///< Check value is -inf.
#define BITS_POS_INF(x) (x.ulong == POS_INF_MASK)  ///< Check value is +inf.

/**
 * @brief Union structure assigned to work with double bits.
 */
typedef union {
  double dbl;      ///< Union containing double bit fields.
  uint64_t ulong;  ///< Int having same bit composition as double.
  ///@brief Struct contains double fields.
  struct ieee754 {
    unsigned int mantissa1 : 32;  ///< Least significant bits of the mantissa.
    unsigned int mantissa0 : 20;  ///< Significant bits of the mantissa.
    unsigned int exponent : 11;   ///< Exponent bits.
    unsigned int sign : 1;        ///< Sign bit.
  } ieee;
} double_int;

/**
 * @brief Constants for working with bits.
 */
enum bit_constants {
  EXP_PRECISION = -27,  ///< Smallest input value processed for s21_exp.
  BIT_NOT_SET = 0,      ///< Signals that bits are not set.
  BIT_SET = 1,          ///< Signals that bits are set.
  INT_SHIFT = 31,       ///< Number of max shift in int.
  DOUBLE_SHIFT = 63,    ///< Number of max shift in double.
  EXP_SHIFT = 1023,     ///< Shift exponent for double.
  MANTISS_SIZE = 52,    ///< Mantissa size for double.
  EXP_SIZE = 12,        ///< Exponent size for double.
};

long double factorial(long double value, unsigned int n);
long double fast_pow(long double base, unsigned int exp);

#endif  // MAIN_COMMON_H_