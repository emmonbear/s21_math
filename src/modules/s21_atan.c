/**
 * @file s21_atan.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Implementation of function atan from math.h library
 * @version 1.0
 * @date 2024-02-13
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_atan.h"

static long double taylor(double x);

/**
 * @brief Calculates the arc tangent of a floating point number.
 *
 * @param[in] x number whose arc tangent needs to be calculated.
 * @return long double - result of calculation.
 */
long double s21_atan(double x) {
  long double result = 0.0;

  if (x != x) {
    result = S21_NAN;
  } else if (s21_fabs(x) < 1.0) {
    result = taylor(x);
  } else if (s21_fabs(x) == 1.0) {
    result = PI / 4.0 * x;
  } else if (x > 1.0) {
    result = PI / 2.0 - taylor(1.0 / x);
  } else if (x < -1.0) {
    result = -PI / 2.0 - taylor(1.0 / x);
  }

  return result;
}

/**
 * @brief Calculates the approximate value of the arctangent by summing the
 * Taylor series.
 *
 * @param x number whose arc tangent needs to be calculated.
 * @return long double - result of calculation.
 */
static long double taylor(double x) {
  long double member = x;
  long double result = x;

  for (uint32_t cnt = 1; s21_fabs(member) > PRECISION; cnt++) {
    member *= -x * x * (2.0 * cnt - 1.0) / (2.0 * cnt + 1.0);
    result += member;
  }

  return result;
}