/**
 * @file s21_test_sin.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_sin test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_SIN_H_
#define S21_TESTS_SIN_H_

#include "./common.h"

void s21_test_sin(double value);

Suite *s21_sin_first_case(void);
Suite *s21_sin_second_case(void);
Suite *s21_sin_third_case(void);
Suite *s21_sin_fourth_case(void);
Suite *s21_sin_fifth_case(void);
Suite *s21_sin_sixth_case(void);
Suite *s21_sin_seventh_case(void);
Suite *s21_sin_eighth_case(void);
Suite *s21_sin_ninth_case(void);
Suite *s21_sin_tenth_case(void);
Suite *s21_sin_edge_case(void);

#endif  // S21_TESTS_SIN_H_
