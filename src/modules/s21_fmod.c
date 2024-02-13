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

static void normalize_denormal(uint64_t *exp_x, uint64_t *num);
static int compare_scale(uint64_t *exp_x, uint64_t *exp_y, uint64_t *x_long,
                         uint64_t *y_long);

/**
 * @brief Remainder of the floating-point division operation.
 *
 * @param[in] x number whose remainder needs to be found.
 * @param[in] y number from which you need to find the remainder.
 * @return long double - result of calculation.
 */
long double s21_fmod(double x, double y) {
  long double result = 0.0;
  double_int bits_x = {{x}};
  double_int bits_y = {{y}};

  uint64_t sign = bits_x.dbl.ieee.negative;
  uint64_t exp_x = (bits_x.ulong >> MANTISS_SIZE) & INF_BITS;
  uint64_t exp_y = (bits_y.ulong >> MANTISS_SIZE) & INF_BITS;
  uint64_t x_long = bits_x.ulong;

  if (bits_y.ulong << 1 == 0 || BITS_NAN(bits_y) || BITS_INF(bits_x)) {
    result = (x * y) / (x * y);
  } else if (x_long << 1 <= bits_y.ulong << 1) {
    if (x_long << 1 == bits_y.ulong << 1) {
      result = 0;
    } else {
      result = x;
    }
  } else {
    normalize_denormal(&exp_x, &x_long);
    normalize_denormal(&exp_y, &bits_y.ulong);

    uint8_t edge = compare_scale(&exp_x, &exp_y, &x_long, &bits_y.ulong);

    if (edge) {
      result = 0;
    } else {
      for (; (x_long >> MANTISS_SIZE) == 0; x_long <<= 1) {
        exp_x--;
      }

      if (exp_x > 0) {
        x_long -= (uint64_t)(1) << MANTISS_SIZE;
        x_long |= exp_x << MANTISS_SIZE;
      } else {
        x_long >>= -exp_x + 1;
      }

      x_long |= sign << DOUBLE_SHIFT;
      bits_x.ulong = x_long;

      result = bits_x.dbl.d;
    }
  }

  return result;
}

static int compare_scale(uint64_t *exp_x, uint64_t *exp_y, uint64_t *x_long,
                         uint64_t *y_long) {
  uint8_t edge = 0;

  uint64_t iter = 0;
  for (; *exp_x > *exp_y; (*exp_x)--) {
    iter = *x_long - *y_long;

    if (iter >> DOUBLE_SHIFT == 0) {
      if (iter == 0) {
        edge = 1;
      } else {
        *x_long = iter;
      }
    }

    *x_long <<= 1;
  }

  iter = *x_long - *y_long;
  if (iter >> DOUBLE_SHIFT == 0) {
    if (iter == 0) {
      edge = 1;
    } else {
      *x_long = iter;
    }
  }

  return edge;
}

static void normalize_denormal(uint64_t *exp_x, uint64_t *num) {
  if (!*exp_x) {
    for (uint64_t i = *num << EXP_SIZE; i >> DOUBLE_SHIFT == 0; i <<= 1) {
      exp_x--;
    }

    *num <<= -*exp_x + 1;
  } else {
    *num &= (uint64_t)(-1) >> EXP_SIZE;
    *num |= (uint64_t)(1) << MANTISS_SIZE;
  }
}