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

/// @brief \f[ |0.0| = 0.0 \f]
START_TEST(s21_fabs_1)
{
    double value = 0.0;

    s21_test_fabs(value);
}

/// @brief \f[ |-0.0| = 0.0 \f]
START_TEST(s21_fabs_2)
{
    double value = -0.0;

    s21_test_fabs(value);
}

/// @brief \f[ |1.0| = 1.0 \f]
START_TEST(s21_fabs_3)
{
    double value = 1.0;

    s21_test_fabs(value);
}

/// @brief \f[ |-1.0| = 1.0 \f]
START_TEST(s21_fabs_4)
{
    double value = -1.0;

    s21_test_fabs(value);
}

/// @brief \f[ |1236785.0| = 1236785.0 \f]
START_TEST(s21_fabs_5)
{
    double value = 1236785.0;

    s21_test_fabs(value);
}

/// @brief \f[ |-1236785.0| = 1236785.0 \f]
START_TEST(s21_fabs_6)
{
    double value = -1236785.0;

    s21_test_fabs(value);
}

/// @brief \f[ |523764799.0| = 523764799.0 \f]
START_TEST(s21_fabs_7)
{
    double value = 523764799.0;

    s21_test_fabs(value);
}

/// @brief \f[ |-523764799.0| = 523764799.0 \f]
START_TEST(s21_fabs_8)
{
    double value = -523764799.0;

    s21_test_fabs(value);
}

/// @brief \f[ |84728991292.0| = 84728991292.0 \f]
START_TEST(s21_fabs_9)
{
    double value = 84728991292.0;

    s21_test_fabs(value);
}

/// @brief \f[ |-84728991292.0| = 84728991292.0 \f]
START_TEST(s21_fabs_10)
{
    double value = -84728991292.0;

    s21_test_fabs(value);
}

/// @brief \f[ |12983712988921.111111111111| = 12983712988921.111111 \f]
START_TEST(s21_fabs_11)
{
    double value = 12983712988921.111111111111;

    s21_test_fabs(value);
}

/// @brief \f[ |-12983712988921.111111111111| = 12983712988921.111111 \f]
START_TEST(s21_fabs_12)
{
    double value = -12983712988921.111111111111;

    s21_test_fabs(value);
}

/// @brief \f[ |6251356673673321.543566| = 6251356673673321.543566 \f]
START_TEST(s21_fabs_13)
{
    double value = 6251356673673321.543566;

    s21_test_fabs(value);
}

/// @brief \f[ |-6251356673673321.543566| = 6251356673673321.543566 \f]
START_TEST(s21_fabs_14)
{
    double value = -6251356673673321.543566;

    s21_test_fabs(value);
}

/// @brief \f[ |999999999999999999.342341| = 999999999999999999.342341 \f]
START_TEST(s21_fabs_15)
{
    double value = 999999999999999999.342341;

    s21_test_fabs(value);
}

/// @brief \f[ |-999999999999999999.342341| = 999999999999999999.342341 \f]
START_TEST(s21_fabs_16)
{
    double value = -999999999999999999.342341;

    s21_test_fabs(value);
}

/// @brief \f[ |892367478623784623478342.6767452| = 892367478623784623478342.676745 \f]
START_TEST(s21_fabs_17)
{
    double value = 892367478623784623478342.6767452;

    s21_test_fabs(value);
}

/// @brief \f[ |-892367478623784623478342.6767452| = 892367478623784623478342.676745 \f]
START_TEST(s21_fabs_18)
{
    double value = -892367478623784623478342.6767452;

    s21_test_fabs(value);
}

/// @brief \f[ |1.7976931348623157e+308| = 1.7976931348623157e+308 \f]
START_TEST(s21_fabs_19)
{
    double value = __DBL_MAX__;

    s21_test_fabs(value);
}

/// @brief \f[ |-2.2250738585072014e-308| = 2.2250738585072014e-308 \f]
START_TEST(s21_fabs_20)
{
    double value = __DBL_MIN__;

    s21_test_fabs(value);
}

/// @brief \f[ |NaN| = nan \f]
START_TEST(s21_fabs_21)
{
    double value = S21_NAN;

    s21_test_fabs_nan(value);
}

/// @brief \f[ |inf| = inf \f]
START_TEST(s21_fabs_22)
{
    double value = S21_INF;

    s21_test_fabs_inf(value);
}

/// @brief \f[ |-inf| = inf \f]
START_TEST(s21_fabs_23)
{
    double value = -S21_INF;

    s21_test_fabs_inf(value);
}

/**
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
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

/**
 * @brief Second set of tests.
 * 
 * @return Suite* 
 */
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

/**
 * @brief Set of edge tests.
 * 
 * @return Suite* 
 */
Suite *s21_fabs_edge_case(void)
{
    Suite *math = suite_create("s21_math (s21_fabs edge case)");

    TCase *tc_fabs = tcase_create("test_fabs");
    tcase_add_test(tc_fabs, s21_fabs_21);
    tcase_add_test(tc_fabs, s21_fabs_22);
    tcase_add_test(tc_fabs, s21_fabs_23);
    suite_add_tcase(math, tc_fabs);

    return math;
}

//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_abs.
 * 
 * @param[in] value number whose absolute value must be determined.
 */
void s21_test_fabs(double value)
{
    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    printf("Input value: %lf\n", value);
    
    if(fabsl(original_func - implementation) > COMPARE_ACCURACY) {
        printf("Test result: \033[0;31mTEST FAILED!\n\n\033[0m"); 
    } else {
        printf("Test result: \033[0;32mTEST PASSED!\n\n\033[0m");
    }

    #ifdef DEBUG
    s21_test_fabs_print(original_func, implementation);
    #endif

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

/**
 * @brief Quickly check the nan functionality of the module s21_abs.
 * 
 * @param[in] value number whose absolute value must be determined.
 */
void s21_test_fabs_nan(double value)
{
    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    printf("Input value: %lf\n", value);

    if(S21_IS_NAN(original_func) == S21_IS_NAN(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\n\n\033[0m");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\n\n\033[0m"); 
    }

    #ifdef DEBUG
    s21_test_fabs_print(original_func, implementation);
    #endif

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}
/**
 * @brief Quickly check the inf functionality of the module s21_abs.
 * 
 * @param[in] value number whose absolute value must be determined.
 */
void s21_test_fabs_inf(double value)
{
    long double original_func = fabs(value);
    long double implementation = s21_fabs(value);

    printf("Input value: %lf\n", value);

    if(S21_IS_INF(original_func) == S21_IS_INF(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\n\n\033[0m");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\n\n\033[0m"); 
    }

    #ifdef DEBUG
    s21_test_fabs_print(original_func, implementation);
    #endif

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

/**
 * @brief Function for printing the obtained results.
 * 
 * @param[in] original_func result of calculating the original function.
 * @param[in] implementation result of calculating the implementation function.
 */
void s21_test_fabs_print(long double original_func, long double implementation)
{
    printf("original_function = %Lf | binary: ", original_func);
    print_bits_double(original_func);
    printf("implementation    = %Lf | binary: ", implementation);
    print_bits_double(implementation);
    printf("\033[0;33m-------------------------------------------------------------------------\n\033[0m");
}