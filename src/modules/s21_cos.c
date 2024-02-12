/**
 * @file s21_cos.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function cos from math.h library
 * @version 1.0
 * @date 2024-02-12
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_cos.h"

#include <math.h>

/**
 * @brief Calculates the cosine of a floating point number.
 *
 * @param[in] x number whose cosine needs to be calculated.
 * @return long double - result of calculation.
 */
long double s21_cos(double x) {
  long double result = 1;
  double_int num = {{x}};

  if (BITS_INF(num) || BITS_NAN(num)) {
    result = S21_NAN;
  } else {
    num.dbl.d = fmod(num.dbl.d, S21_PI);

    long double member = num.dbl.d;
    int sign = -1;

    for (int cnt = 2; s21_fabs(member) > PRECISION; cnt += 2, sign *= -1) {
      member = factorial((fast_pow(num.dbl.d, cnt)), cnt) * sign;
      result += member;
    }
  }

  return result;
}
