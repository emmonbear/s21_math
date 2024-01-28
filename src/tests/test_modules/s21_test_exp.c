/**
 * @file s21_test_exp.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_exp
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_exp.h"

/// @brief \f[ exp(0.0) = 1.0 \f]
START_TEST(s21_exp_1)
{
    double value = 0;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.23173653) = 1.260788 \f]
START_TEST(s21_exp_2)
{
    double value = 0.23173653;

    s21_test_exp(value);
}

/// @brief \f[ exp(-0.23173653) = 0.793155 \f]
START_TEST(s21_exp_3)
{
    double value = -0.23173653;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.6562536) = 5.239644 \f]
START_TEST(s21_exp_4)
{
    double value = 1.6562536;

    s21_test_exp(value);
}

/// @brief \f[ exp(-1.6562536) = 0.190853 \f]
START_TEST(s21_exp_5)
{
    double value = -1.6562536;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.777777777777) = 16.083241 \f]
START_TEST(s21_exp_6)
{
    double value = 2.777777777777;

    s21_test_exp(value);
}

/// @brief \f[ exp(-2.777777777777) = 0.062177 \f]
START_TEST(s21_exp_7)
{
    double value = -2.777777777777;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.33333333333333) = 28.031625 \f]
START_TEST(s21_exp_8)
{
    double value = 3.33333333333333;

    s21_test_exp(value);
}

/// @brief \f[ exp(-3.33333333333333) = 0.035674 \f]
START_TEST(s21_exp_9)
{
    double value = -3.33333333333333;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.9165345) = 50.226084 \f]
START_TEST(s21_exp_10)
{
    double value = 3.9165345;

    s21_test_exp(value);
}

/// @brief \f[ exp(-3.9165345) = 0.019910 \f]
START_TEST(s21_exp_11)
{
    double value = -3.9165345;

    s21_test_exp(value);
}

/// @brief \f[ exp(4.857128733) = 128.654271 \f]
START_TEST(s21_exp_12)
{
    double value = 4.857128733;

    s21_test_exp(value);
}

/// @brief \f[ exp(-4.857128733) = 0.007773 \f]
START_TEST(s21_exp_13)
{
    double value = -4.857128733;

    s21_test_exp(value);
}

/// @brief \f[ exp(5.2552343466343452) = 191.566374 \f]
START_TEST(s21_exp_14)
{
    double value = 5.2552343466343452;

    s21_test_exp(value);
}

/// @brief \f[ exp(-5.2552343466343452) = 0.005220 \f]
START_TEST(s21_exp_15)
{
    double value = -5.2552343466343452;

    s21_test_exp(value);
}

/// @brief \f[ exp(6.12543209683765) = 457.342287 \f]
START_TEST(s21_exp_16)
{
    double value = 6.12543209683765;

    s21_test_exp(value);
}

/// @brief \f[ exp(-6.12543209683765) = 0.002187 \f]
START_TEST(s21_exp_17)
{
    double value = -6.12543209683765;

    s21_test_exp(value);
}

/// @brief \f[ exp(7.73459078234123) = 2286.073011 \f]
START_TEST(s21_exp_18)
{
    double value = 7.73459078234123;

    s21_test_exp(value);
}

/// @brief \f[ exp(-7.73459078234123) = 0.000437 \f]
START_TEST(s21_exp_19)
{
    double value = -7.73459078234123;

    s21_test_exp(value);
}

/// @brief \f[ exp(8.8888888812354238888) = 7250.958030 \f]
START_TEST(s21_exp_20)
{
    double value = 8.8888888812354238888;

    s21_test_exp(value);
}

/// @brief \f[ exp(-8.8888888812354238888) = 0.000138 \f]
START_TEST(s21_exp_21)
{
    double value = -8.8888888812354238888;

    s21_test_exp(value);
}

/// @brief \f[ exp(9.45237123) = 12738.335002 \f]
START_TEST(s21_exp_22)
{
    double value = 9.45237123;

    s21_test_exp(value);
}

/// @brief \f[ exp(-9.45237123) = 0.000079 \f]
START_TEST(s21_exp_23)
{
    double value = -9.45237123;

    s21_test_exp(value);
}

/// @brief \f[ exp(10.0203572374) = 22479.458989 \f]
START_TEST(s21_exp_24)
{
    double value = 10.0203572374;

    s21_test_exp(value);
}

/// @brief \f[ exp(-10.0203572374) = 0.000044 \f]
START_TEST(s21_exp_25)
{
    double value = -10.0203572374;

    s21_test_exp(value);
}

/// @brief \f[ exp(10.957234895734) = 57367.596141 \f]
START_TEST(s21_exp_26)
{
    double value = 10.957234895734;

    s21_test_exp(value);
}

/// @brief \f[ exp(-10.957234895734) = 0.000017 \f]
START_TEST(s21_exp_27)
{
    double value = -10.957234895734;

    s21_test_exp(value);
}

/// @brief \f[ exp(11.78612535654) = 131416.290866 \f]
START_TEST(s21_exp_28)
{
    double value = 11.78612535654;

    s21_test_exp(value);
}

/// @brief \f[ exp(-11.78612535654) = 0.000008 \f]
START_TEST(s21_exp_29)
{
    double value = -11.78612535654;

    s21_test_exp(value);
}

/// @brief \f[ exp(12.3489234678957) = 230711.540764 \f]
START_TEST(s21_exp_30)
{
    double value = 12.3489234678957;

    s21_test_exp(value);
}

/// @brief \f[ exp(-12.3489234678957) = 0.000004 \f]
START_TEST(s21_exp_31)
{
    double value = -12.3489234678957;

    s21_test_exp(value);
}

/// @brief \f[ exp(13.00000312312) = 442414.773721 \f]
START_TEST(s21_exp_32)
{
    double value = 13.00000312312;

    s21_test_exp(value);
}

/// @brief \f[ exp(-13.00000312312) = 0.000002 \f]
START_TEST(s21_exp_33)
{
    double value = -13.00000312312;

    s21_test_exp(value);
}

/// @brief \f[ exp(14.27377445345) = 1581326.252863 \f]
START_TEST(s21_exp_34)
{
    double value = 14.27377445345;

    s21_test_exp(value);
}

/// @brief \f[ exp(-14.27377445345) = 0.000001 \f]
START_TEST(s21_exp_35)
{
    double value = -14.27377445345;

    s21_test_exp(value);
}

/// @brief \f[ exp(15.34567545235) = 4618938.396518 \f]
START_TEST(s21_exp_36)
{
    double value = 15.34567545235;

    s21_test_exp(value);
}

/// @brief \f[ exp(-15.34567545235) = 0.000000 \f]
START_TEST(s21_exp_37)
{
    double value = -15.34567545235;

    s21_test_exp(value);
}

/// @brief \f[ exp(16.0979238745423) = 9800303.127523 \f]
START_TEST(s21_exp_38)
{
    double value = 16.0979238745423;

    s21_test_exp(value);
}

/// @brief \f[ exp(-16.0979238745423) = 0.000000 \f]
START_TEST(s21_exp_39)
{
    double value = -16.0979238745423;

    s21_test_exp(value);
}

/// @brief \f[ exp(17.89057438973) = 58854237.238333 \f]
START_TEST(s21_exp_40)
{
    double value = 17.89057438973;

    s21_test_exp(value);
}

/// @brief \f[ exp(-17.89057438973) = 0.000000 \f]
START_TEST(s21_exp_41)
{
    double value = -17.89057438973;

    s21_test_exp(value);
}

/// @brief \f[ exp(18.4573262333) = 103732521.280817 \f]
START_TEST(s21_exp_42)
{
    double value = 18.4573262333;

    s21_test_exp(value);
}

/// @brief \f[ exp(-18.4573262333) = 0.000000 \f]
START_TEST(s21_exp_43)
{
    double value = -18.4573262333;

    s21_test_exp(value);
}

/// @brief \f[ exp(19.54377312543) = 307434657.110964 \f]
START_TEST(s21_exp_44)
{
    double value = 19.54377312543;

    s21_test_exp(value);
}

/// @brief \f[ exp(-19.54377312543) = 0.000000 \f]
START_TEST(s21_exp_45)
{
    double value = -19.54377312543;

    s21_test_exp(value);
}

/// @brief \f[ exp(20.074532612) = 522707510.373172 \f]
START_TEST(s21_exp_46)
{
    double value = 20.074532612;

    s21_test_exp(value);
}

/// @brief \f[ exp(-20.074532612) = 0.000000 \f]
START_TEST(s21_exp_47)
{
    double value = -20.074532612;

    s21_test_exp(value);
}

/// @brief \f[ exp(21.8945672323) = 3226188454.393028 \f]
START_TEST(s21_exp_48)
{
    double value = 21.8945672323;

    s21_test_exp(value);
}

/// @brief \f[ exp(-21.8945672323) = 0.000000 \f]
START_TEST(s21_exp_49)
{
    double value = -21.8945672323;

    s21_test_exp(value);
}

/// @brief \f[ exp(23.7812367178236) = 21284324884.500542 \f]
START_TEST(s21_exp_50)
{
    double value = 23.7812367178236;

    s21_test_exp(value);
}

/// @brief \f[ exp(NaN) = -nan \f]
START_TEST(s21_exp_51)
{
    double value = S21_NAN;

    s21_test_exp_nan(value);
}

/// @brief \f[ exp(inf) = inf \f]
START_TEST(s21_exp_52)
{
    double value = S21_INF;

    s21_test_exp_inf(value);
}

/// @brief \f[ exp(-inf) = 0.0 \f]
START_TEST(s21_exp_53)
{
    double value = -S21_INF;

    s21_test_exp_inf(value);
}

/**
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_exp_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_exp first case)");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_1);
    tcase_add_test(tc_exp, s21_exp_2);
    tcase_add_test(tc_exp, s21_exp_3);
    tcase_add_test(tc_exp, s21_exp_4);
    tcase_add_test(tc_exp, s21_exp_5);
    tcase_add_test(tc_exp, s21_exp_6);
    tcase_add_test(tc_exp, s21_exp_7);
    tcase_add_test(tc_exp, s21_exp_8);
    tcase_add_test(tc_exp, s21_exp_9);
    tcase_add_test(tc_exp, s21_exp_10);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief Second set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_exp_second_case(void)
{
    Suite *math = suite_create("s21_math (s21_exp second case)");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_11);
    tcase_add_test(tc_exp, s21_exp_12);
    tcase_add_test(tc_exp, s21_exp_13);
    tcase_add_test(tc_exp, s21_exp_14);
    tcase_add_test(tc_exp, s21_exp_15);
    tcase_add_test(tc_exp, s21_exp_16);
    tcase_add_test(tc_exp, s21_exp_17);
    tcase_add_test(tc_exp, s21_exp_18);
    tcase_add_test(tc_exp, s21_exp_19);
    tcase_add_test(tc_exp, s21_exp_20);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief Third set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_exp_third_case(void)
{
    Suite *math = suite_create("s21_math (s21_exp third case)");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_21);
    tcase_add_test(tc_exp, s21_exp_22);
    tcase_add_test(tc_exp, s21_exp_23);
    tcase_add_test(tc_exp, s21_exp_24);
    tcase_add_test(tc_exp, s21_exp_25);
    tcase_add_test(tc_exp, s21_exp_26);
    tcase_add_test(tc_exp, s21_exp_27);
    tcase_add_test(tc_exp, s21_exp_28);
    tcase_add_test(tc_exp, s21_exp_29);
    tcase_add_test(tc_exp, s21_exp_30);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief Fourth set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_exp_fourth_case(void)
{
    Suite *math = suite_create("s21_math (s21_exp fourth case)");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_31);
    tcase_add_test(tc_exp, s21_exp_32);
    tcase_add_test(tc_exp, s21_exp_33);
    tcase_add_test(tc_exp, s21_exp_34);
    tcase_add_test(tc_exp, s21_exp_35);
    tcase_add_test(tc_exp, s21_exp_36);
    tcase_add_test(tc_exp, s21_exp_37);
    tcase_add_test(tc_exp, s21_exp_38);
    tcase_add_test(tc_exp, s21_exp_39);
    tcase_add_test(tc_exp, s21_exp_40);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief Fifth set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_exp_fifth_case(void)
{
    Suite *math = suite_create("s21_math (s21_exp fifth case)");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_41);
    tcase_add_test(tc_exp, s21_exp_42);
    tcase_add_test(tc_exp, s21_exp_43);
    tcase_add_test(tc_exp, s21_exp_44);
    tcase_add_test(tc_exp, s21_exp_45);
    tcase_add_test(tc_exp, s21_exp_46);
    tcase_add_test(tc_exp, s21_exp_47);
    tcase_add_test(tc_exp, s21_exp_48);
    tcase_add_test(tc_exp, s21_exp_49);
    tcase_add_test(tc_exp, s21_exp_50);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief Set of edge tests.
 * 
 * @return Suite* 
 */
Suite *s21_exp_edge_case(void)
{
    Suite *math = suite_create("s21_math (s21_exp edge case)");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_51);
    tcase_add_test(tc_exp, s21_exp_52);
    tcase_add_test(tc_exp, s21_exp_53);
    suite_add_tcase(math, tc_exp);

    return math;
}

//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_exp.
 * 
 * @param[in] value Euler exponent.
 */
void s21_test_exp(double value)
{
    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    printf("Input value: %lf\n", value);
    
    if(fabsl(original_func - implementation) > COMPARE_ACCURACY) {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    } else {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    }
    #ifdef DEBUG
    s21_test_exp_print(original_func, implementation);
    #endif

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

/**
 * @brief Quickly check the nan functionality of the module s21_exp.
 * 
 * @param[in] value Euler exponent.
 */
void s21_test_exp_nan(double value)
{
    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    printf("Input value: %lf\n", value);

    if(S21_IS_NAN(original_func) == S21_IS_NAN(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    }

    #ifdef DEBUG
    s21_test_exp_print(original_func, implementation);
    #endif

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}
/**
 * @brief Quickly check the inf functionality of the module s21_exp.
 * 
 * @param[in] value Euler exponent.
 */
void s21_test_exp_inf(double value)
{
    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    printf("Input value: %lf\n", value);

    if(S21_IS_INF(original_func) == S21_IS_INF(implementation)) {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    } else {
        printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n"); 
    }
    #ifdef DEBUG
    s21_test_exp_print(original_func, implementation);
    #endif

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

/**
 * @brief Function for printing the obtained results.
 * 
 * @param[in] original_func result of calculating the original function.
 * @param[in] implementation result of calculating the implementation function.
 */
void s21_test_exp_print(long double original_func, long double implementation)
{
    printf(" original func = %Lf | binary: ", original_func);
    print_bits_double(original_func);
    printf("implementation = %Lf | binary: ", implementation);
    print_bits_double(implementation);
    printf("\033[0;33m-------------------------------------------------------------------------\033[0m\n");
}
