/**
 * @file s21_exp.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function exp from math.h library
 * @version 1.0
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_exp.h"

/**
 * @brief Returns e raised to the given power.
 *
 * @param[in] x Euler exponent.
 * @return long double - result of calculation.
 */
long double s21_exp(double x) {
  long double result = 1.0;
  double_int bits = {{x}};

  if (bits.ulong == NAN_MASK) {
    result = S21_NAN;
  } else if (bits.dbl.ieee.exponent == INF_BITS) {
    if (bits.dbl.ieee.negative) {
      result = 0.0;
    } else {
      result = x;
    }
  } else if (x < -27.0) {
    result = 0.0;
  } else {
    long double member = x;

    for (int32_t cnt = 1; s21_fabs(member) > PRECISION; cnt++) {
      member = factorial(fast_pow(x, cnt), cnt);
      result += member;
    }
  }

  return result;
}