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

#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "./../../../s21_math.h"
#include "./../../debug/debug.h"

#define COMPARE_ACCURACY 1.0e-6  ///< Comparable accuracy for tests.

void s21_test_print(long double original_func, long double implementation);

#endif  // COMMON_H_
