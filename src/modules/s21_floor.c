/**
 * @file s21_floor.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Implementation of function floor from math.h library
 * @version 1.0
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_floor.h"

/**
 * @brief Returns the nearest integer not greater than the given value.
 *
 * @param[in] x number whose value needs to be rounded.
 * @return long double - result of calculation.
 */
long double s21_floor(double x) {
  long double result = 0;
  double_int bits = {{x}};

  int64_t sign = bits.ulong >> DOUBLE_SHIFT;
  int64_t exponent = ((bits.ulong & EXP_MASK) >> MANTISS_SIZE) - EXP_SHIFT;
  uint64_t mantissa = bits.ulong & MANTISS_MASK;

  if (exponent < 0) {
    if (x > 0.0) {
      bits.dbl.d = 0.0;
    } else {
      bits.dbl.d = -1.0;
    }
  } else {
    uint64_t mask = MANTISS_MASK >> exponent;

    if ((mantissa & mask) == BIT_NOT_SET) {
      bits.dbl.d = x;
    } else {
      if (sign == BIT_SET) {
        mantissa += (uint64_t)1 << (MANTISS_SIZE - exponent);
        if (mantissa & OVERFLOW_MASK) {
          mantissa = 0;
          exponent++;
        }
      }
      mantissa &= ~mask;
      if (!BITS_NAN(bits)) {
        bits.ulong = (sign << DOUBLE_SHIFT);
        bits.ulong |= ((exponent + EXP_SHIFT) << MANTISS_SIZE) | mantissa;
      }
    }
  }

  result = bits.dbl.d;

  return result;
}
