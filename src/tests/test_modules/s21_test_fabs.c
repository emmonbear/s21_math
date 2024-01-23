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

#include "./test_include/s21_test_fabs.h"

START_TEST(s21_fabs_1)
{
    double value = 0.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_2)
{
    double value = -0.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_3)
{
    double value = 1.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_4)
{
    double value = -1.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_5)
{
    double value = 1236785.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_6)
{
    double value = -1236785.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_7)
{
    double value = 523764799.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_8)
{
    double value = -523764799.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_9)
{
    double value = 84728991292.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_10)
{
    double value = -84728991292.0;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_11)
{
    double value = 12983712988921.111111111111;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_12)
{
    double value = -12983712988921.111111111111;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_13)
{
    double value = 6251356673673321.543566;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_14)
{
    double value = -6251356673673321.543566;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_15)
{
    double value = 999999999999999999.342341;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_16)
{
    double value = -999999999999999999.342341;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_17)
{
    double value = 892367478623784623478342.6767452;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_18)
{
    double value = -892367478623784623478342.6767452;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_19)
{
    double value = __DBL_MAX__;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_fabs_20)
{
    double value = __DBL_MIN__;

    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
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

Suite *s21_fabs_second_case(void)
{
    Suite *math = suite_create("s21_math (s21_fabs second case)");

    TCase *tc_fabs = tcase_create("test_fabs");
    tcase_add_test(tc_fabs, s21_fabs_11);
    tcase_add_test(tc_fabs, s21_fabs_12);
    tcase_add_test(tc_fabs, s21_fabs_13);
    tcase_add_test(tc_fabs, s21_fabs_14);
    tcase_add_test(tc_fabs, s21_fabs_15);
    tcase_add_test(tc_fabs, s21_fabs_16);
    tcase_add_test(tc_fabs, s21_fabs_17);
    tcase_add_test(tc_fabs, s21_fabs_18);
    tcase_add_test(tc_fabs, s21_fabs_19);
    tcase_add_test(tc_fabs, s21_fabs_20);
    suite_add_tcase(math, tc_fabs);

    return math;
}
