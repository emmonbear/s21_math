/**
 * @file s21_asin.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function asin from math.h library
 * @version 1.0
 * @date 2024-02-12
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_asin.h"

/**
 * @brief Calculates the arc sine of a floating point number.
 *
 * @param[in] x number whose arc sine needs to be calculated.
 * @return long double - result of calculation.
 */
long double s21_asin(double x) {
  long double result = x;
  double_int bits = {x};

  if (BITS_INF(bits) || BITS_NAN(bits) || s21_fabs(x) > 1.0) {
    result = S21_NAN;
  } else if (s21_fabs(x) == 1.0) {
    result = PI / 2.0 * x;
  } else {
    long double member = x;
    long double numerator = 1.0;
    long double denumerator = 2.0;
    long double factor = 1.0;

    for (uint32_t cnt = 3; s21_fabs(member) > PRECISION;
         cnt += 2, numerator += 2.0, denumerator += 2.0) {
      factor *= numerator / denumerator;
      member = factor * (fast_pow(x, cnt) / cnt);
      result += member;

      if (numerator > 48000000.0) {
        member = 0.0;
      }
    }
  }
  return result;
}