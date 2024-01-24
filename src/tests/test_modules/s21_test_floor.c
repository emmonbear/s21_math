/**
 * @file s21_test_floor.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_floor
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_floor.h"

START_TEST(s21_floor_1)
{
    double value = 0.423423;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_2)
{
    double value = -0.423423;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_3)
{
    double value = 1.03234523452;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_4)
{
    double value = -1.03234523452;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_5)
{
    double value = 1236785.234234556;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_6)
{
    double value = -1236785.234234556;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_7)
{
    double value = 523764799.8675343;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_8)
{
    double value = -523764799.8675343;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_9)
{
    double value = 84728991292.999999999999999999;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_10)
{
    double value = -84728991292.999999999999999999;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_11)
{
    double value = 12983712988921.111111111111;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_12)
{
    double value = -12983712988921.111111111111;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_13)
{
    double value = 6251356673673321.543566;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_14)
{
    double value = -6251356673673321.543566;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_15)
{
    double value = 999999999999999999.342341;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_16)
{
    double value = -999999999999999999.342341;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_17)
{
    double value = 8923674786237846238.6767452;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_18)
{
    double value = -8923674786237846238.6767452;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_19)
{
    double value = __DBL_MAX__;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_20)
{
    double value = __DBL_MIN__;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_floor_21)
{
    double value = S21_NAN;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}

START_TEST(s21_floor_22)
{
    double value = S21_INF;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

START_TEST(s21_floor_23)
{
    double value = -S21_INF;

    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

Suite *s21_floor_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_floor first case)");

    TCase *tc_floor = tcase_create("test_floor");
    tcase_add_test(tc_floor, s21_floor_1);
    tcase_add_test(tc_floor, s21_floor_2);
    tcase_add_test(tc_floor, s21_floor_3);
    tcase_add_test(tc_floor, s21_floor_4);
    tcase_add_test(tc_floor, s21_floor_5);
    tcase_add_test(tc_floor, s21_floor_6);
    tcase_add_test(tc_floor, s21_floor_7);
    tcase_add_test(tc_floor, s21_floor_8);
    tcase_add_test(tc_floor, s21_floor_9);
    tcase_add_test(tc_floor, s21_floor_10);
    suite_add_tcase(math, tc_floor);

    return math;
}

Suite *s21_floor_second_case(void)
{
    Suite *math = suite_create("s21_math (s21_floor second case)");

    TCase *tc_floor = tcase_create("test_floor");
    tcase_add_test(tc_floor, s21_floor_11);
    tcase_add_test(tc_floor, s21_floor_12);
    tcase_add_test(tc_floor, s21_floor_13);
    tcase_add_test(tc_floor, s21_floor_14);
    tcase_add_test(tc_floor, s21_floor_15);
    tcase_add_test(tc_floor, s21_floor_16);
    tcase_add_test(tc_floor, s21_floor_17);
    tcase_add_test(tc_floor, s21_floor_18);
    tcase_add_test(tc_floor, s21_floor_19);
    tcase_add_test(tc_floor, s21_floor_20);
    suite_add_tcase(math, tc_floor);

    return math;
}

Suite *s21_floor_edge_case(void)
{
    Suite *math = suite_create("s21_math (s21_floor edge case)");

    TCase *tc_floor = tcase_create("test_floor");
    tcase_add_test(tc_floor, s21_floor_21);
    tcase_add_test(tc_floor, s21_floor_22);
    tcase_add_test(tc_floor, s21_floor_23);
    suite_add_tcase(math, tc_floor);

    return math;
}
