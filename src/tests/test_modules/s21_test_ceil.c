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

/// @brief \f[ ceil(0.423423) = 1.0 \f]
START_TEST(s21_ceil_1)
{
    double value = 0.423423;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-0.423423) = -0.0 \f]
START_TEST(s21_ceil_2)
{
    double value = -0.423423;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(1.03234523452) = 2.0 \f]
START_TEST(s21_ceil_3)
{
    double value = 1.03234523452;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-1.03234523452) = -1.0 \f]
START_TEST(s21_ceil_4)
{
    double value = -1.03234523452;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(1236785.234234556) = 1236786.0 \f]
START_TEST(s21_ceil_5)
{
    double value = 1236785.234234556;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-1236785.234234556) = -1236785.0 \f]
START_TEST(s21_ceil_6)
{
    double value = -1236785.234234556;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(523764799.8675343) = 523764800.0 \f]
START_TEST(s21_ceil_7)
{
    double value = 523764799.8675343;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-523764799.8675343) = -523764799.0 \f]
START_TEST(s21_ceil_8)
{
    double value = -523764799.8675343;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(84728991292.999999999999999999) = 84728991293.0 \f]
START_TEST(s21_ceil_9)
{
    double value = 84728991292.999999999999999999;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-84728991292.999999999999999999) = -84728991292.0 \f]
START_TEST(s21_ceil_10)
{
    double value = -84728991292.999999999999999999;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(12983712988921.111111111111) = 12983712988922.0 \f]
START_TEST(s21_ceil_11)
{
    double value = 12983712988921.111111111111;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-12983712988921.111111111111) = -12983712988921.0 \f]
START_TEST(s21_ceil_12)
{
    double value = -12983712988921.111111111111;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(6251356673673321.543566) = 6251356673673322.0 \f]
START_TEST(s21_ceil_13)
{
    double value = 6251356673673321.543566;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-6251356673673321.543566) = -6251356673673321.0 \f]
START_TEST(s21_ceil_14)
{
    double value = -6251356673673321.543566;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(999999999999999999.342341) = 1000000000000000000.0 \f]
START_TEST(s21_ceil_15)
{
    double value = 999999999999999999.342341;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-999999999999999999.342341) = -999999999999999999.0 \f]
START_TEST(s21_ceil_16)
{
    double value = -999999999999999999.342341;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(8923674786237846238.6767452) = 8923674786237846239.0 \f]
START_TEST(s21_ceil_17)
{
    double value = 8923674786237846238.6767452;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-8923674786237846238.6767452) = -8923674786237846238.0 \f]
START_TEST(s21_ceil_18)
{
    double value = -8923674786237846238.6767452;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(1.7976931348623157e+308) = 1.7976931348623157e+308 \f]
START_TEST(s21_ceil_19)
{
    double value = __DBL_MAX__;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(2.2250738585072014e-308) = 2.2250738585072014e-308 \f]
START_TEST(s21_ceil_20)
{
    double value = __DBL_MIN__;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(NaN) = -nan \f]
START_TEST(s21_ceil_21)
{
    double value = S21_NAN;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(inf) = inf \f]
START_TEST(s21_ceil_22)
{
    double value = S21_INF;

    s21_test_ceil(value);
}

/// @brief \f[ ceil(-inf) = -inf \f]
START_TEST(s21_ceil_23)
{
    double value = -S21_INF;

    s21_test_ceil(value);
}

/**
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
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

/**
 * @brief Second set of tests.
 * 
 * @return Suite* 
 */
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

/**
 * @brief Set of edge tests.
 * 
 * @return Suite* 
 */
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

//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_ceil.
 * 
 * @param[in] value number whose value needs to be rounded.
 */
void s21_test_ceil(double value)
{
    long double original_func = ceil(value);
    long double implementation = s21_ceil(value);

    printf("Input value: %lf\n", value);

    long double first = 0;
    long double second = 0;

    if(S21_IS_INF(original_func)) {
        first = S21_IS_INF(original_func);
        second = S21_IS_INF(implementation);
    } else if(S21_IS_NAN(original_func)) {
        first = S21_IS_NAN(original_func);
        second = S21_IS_NAN(implementation);
    } else {
        first = original_func;
        second = implementation;
    }

    if(fabsl(first - second) > COMPARE_ACCURACY) {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    } else {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    }

    #ifdef DEBUG
    s21_test_print(original_func, implementation);
    #endif

    ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}
