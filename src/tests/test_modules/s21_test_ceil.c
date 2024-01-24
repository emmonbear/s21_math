/**
 * @file s21_test_ceil.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_ceil
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_ceil.h"

START_TEST(s21_ceil_1)
{
    double value = 0.423423;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_2)
{
    double value = -0.423423;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_3)
{
    double value = 1.03234523452;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_4)
{
    double value = -1.03234523452;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_5)
{
    double value = 1236785.234234556;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_6)
{
    double value = -1236785.234234556;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_7)
{
    double value = 523764799.8675343;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_8)
{
    double value = -523764799.8675343;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_9)
{
    double value = 84728991292.999999999999999999;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_10)
{
    double value = -84728991292.999999999999999999;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_11)
{
    double value = 12983712988921.111111111111;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_12)
{
    double value = -12983712988921.111111111111;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_13)
{
    double value = 6251356673673321.543566;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_14)
{
    double value = -6251356673673321.543566;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_15)
{
    double value = 999999999999999999.342341;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_16)
{
    double value = -999999999999999999.342341;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_17)
{
    double value = 8923674786237846238.6767452;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_18)
{
    double value = -8923674786237846238.6767452;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_19)
{
    double value = __DBL_MAX__;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_20)
{
    double value = __DBL_MIN__;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_ceil_21)
{
    double value = S21_NAN;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}

START_TEST(s21_ceil_22)
{
    double value = S21_INF;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

START_TEST(s21_ceil_23)
{
    double value = -S21_INF;

    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

Suite *s21_ceil_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_ceil first case)");

    TCase *tc_ceil = tcase_create("test_ceil");
    tcase_add_test(tc_ceil, s21_ceil_1);
    tcase_add_test(tc_ceil, s21_ceil_2);
    tcase_add_test(tc_ceil, s21_ceil_3);
    tcase_add_test(tc_ceil, s21_ceil_4);
    tcase_add_test(tc_ceil, s21_ceil_5);
    tcase_add_test(tc_ceil, s21_ceil_6);
    tcase_add_test(tc_ceil, s21_ceil_7);
    tcase_add_test(tc_ceil, s21_ceil_8);
    tcase_add_test(tc_ceil, s21_ceil_9);
    tcase_add_test(tc_ceil, s21_ceil_10);
    suite_add_tcase(math, tc_ceil);

    return math;
}

Suite *s21_ceil_second_case(void)
{
    Suite *math = suite_create("s21_math (s21_ceil second case)");

    TCase *tc_ceil = tcase_create("test_ceil");
    tcase_add_test(tc_ceil, s21_ceil_11);
    tcase_add_test(tc_ceil, s21_ceil_12);
    tcase_add_test(tc_ceil, s21_ceil_13);
    tcase_add_test(tc_ceil, s21_ceil_14);
    tcase_add_test(tc_ceil, s21_ceil_15);
    tcase_add_test(tc_ceil, s21_ceil_16);
    tcase_add_test(tc_ceil, s21_ceil_17);
    tcase_add_test(tc_ceil, s21_ceil_18);
    tcase_add_test(tc_ceil, s21_ceil_19);
    tcase_add_test(tc_ceil, s21_ceil_20);
    suite_add_tcase(math, tc_ceil);

    return math;
}

Suite *s21_ceil_edge_case(void)
{
    Suite *math = suite_create("s21_math (s21_ceil edge case)");

    TCase *tc_ceil = tcase_create("test_ceil");
    tcase_add_test(tc_ceil, s21_ceil_21);
    tcase_add_test(tc_ceil, s21_ceil_22);
    tcase_add_test(tc_ceil, s21_ceil_23);
    suite_add_tcase(math, tc_ceil);

    return math;
}
