/**
 * @file s21_test_sqrt.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_sqrt test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_SQRT_H_
#define S21_TESTS_SQRT_H_

#include "./common.h"

void s21_test_sqrt(double value);

Suite *s21_sqrt_first_case(void);
Suite *s21_sqrt_second_case(void);
Suite *s21_sqrt_third_case(void);
Suite *s21_sqrt_fourth_case(void);
Suite *s21_sqrt_fifth_case(void);
Suite *s21_sqrt_sixth_case(void);
Suite *s21_sqrt_seventh_case(void);
Suite *s21_sqrt_eighth_case(void);
Suite *s21_sqrt_ninth_case(void);
Suite *s21_sqrt_tenth_case(void);
Suite *s21_sqrt_edge_case(void);

#endif  // S21_TESTS_SQRT_H_
