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

START_TEST(s21_exp_1)
{
    double value = 0;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_2)
{
    double value = 0.23173653;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_3)
{
    double value = -0.23173653;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_4)
{
    double value = 1.6562536;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_5)
{
    double value = -1.6562536;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_6)
{
    double value = 2.777777777777;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_7)
{
    double value = -2.777777777777;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_8)
{
    double value = 3.33333333333333;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_9)
{
    double value = -3.33333333333333;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_10)
{
    double value = 3.9165345;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_11)
{
    double value = -3.9165345;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_12)
{
    double value = 4.857128733;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_13)
{
    double value = -4.857128733;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_14)
{
    double value = 5.2552343466343452;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_15)
{
    double value = -5.2552343466343452;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_16)
{
    double value = 6.12543209683765;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_17)
{
    double value = -6.12543209683765;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_18)
{
    double value = 7.73459078234123;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_19)
{
    double value = -7.73459078234123;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_20)
{
    double value = 8.8888888812354238888;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_21)
{
    double value = -8.8888888812354238888;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_22)
{
    double value = 9.45237123;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_23)
{
    double value = -9.45237123;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_24)
{
    double value = 10.0203572374;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_25)
{
    double value = -10.0203572374;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_26)
{
    double value = 10.957234895734;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_27)
{
    double value = -10.957234895734;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_28)
{
    double value = 11.78612535654;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_29)
{
    double value = -11.78612535654;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_30)
{
    double value = 12.3489234678957;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_31)
{
    double value = -12.3489234678957;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_32)
{
    double value = 13.00000312312;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_33)
{
    double value = -13.00000312312;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_34)
{
    double value = 14.27377445345;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_35)
{
    double value = -14.27377445345;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_36)
{
    double value = 15.34567545235;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_37)
{
    double value = -15.34567545235;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_38)
{
    double value = 16.0979238745423;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_39)
{
    double value = -16.0979238745423;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_40)
{
    double value = 17.89057438973;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_41)
{
    double value = -17.89057438973;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_42)
{
    double value = 18.4573262333;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_43)
{
    double value = -18.4573262333;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_44)
{
    double value = 19.54377312543;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_45)
{
    double value = -19.54377312543;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_46)
{
    double value = 20.074532612;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_47)
{
    double value = -20.074532612;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_48)
{
    double value = 21.8945672323;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_49)
{
    double value = -21.8945672323;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_50)
{
    double value = 23.7812367178236;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

START_TEST(s21_exp_51)
{
    double value = S21_NAN;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_int_eq(S21_IS_NAN(original_func), S21_IS_NAN(implementation));
}

START_TEST(s21_exp_52)
{
    double value = S21_INF;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_int_eq(S21_IS_INF(original_func), S21_IS_INF(implementation));
}

START_TEST(s21_exp_53)
{
    double value = -S21_INF;

    long double original_func = exp(value);
    long double implementation = s21_exp(value);

    ck_assert_double_eq_tol(original_func, implementation, COMPARE_ACCURACY);
}

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
