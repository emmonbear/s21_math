/**
 * @file s21_test_pow.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_pow
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_pow.h"

/// @brief \f[ 2^5 = 32 \f]
START_TEST(s21_pow_1)
{
    double base = 2.0;
    double exp = 5.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 3^4 = 81 \f]
START_TEST(s21_pow_2)
{
    double base = 3.0;
    double exp = 4.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 5^5 = 3125 \f]
START_TEST(s21_pow_3)
{
    double base = 5.0;
    double exp = 5.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 7^1 = 7 \f]
START_TEST(s21_pow_4)
{
    double base = 7.0;
    double exp = 1.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 8^0 = 1 \f]
START_TEST(s21_pow_5)
{
    double base = 8.0;
    double exp = 0.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 9^4 = 6561 \f]
START_TEST(s21_pow_6)
{
    double base = 9.0;
    double exp = 4.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 11^3 = 1331 \f]
START_TEST(s21_pow_7)
{
    double base = 11.0;
    double exp = 3.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 15^5 = 759375 \f]
START_TEST(s21_pow_8)
{
    double base = 15.0;
    double exp = 5.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 21^4 = 194481 \f]
START_TEST(s21_pow_9)
{
    double base = 21.0;
    double exp = 4.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ 25^6 = 244140625 \f]
START_TEST(s21_pow_10)
{
    double base = 25.0;
    double exp = 6.0;

    s21_test_pow(base, exp);
}

/**
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_pow_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_pow first case)");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_1);
    tcase_add_test(tc_pow, s21_pow_2);
    tcase_add_test(tc_pow, s21_pow_3);
    tcase_add_test(tc_pow, s21_pow_4);
    tcase_add_test(tc_pow, s21_pow_5);
    tcase_add_test(tc_pow, s21_pow_6);
    tcase_add_test(tc_pow, s21_pow_7);
    tcase_add_test(tc_pow, s21_pow_8);
    tcase_add_test(tc_pow, s21_pow_9);
    tcase_add_test(tc_pow, s21_pow_10);
    suite_add_tcase(math, tc_pow);

    return math;
}

//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_pow.
 * 
 * @param[in] base number whose absolute value must be determined.
 * @param[in] exp the degree to which it is raised base.
 */
void s21_test_pow(double base, double exp)
{
    long double original_func = pow(base, exp);
    long double implementation = s21_pow(base, exp);

    printf("Input value: %lf^%lf\n", base, exp);
    
    if(fabsl(original_func - implementation) > COMPARE_ACCURACY) {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    } else {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");   
    }
    
    #ifdef DEBUG
    s21_test_pow_print(original_func, implementation);
    #endif

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

/**
 * @brief Quickly check the nan functionality of the module s21_pow.
 * 
 * @param[in] base number whose absolute value must be determined.
 * @param[in] exp the degree to which it is raised base.
 */
void s21_test_pow_nan(double base, double exp)
{
    long double original_func = pow(base, exp);
    long double implementation = pow(base, exp);

    printf("Input value: %lf^%lf\n", base, exp);

    if(S21_IS_NAN(original_func) == S21_IS_NAN(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    }

    #ifdef DEBUG
    s21_test_pow_print(original_func, implementation);
    #endif

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}
/**
 * @brief Quickly check the inf functionality of the module s21_pow.
 * 
 * @param[in] base number whose absolute value must be determined.
 * @param[in] exp the degree to which it is raised base.
 */
void s21_test_pow_inf(double base, double exp)
{
    long double original_func = pow(base, exp);
    long double implementation = pow(base, exp);

    printf("Input value: %lf^%lf\n", base, exp);

    if(S21_IS_INF(original_func) == S21_IS_INF(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    }

    #ifdef DEBUG
    s21_test_pow_print(original_func, implementation);
    #endif

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

/**
 * @brief Function for printing the obtained results.
 * 
 * @param[in] original_func result of calculating the original function.
 * @param[in] implementation result of calculating the implementation function.
 */
void s21_test_pow_print(long double original_func, long double implementation)
{
    printf(" original func = %Lf | binary: ", original_func);
    print_bits_double(original_func);
    printf("implementation = %Lf | binary: ", implementation);
    print_bits_double(implementation);
    printf("\033[0;33m-------------------------------------------------------------------------\033[0m\n");
}

