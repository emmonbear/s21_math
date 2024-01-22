/**
 * @file s21_test_abs.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_abs.
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_abs.h"

START_TEST(s21_abs_1)
{
    int value = 0;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_2)
{

}

START_TEST(s21_abs_3)
{

}

START_TEST(s21_abs_4)
{

}

START_TEST(s21_abs_5)
{

}

START_TEST(s21_abs_6)
{

}

START_TEST(s21_abs_7)
{

}

START_TEST(s21_abs_8)
{

}

START_TEST(s21_abs_9)
{

}

START_TEST(s21_abs_10)
{

}

Suite *s21_abs_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_abs first case)");

    TCase *tc_abs = tcase_create("test_abs");
    tcase_add_test(tc_abs, s21_abs_1);
    tcase_add_test(tc_abs, s21_abs_2);
    tcase_add_test(tc_abs, s21_abs_3);
    tcase_add_test(tc_abs, s21_abs_4);
    tcase_add_test(tc_abs, s21_abs_5);
    tcase_add_test(tc_abs, s21_abs_6);
    tcase_add_test(tc_abs, s21_abs_7);
    tcase_add_test(tc_abs, s21_abs_8);
    tcase_add_test(tc_abs, s21_abs_9);
    tcase_add_test(tc_abs, s21_abs_10);
    suite_add_tcase(math, tc_abs);

    return math;
}
