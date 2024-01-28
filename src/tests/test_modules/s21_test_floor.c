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

/// @brief \f[ floor(0.423423) = 0.0 \f]
START_TEST(s21_floor_1)
{
    double value = 0.423423;

    s21_test_floor(value);
}

/// @brief \f[ floor(-0.423423) = -1.0 \f]
START_TEST(s21_floor_2)
{
    double value = -0.423423;

    s21_test_floor(value);
}

/// @brief \f[ floor(1.03234523452) = 1.0 \f]
START_TEST(s21_floor_3)
{
    double value = 1.03234523452;

    s21_test_floor(value);
}

/// @brief \f[ floor(-1.03234523452) = -2.0 \f]
START_TEST(s21_floor_4)
{
    double value = -1.03234523452;

    s21_test_floor(value);
}

/// @brief \f[ floor(1236785.234234556) = 1236785.0 \f]
START_TEST(s21_floor_5)
{
    double value = 1236785.234234556;

    s21_test_floor(value);
}

/// @brief \f[ floor(-1236785.234234556) = -1236786.0 \f]
START_TEST(s21_floor_6)
{
    double value = -1236785.234234556;

    s21_test_floor(value);
}

/// @brief \f[ floor(523764799.8675343) = 523764799.0 \f]
START_TEST(s21_floor_7)
{
    double value = 523764799.8675343;

    s21_test_floor(value);
}

/// @brief \f[ floor(-523764799.8675343) = -523764800.0 \f]
START_TEST(s21_floor_8)
{
    double value = -523764799.8675343;

    s21_test_floor(value);
}

/// @brief \f[ floor(84728991292.999999999999999999) = 84728991292.0 \f]
START_TEST(s21_floor_9)
{
    double value = 84728991292.999999999999999999;

    s21_test_floor(value);
}

/// @brief \f[ floor(-84728991292.999999999999999999) = -84728991293.0 \f]
START_TEST(s21_floor_10)
{
    double value = -84728991292.999999999999999999;

    s21_test_floor(value);
}

/// @brief \f[ floor(12983712988921.111111111111) = 12983712988921.0 \f]
START_TEST(s21_floor_11)
{
    double value = 12983712988921.111111111111;

    s21_test_floor(value);
}

/// @brief \f[ floor(-12983712988921.111111111111) = -12983712988922.0 \f]
START_TEST(s21_floor_12)
{
    double value = -12983712988921.111111111111;

    s21_test_floor(value);
}

/// @brief \f[ floor(6251356673673321.543566) = 6251356673673321.0 \f]
START_TEST(s21_floor_13)
{
    double value = 6251356673673321.543566;

    s21_test_floor(value);
}

/// @brief \f[ floor(-6251356673673321.543566) = -6251356673673322.0 \f]
START_TEST(s21_floor_14)
{
    double value = -6251356673673321.543566;

    s21_test_floor(value);
}

/// @brief \f[ floor(999999999999999999.342341) = 999999999999999999.0 \f]
START_TEST(s21_floor_15)
{
    double value = 999999999999999999.342341;

    s21_test_floor(value);
}

/// @brief \f[ floor(-999999999999999999.342341) = -1000000000000000000.0 \f]
START_TEST(s21_floor_16)
{
    double value = -999999999999999999.342341;

    s21_test_floor(value);
}

/// @brief \f[ floor(8923674786237846238.6767452) = 8923674786237846238.0 \f]
START_TEST(s21_floor_17)
{
    double value = 8923674786237846238.6767452;

    s21_test_floor(value);
}

/// @brief \f[ floor(-8923674786237846238.6767452) = -8923674786237846239.0 \f]
START_TEST(s21_floor_18)
{
    double value = -8923674786237846238.6767452;

    s21_test_floor(value);
}

/// @brief \f[ floor(1.7976931348623157e+308) = 1.7976931348623157e+308 \f]
START_TEST(s21_floor_19)
{
    double value = __DBL_MAX__;

    s21_test_floor(value);
}

/// @brief \f[ floor(2.2250738585072014e-308) = 2.2250738585072014e-308 \f]
START_TEST(s21_floor_20)
{
    double value = __DBL_MIN__;

    s21_test_floor(value);
}

/// @brief \f[ floor(NaN) = -nan \f]
START_TEST(s21_floor_21)
{
    double value = S21_NAN;

    s21_test_floor_nan(value);
}

/// @brief \f[ floor(inf) = inf \f]
START_TEST(s21_floor_22)
{
    double value = S21_INF;

    s21_test_floor_inf(value);
}

/// @brief \f[ floor(-inf) = -inf \f]
START_TEST(s21_floor_23)
{
    double value = -S21_INF;

    s21_test_floor_inf(value);
}

/**
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
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

/**
 * @brief Second set of tests.
 * 
 * @return Suite* 
 */
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

/**
 * @brief Set of edge tests.
 * 
 * @return Suite* 
 */
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

//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_floor.
 * 
 * @param[in] value number whose value needs to be rounded.
 */
void s21_test_floor(double value)
{
    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    printf("Input value: %lf\n", value);

    if(fabsl(original_func - implementation) > COMPARE_ACCURACY) {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    } else {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    }
    
    #ifdef DEBUG
    s21_test_floor_print(original_func, implementation);
    #endif

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

/**
 * @brief Quickly check the nan functionality of the module s21_floor.
 * 
 * @param[in] value number whose value needs to be rounded.
 */
void s21_test_floor_nan(double value)
{
    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    printf("Input value: %lf\n", value);

    if(S21_IS_NAN(original_func) == S21_IS_NAN(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    }

    #ifdef DEBUG
    s21_test_floor_print(original_func, implementation);
    #endif

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}
/**
 * @brief Quickly check the inf functionality of the module s21_floor.
 * 
 * @param[in] value number whose value needs to be rounded.
 */
void s21_test_floor_inf(double value)
{
    long double original_func = floor(value);
    long double implementation = s21_floor(value);

    printf("Input value: %lf\n", value);
    
    if(S21_IS_INF(original_func) == S21_IS_INF(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    }

    #ifdef DEBUG
    s21_test_floor_print(original_func, implementation);
    #endif
    
    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

/**
 * @brief Function for printing the obtained results.
 * 
 * @param[in] original_func result of calculating the original function.
 * @param[in] implementation result of calculating the implementation function.
 */
void s21_test_floor_print(long double original_func, long double implementation)
{
    printf(" original func = %Lf | binary: ", original_func);
    print_bits_double(original_func);
    printf("implementation = %Lf | binary: ", implementation);
    print_bits_double(implementation);
    printf("\033[0;33m-------------------------------------------------------------------------\033[0m\n");
}
