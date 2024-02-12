/**
 * @file s21_abs.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Implementation of function abs from math.h library
 * @version 1.0
 * @date 2024-01-22
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_abs.h"

/**
 * @brief Computes absolute value of an integer value.
 *
 * @param[in] x number whose absolute value must be determined.
 * @return int - result of calculation.
 */
int s21_abs(int x) {
  int shift = GET_SHIFT(x);

  if (x >> shift) {
    x = ~x + 1;
  }

  return x;
}