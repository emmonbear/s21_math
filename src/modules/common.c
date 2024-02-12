/**
 * @file common.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Common functions module
 * @version 1.0
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./common.h"

/**
 * @brief Calculate the factorial of n and immediately divides the member of the
 * series.
 *
 * @param[in] value taylor series member.
 * @param[in] n count of iterations.
 * @return long double - result of calculation.
 */
long double factorial(long double value, unsigned int n) {
  for (unsigned int i = 1; i <= n; i++) {
    value /= i;
  }

  return value;
}

/**
 * @brief Algorithm for fast integer base to degree exp.
 *
 * @param[in] base a number raised to the degree exp.
 * @param[in] exp exponent.
 * @return double - result of calculation.
 */
long double fast_pow(long double base, unsigned int exp) {
  long double result = 1.0;
  long double current_pow = base;

  while (exp > 0) {
    if (exp & 1) {
      result *= current_pow;
    }

    current_pow *= current_pow;
    exp /= 2;
  }

  return result;
}
