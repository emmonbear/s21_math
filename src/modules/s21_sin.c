/**
 * @file s21_sin.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function sin from math.h library
 * @version 1.0
 * @date 2024-02-12
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_sin.h"

/**
 * @brief Calculates the sine of a floating point number.
 *
 * @param[in] x number whose sine needs to be calculated.
 * @return long double - result of calculation.
 */
long double s21_sin(double x) {
  long double result = 0.0;
  double_int bits = {{x}};

  if (BITS_INF(bits) || BITS_NAN(bits)) {
    result = S21_NAN;
  } else {
    bits.dbl.d = s21_fmod(bits.dbl.d, 2.0 * PI);

    long double member = bits.dbl.d;
    int8_t sign = 1;

    for (int32_t cnt = 1; s21_fabs(member) > PRECISION; cnt += 2, sign *= -1) {
      member = factorial((fast_pow(bits.dbl.d, cnt)), cnt) * sign;
      result += member;
    }
  }

  return result;
}
