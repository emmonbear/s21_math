/**
 * @file s21_log.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function log from math.h library
 * @version 1.0
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_log.h"

// #define s21_EPS 1e-100

/**
 * @brief Computes natural logarithm.
 *
 * @details The function calculates the natural logarithm using Taylor series:
 * \f[
 *      ln(x) = 2 \left( \frac{{x - 1}}{{x + 1}} + \frac{1}{3} \left(\frac{{x -
 * 1}}{{x + 1}}\right)^3 + \frac{1}{5} \left(\frac{{x - 1}}{{x + 1}}\right)^5 +
 * \ldots \right) \f]
 * @param[in] x a value used in the calculation of the logarithm of x to the
 * base of e.
 * @return long double - result of calculation.
 */
long double s21_log(double x) {
  long double result = 0.0;
  double_int bits = {{x}};

  if (x == 0.0) {
    result = -S21_INF;
  } else if (x < 0.0 || BITS_NAN(bits) || BITS_NEG_INF(bits)) {
    result = S21_NAN;
  } else if (BITS_POS_INF(bits)) {
    result = S21_INF;
  } else {
    long double current = x;
    long double approach = 1;

    while (current < 1.0 / EULER || current > EULER || s21_fabs(approach) > PRECISION) {
      if (current > EULER) {
        current /= EULER;
        result += approach;
      } else if (current < 1.0 / EULER) {
        current *= EULER;
        result -= approach;
      } else {
        current *= current;
        approach /= 2.0;
      }
    }
  }

  return result;
}
