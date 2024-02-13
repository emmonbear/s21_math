/**
 * @file s21_tests.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file collecting all declarations
 * @version 1.0
 * @date 2024-01-22
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_H_
#define S21_TESTS_H_

#define ALL_TESTS
#ifdef ALL_TESTS

// #define ABS_TEST
// #define FABS_TEST
// #define FLOOR_TEST
// #define CEIL_TEST
// #define EXP_TEST
// #define FMOD_TEST
// #define LOG_TEST
// #define SQRT_TEST
#define POW_TEST
// #define SIN_TEST
// #define COS_TEST
// #define TAN_TEST
// #define ASIN_TEST
// #define ACOS_TEST
// #define ATAN_TEST

#endif  // ALL_TESTS

#include "test_modules/test_include/s21_test_abs.h"
#include "test_modules/test_include/s21_test_acos.h"
#include "test_modules/test_include/s21_test_asin.h"
#include "test_modules/test_include/s21_test_atan.h"
#include "test_modules/test_include/s21_test_ceil.h"
#include "test_modules/test_include/s21_test_cos.h"
#include "test_modules/test_include/s21_test_exp.h"
#include "test_modules/test_include/s21_test_fabs.h"
#include "test_modules/test_include/s21_test_floor.h"
#include "test_modules/test_include/s21_test_fmod.h"
#include "test_modules/test_include/s21_test_log.h"
#include "test_modules/test_include/s21_test_pow.h"
#include "test_modules/test_include/s21_test_sin.h"
#include "test_modules/test_include/s21_test_sqrt.h"
#include "test_modules/test_include/s21_test_tan.h"

#endif  // S21_TESTS_H_