/**
 * @file s21_pow.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Implementation of function pow from math.h library
 * @version 1.0
 * @date 2024-01-26
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_pow.h"

/**
 * @brief Raises a number to a given power.
 *
 * @param[in] base number whose absolute value must be determined.
 * @param[in] exp the degree to which it is raised base.
 * @return long double - result of calculation.
 */
long double s21_pow(double base, double exp) {
  double_int base_b = {base};
  double_int exp_b = {exp};
  long double result = 0;

  if (!base) {
    result = (!exp) ? 1.0 : base;
  } else if (!exp) {
    result = 1.0;
  } else if (BITS_NAN(base_b) || BITS_NAN(exp_b)) {
    result = S21_NAN;
  } else if (base_b.ieee.sign && s21_ceil(s21_fabs(exp)) != s21_fabs(exp)) {
    result = S21_NAN;
  } else if (BITS_INF(base_b) && BITS_INF(exp_b)) {
    result = S21_INF;
  } else if (BITS_INF(exp_b)) {
    result = S21_INF;
  } else {
    if (((s21_ceil(exp) == exp)) && !exp_b.ieee.sign) {
      result = fast_pow(base, exp);
    } else {
      result = s21_exp(exp * s21_log(s21_fabs(base)));

      if ((uint64_t)(exp) % 2 != 0 && base_b.ieee.sign) {
        result *= -1.0;
      }
    }
  }

  return result;
}