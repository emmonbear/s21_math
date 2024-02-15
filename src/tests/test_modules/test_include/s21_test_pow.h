/**
 * @file s21_test_pow.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_pow test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_POW_H_
#define S21_TESTS_POW_H_

#include "./common.h"

void s21_test_pow(double base, double exp);

Suite *s21_pow_first_case(void);
Suite *s21_pow_second_case(void);
Suite *s21_pow_third_case(void);
Suite *s21_pow_fourth_case(void);
Suite *s21_pow_fifth_case(void);
Suite *s21_pow_sixth_case(void);
Suite *s21_pow_seventh_case(void);
Suite *s21_pow_eighth_case(void);
Suite *s21_pow_ninth_case(void);
Suite *s21_pow_tenth_case(void);
Suite *s21_pow_edge_case(void);

#endif  // S21_TESTS_POW_H_
