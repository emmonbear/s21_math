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

#define DEBUG  ///< Uncomment to display the bits
// #define DEBUG_ERRORS ///< Uncomment to display bits of unsuccessful tests

#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "./../debug/debug.h"
#include "./../../s21_math.h"

#define COMPARE_ACCURACY \
  1.0e-6  ///< Comparable accuracy of calculation results during testing.

void s21_test_print(long double original_func, long double implementation);

#endif  // COMMON_H_
