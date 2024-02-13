/**
 * @file s21_fmod.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Implementation of function fmod from math.h library
 * @version 1.0
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_fmod.h"

/**
 * @brief Returns the nearest integer not less than the given value.
 *
 * @param[in] x number whose value needs to be rounded.
 * @return long double - result of calculation.
 */
long double s21_fmod(double x, double y) {
  long double result = x;
  double_int bits_x = {{x}};
  double_int bits_y = {{y}};

  // int exponent_x = ((bits_x.ulong & EXP_MASK) >> MANTISS_SIZE) - EXP_SHIFT;
  // int exponent_y = ((bits_y.ulong & EXP_MASK) >> MANTISS_SIZE) - EXP_SHIFT;
  // int sign_x = bits_x.dbl.ieee.negative;

  if (bits_y.ulong << 1 == 0 || BITS_NAN(bits_y) || BITS_INF(bits_x)) {
    return (x * y) / (x * y);
  }

  return result;
}