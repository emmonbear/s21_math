/**
 * @file s21_test_abs.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_abs
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_abs.h"

START_TEST(s21_abs_1)
{
    int value = 0;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_2)
{
    int value = 1;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_3)
{
    int value = -1;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_4)
{
    int value = 123;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_5)
{
    int value = -123;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_6)
{
    int value = 5231;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_7)
{
    int value = -5231;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_8)
{
    int value = 65622;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_9)
{
    int value = -65622;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_10)
{
    int value = 1765222;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_11)
{
    int value = -1765222;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_12)
{
    int value = 99999999;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_13)
{
    int value = -99999999;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_14)
{
    int value = 895251111;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_15)
{
    int value = -895251111;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_16)
{
    int value = 786256151;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_17)
{
    int value = -786256151;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_18)
{
    int value = -2000000000;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_19)
{
    int value = INT32_MAX;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
}

START_TEST(s21_abs_20)
{
    int value = INT32_MIN;

    int original_func = abs(value);
    int implementation = s21_abs(value);

    ck_assert_int_eq(original_func, implementation);
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

Suite *s21_abs_second_case(void)
{
    Suite *math = suite_create("s21_math (s21_abs second case)");

    TCase *tc_abs = tcase_create("test_abs");
    tcase_add_test(tc_abs, s21_abs_11);
    tcase_add_test(tc_abs, s21_abs_12);
    tcase_add_test(tc_abs, s21_abs_13);
    tcase_add_test(tc_abs, s21_abs_14);
    tcase_add_test(tc_abs, s21_abs_15);
    tcase_add_test(tc_abs, s21_abs_16);
    tcase_add_test(tc_abs, s21_abs_17);
    tcase_add_test(tc_abs, s21_abs_18);
    tcase_add_test(tc_abs, s21_abs_19);
    tcase_add_test(tc_abs, s21_abs_20);
    suite_add_tcase(math, tc_abs);

    return math;
}
