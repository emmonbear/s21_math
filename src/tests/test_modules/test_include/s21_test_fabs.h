/**
 * @file s21_test_fabs.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_fabs test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_FABS_H_
#define S21_TESTS_FABS_H_

#include "./../common.h"

void s21_test_fabs(double x);

Suite *s21_fabs_first_case(void);
Suite *s21_fabs_second_case(void);
Suite *s21_fabs_third_case(void);
Suite *s21_fabs_fourth_case(void);
Suite *s21_fabs_fifth_case(void);
Suite *s21_fabs_sixth_case(void);
Suite *s21_fabs_seventh_case(void);
Suite *s21_fabs_eighth_case(void);
Suite *s21_fabs_ninth_case(void);
Suite *s21_fabs_tenth_case(void);

Suite *s21_fabs_edge_case(void);

#endif  // S21_TESTS_FABS_H_
