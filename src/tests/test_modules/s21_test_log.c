/**
 * @file s21_test_log.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_log
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_log.h"

/// @brief \f[ log(-21.0) = -nan \f]
START_TEST(s21_log_1)
{
    double value = -21.0;

    s21_test_log(value);
}

/// @brief \f[ log(1.0) = 0.0 \f]
START_TEST(s21_log_2)
{
    double value = 1.0;

    s21_test_log(value);
}

/// @brief \f[ log(NaN) = -nan \f]
START_TEST(s21_log_3)
{
    double value = S21_NAN;

    s21_test_log(value);
}

/// @brief \f[ log(inf) = inf \f]
START_TEST(s21_log_4)
{
    double value = S21_INF_POS;

    s21_test_log(value);
}

/// @brief \f[ log(-inf) = -inf \f]
START_TEST(s21_log_5)
{
    double value = S21_INF_NEG;

    s21_test_log(value);
}

// START_TEST(s21_log_6)
// {

// }

// START_TEST(s21_log_7)
// {

// }

// START_TEST(s21_log_8)
// {

// }

// START_TEST(s21_log_9)
// {

// }

// START_TEST(s21_log_10)
// {

// }

/**
 * @brief Edge set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_log_edge_case(void)
{
    Suite *math = suite_create("s21_math (s21_log edge case)");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_1);
    tcase_add_test(tc_log, s21_log_2);
    tcase_add_test(tc_log, s21_log_3);
    tcase_add_test(tc_log, s21_log_4);
    tcase_add_test(tc_log, s21_log_5);
    // tcase_add_test(tc_log, s21_log_6);
    // tcase_add_test(tc_log, s21_log_7);
    // tcase_add_test(tc_log, s21_log_8);
    // tcase_add_test(tc_log, s21_log_9);
    // tcase_add_test(tc_log, s21_log_10);
    suite_add_tcase(math, tc_log);

    return math;
}

Suite *s21_log_second_case(void)
{
    Suite *math = suite_create("s21_math (s21_log second case)");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_1);
    tcase_add_test(tc_log, s21_log_2);
    tcase_add_test(tc_log, s21_log_3);
    tcase_add_test(tc_log, s21_log_4);
    tcase_add_test(tc_log, s21_log_5);
    // tcase_add_test(tc_log, s21_log_6);
    // tcase_add_test(tc_log, s21_log_7);
    // tcase_add_test(tc_log, s21_log_8);
    // tcase_add_test(tc_log, s21_log_9);
    // tcase_add_test(tc_log, s21_log_10);
    suite_add_tcase(math, tc_log);

    return math;
}

//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_log.
 * 
 * @param[in] value a value used in the calculation of the logarithm of x to the base of e.
 */
void s21_test_log(double value)
{
    long double original_func = log(value);
    long double implementation = s21_log(value);

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
