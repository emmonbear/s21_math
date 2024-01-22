/**
 * @file s21_test_fabs.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_fabs
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_fabs.h"

START_TEST(s21_fabs_1)
{

}

START_TEST(s21_fabs_2)
{

}

START_TEST(s21_fabs_3)
{

}

START_TEST(s21_fabs_4)
{

}

START_TEST(s21_fabs_5)
{

}

START_TEST(s21_fabs_6)
{

}

START_TEST(s21_fabs_7)
{

}

START_TEST(s21_fabs_8)
{

}

START_TEST(s21_fabs_9)
{

}

START_TEST(s21_fabs_10)
{

}

Suite *s21_fabs_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_fabs first case)");

    TCase *tc_fabs = tcase_create("test_fabs");
    tcase_add_test(tc_fabs, s21_fabs_1);
    tcase_add_test(tc_fabs, s21_fabs_2);
    tcase_add_test(tc_fabs, s21_fabs_3);
    tcase_add_test(tc_fabs, s21_fabs_4);
    tcase_add_test(tc_fabs, s21_fabs_5);
    tcase_add_test(tc_fabs, s21_fabs_6);
    tcase_add_test(tc_fabs, s21_fabs_7);
    tcase_add_test(tc_fabs, s21_fabs_8);
    tcase_add_test(tc_fabs, s21_fabs_9);
    tcase_add_test(tc_fabs, s21_fabs_10);
    suite_add_tcase(math, tc_fabs);

    return math;
}
