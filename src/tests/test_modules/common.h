/**
 * @file common.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Common header file for all modules
 * @version 1.0
 * @date 2024-01-22
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef COMMON_H_
#define COMMON_H_

#define DEBUG ///< output of results in case of an error

#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "./../../s21_math.h"
#include "./../../debug/debug.h"

#define COMPARE_ACCURACY \
  1.0e-6  ///< Comparable accuracy of calculation results during testing.

// void s21_test_nan(long double original_func, long double implementation);
// void s21_test_inf(long double original_func, long double implementation);
void s21_test_print(long double original_func, long double implementation);

enum checking_mode {
  DEFAULT   = 0,
  CHECK_INF = 1,
  CHECK_NAN = 2,
};

#endif  // COMMON_H_
