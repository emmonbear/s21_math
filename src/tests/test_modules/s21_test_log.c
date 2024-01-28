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

/// @brief \f[ exp(-21.0) = -nan \f]
START_TEST(s21_log_1)
{
    double value = -21.0;

    s21_test_log_nan(value);
}

/// @brief \f[ exp(1.0) = 0.0 \f]
START_TEST(s21_log_2)
{
    double value = 1.0;

    s21_test_log(value);
}

/// @brief \f[ exp(NaN) = -nan \f]
START_TEST(s21_log_3)
{
    double value = S21_NAN;

    s21_test_log_nan(value);
}

/// @brief \f[ exp(inf) = inf \f]
START_TEST(s21_log_4)
{
    double value = S21_INF_POS;

    s21_test_log_inf(value);
}

/// @brief \f[ exp(-inf) = -inf \f]
START_TEST(s21_log_5)
{
    double value = S21_INF_NEG;

    s21_test_log_nan(value);
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
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_log_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_log first case)");

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

    printf("Input value       = %lf\n", value);
    
    if(fabsl(original_func - implementation) > COMPARE_ACCURACY) {
        printf("\033[0;31m                               TEST FAILED!                                \033[0m\n"); 
    } else {
        printf("\033[0;32m                               TEST PASSED!                                \033[0m\n");
    }
    
    s21_test_log_print(original_func, implementation);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

/**
 * @brief Quickly check the nan functionality of the module s21_log.
 * 
 * @param[in] value a value used in the calculation of the logarithm of x to the base of e.
 */
void s21_test_log_nan(double value)
{
    long double original_func = log(value);
    long double implementation = s21_log(value);

    printf("Input value       = %lf\n", value);

    if(S21_IS_NAN(original_func) == S21_IS_NAN(implementation)) {
        printf("\033[0;32m                               TEST PASSED!                                \033[0m\n");
    } else {
        printf("\033[0;31m                               TEST FAILED!                                \033[0m\n"); 
    }

    s21_test_log_print(original_func, implementation);

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}
/**
 * @brief Quickly check the inf functionality of the module s21_log.
 * 
 * @param[in] value a value used in the calculation of the logarithm of x to the base of e.
 */
void s21_test_log_inf(double value)
{
    long double original_func = log(value);
    long double implementation = s21_log(value);

    printf("Input value       = %lf\n", value);

    if(S21_IS_INF(original_func) == S21_IS_INF(implementation)) {
        printf("\033[0;32m                               TEST PASSED!                                \033[0m\n");
    } else {
        printf("\033[0;31m                               TEST FAILED!                                \033[0m\n"); 
    }

    s21_test_log_print(original_func, implementation);

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

/**
 * @brief Function for printing the obtained results.
 * 
 * @param[in] original_func result of calculating the original function.
 * @param[in] implementation result of calculating the implementation function.
 */
void s21_test_log_print(long double original_func, long double implementation)
{
    printf("original_function = %Lf | binary: ", original_func);
    print_bits_double(original_func);
    printf("implementation    = %Lf | binary: ", implementation);
    print_bits_double(implementation);
    printf("\033[0;33m-------------------------------------------------------------------------\n\033[0m");
}
