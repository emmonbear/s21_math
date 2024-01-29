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

/// @brief \f[ log(0.0000001) = -16.118096 \f]
START_TEST(s21_log_6)
{
    double value = 0.0000001;

    s21_test_log(value);
}

/// @brief \f[ log(0.000001) = -13.815511 \f]
START_TEST(s21_log_7)
{
    double value = 0.000001;

    s21_test_log(value);
}

/// @brief \f[ log(0.00001) = -11.512925 \f]
START_TEST(s21_log_8)
{
    double value = 0.00001;

    s21_test_log(value);
}

/// @brief \f[ log(0.0001) = -9.210340 \f]
START_TEST(s21_log_9)
{
    double value = 0.0001;

    s21_test_log(value);
}

/// @brief \f[ log(0.001) = -6.907755 \f]
START_TEST(s21_log_10)
{
    double value = 0.001;

    s21_test_log(value);
}

/// @brief \f[ log(0.01) = -4.605170 \f]
START_TEST(s21_log_11)
{
    double value = 0.01;

    s21_test_log(value);
}

/// @brief \f[ log(0.1) = -2.302585 \f]
START_TEST(s21_log_12)
{
    double value = 0.1;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000002) = -15.424948 \f]
START_TEST(s21_log_13)
{
    double value = 0.0000002;

    s21_test_log(value);
}

/// @brief \f[ log(0.000002) = -13.122363 \f]
START_TEST(s21_log_14)
{
    double value = 0.000002;

    s21_test_log(value);
}

/// @brief \f[ log(0.00002) = -10.819778 \f]
START_TEST(s21_log_15)
{
    double value = 0.00002;

    s21_test_log(value);
}

/// @brief \f[ log(0.0002) = -9.210340 \f]
START_TEST(s21_log_16)
{
    double value = 0.0002;

    s21_test_log(value);
}

/// @brief \f[ log(0.002) = -6.907755 \f]
START_TEST(s21_log_17)
{
    double value = 0.002;

    s21_test_log(value);
}

/// @brief \f[ log(0.02) = -4.605170 \f]
START_TEST(s21_log_18)
{
    double value = 0.02;

    s21_test_log(value);
}

/// @brief \f[ log(0.2) = -2.302585 \f]
START_TEST(s21_log_19)
{
    double value = 0.2;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000003) = -15.019483 \f]
START_TEST(s21_log_20)
{
    double value = 0.0000002;

    s21_test_log(value);
}

/// @brief \f[ log(0.000003) = -12.716898 \f]
START_TEST(s21_log_21)
{
    double value = 0.000003;

    s21_test_log(value);
}

/// @brief \f[ log(0.00003) = -10.414313 \f]
START_TEST(s21_log_22)
{
    double value = 0.00003;

    s21_test_log(value);
}

/// @brief \f[ log(0.0003) = -8.111728 \f]
START_TEST(s21_log_23)
{
    double value = 0.0003;

    s21_test_log(value);
}

/// @brief \f[ log(0.003) = -5.809143 \f]
START_TEST(s21_log_24)
{
    double value = 0.003;

    s21_test_log(value);
}

/// @brief \f[ log(0.03) = -3.506558 \f]
START_TEST(s21_log_25)
{
    double value = 0.03;

    s21_test_log(value);
}

/// @brief \f[ log(0.3) = -1.203973 \f]
START_TEST(s21_log_26)
{
    double value = 0.3;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000004) = -14.731801 \f]
START_TEST(s21_log_27)
{
    double value = 0.0000004;

    s21_test_log(value);
}

/// @brief \f[ log(0.000004) = -12.429216 \f]
START_TEST(s21_log_28)
{
    double value = 0.000004;

    s21_test_log(value);
}

/// @brief \f[ log(0.00004) = -10.126631 \f]
START_TEST(s21_log_29)
{
    double value = 0.00004;

    s21_test_log(value);
}

/// @brief \f[ log(0.0004) = -7.824046 \f]
START_TEST(s21_log_30)
{
    double value = 0.0004;

    s21_test_log(value);
}

/// @brief \f[ log(0.004) = -5.521461 \f]
START_TEST(s21_log_31)
{
    double value = 0.004;

    s21_test_log(value);
}

/// @brief \f[ log(0.04) = -3.218876 \f]
START_TEST(s21_log_32)
{
    double value = 0.04;

    s21_test_log(value);
}

/// @brief \f[ log(0.4) = -0.916291 \f]
START_TEST(s21_log_33)
{
    double value = 0.4;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000005) = -14.508658 \f]
START_TEST(s21_log_34)
{
    double value = 0.0000005;

    s21_test_log(value);
}

/// @brief \f[ log(0.000005) = -12.206073 \f]
START_TEST(s21_log_35)
{
    double value = 0.000005;

    s21_test_log(value);
}

/// @brief \f[ log(0.00005) = -9.903488 \f]
START_TEST(s21_log_36)
{
    double value = 0.00005;

    s21_test_log(value);
}

/// @brief \f[ log(0.0005) = -7.600902 \f]
START_TEST(s21_log_37)
{
    double value = 0.0005;

    s21_test_log(value);
}

/// @brief \f[ log(0.005) = -5.298317 \f]
START_TEST(s21_log_38)
{
    double value = 0.005;

    s21_test_log(value);
}

/// @brief \f[ log(0.05) = -2.995732 \f]
START_TEST(s21_log_39)
{
    double value = 0.05;

    s21_test_log(value);
}

/// @brief \f[ log(0.5) = -0.693147 \f]
START_TEST(s21_log_40)
{
    double value = 0.5;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000006) = -14.326336 \f]
START_TEST(s21_log_41)
{
    double value = 0.0000006;

    s21_test_log(value);
}

/// @brief \f[ log(0.000006) = -12.023751 \f]
START_TEST(s21_log_42)
{
    double value = 0.000006;

    s21_test_log(value);
}

/// @brief \f[ log(0.00006) = -9.721166 \f]
START_TEST(s21_log_43)
{
    double value = 0.00006;

    s21_test_log(value);
}

/// @brief \f[ log(0.0006) = -7.418581 \f]
START_TEST(s21_log_44)
{
    double value = 0.0006;

    s21_test_log(value);
}

/// @brief \f[ log(0.006) = -5.115996 \f]
START_TEST(s21_log_45)
{
    double value = 0.006;

    s21_test_log(value);
}

/// @brief \f[ log(0.06) = -2.813411 \f]
START_TEST(s21_log_46)
{
    double value = 0.06;

    s21_test_log(value);
}

/// @brief \f[ log(0.6) = -0.510826 \f]
START_TEST(s21_log_47)
{
    double value = 0.6;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000007) = -14.172186 \f]
START_TEST(s21_log_48)
{
    double value = 0.0000007;

    s21_test_log(value);
}

/// @brief \f[ log(0.000007) = -11.869600 \f]
START_TEST(s21_log_49)
{
    double value = 0.000007;

    s21_test_log(value);
}

/// @brief \f[ log(0.00007) = -9.567015 \f]
START_TEST(s21_log_50)
{
    double value = 0.00007;

    s21_test_log(value);
}

/// @brief \f[ log(0.0007) = -7.264430 \f]
START_TEST(s21_log_51)
{
    double value = 0.0007;

    s21_test_log(value);
}

/// @brief \f[ log(0.007) = -4.961845 \f]
START_TEST(s21_log_52)
{
    double value = 0.007;

    s21_test_log(value);
}

/// @brief \f[ log(0.07) = -2.659260 \f]
START_TEST(s21_log_53)
{
    double value = 0.07;

    s21_test_log(value);
}

/// @brief \f[ log(0.7) = -0.356675 \f]
START_TEST(s21_log_54)
{
    double value = 0.7;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000008) = -14.038654 \f]
START_TEST(s21_log_55)
{
    double value = 0.0000008;

    s21_test_log(value);
}

/// @brief \f[ log(0.000008) = -11.736069 \f]
START_TEST(s21_log_56)
{
    double value = 0.000008;

    s21_test_log(value);
}

/// @brief \f[ log(0.00008) = -9.433484 \f]
START_TEST(s21_log_57)
{
    double value = 0.00008;

    s21_test_log(value);
}

/// @brief \f[ log(0.0008) = -7.130899 \f]
START_TEST(s21_log_58)
{
    double value = 0.0008;

    s21_test_log(value);
}

/// @brief \f[ log(0.008) = -4.828314 \f]
START_TEST(s21_log_59)
{
    double value = 0.008;

    s21_test_log(value);
}

/// @brief \f[ log(0.08) = -2.525729 \f]
START_TEST(s21_log_60)
{
    double value = 0.08;

    s21_test_log(value);
}

/// @brief \f[ log(0.8) = -0.223144 \f]
START_TEST(s21_log_61)
{
    double value = 0.8;

    s21_test_log(value);
}

/// @brief \f[ log(0.0000009) = -13.920871 \f]
START_TEST(s21_log_62)
{
    double value = 0.0000009;

    s21_test_log(value);
}

/// @brief \f[ log(0.000009) = -11.618286 \f]
START_TEST(s21_log_63)
{
    double value = 0.000009;

    s21_test_log(value);
}

/// @brief \f[ log(0.00009) = -9.315701 \f]
START_TEST(s21_log_64)
{
    double value = 0.00009;

    s21_test_log(value);
}

/// @brief \f[ log(0.0009) = -7.013116 \f]
START_TEST(s21_log_65)
{
    double value = 0.0009;

    s21_test_log(value);
}

/// @brief \f[ log(0.009) = -4.710531 \f]
START_TEST(s21_log_66)
{
    double value = 0.009;

    s21_test_log(value);
}

/// @brief \f[ log(0.09) = -2.407946 \f]
START_TEST(s21_log_67)
{
    double value = 0.09;

    s21_test_log(value);
}

/// @brief \f[ log(0.9) = -0.105361 \f]
START_TEST(s21_log_68)
{
    double value = 0.9;

    s21_test_log(value);
}

/// @brief \f[ log(0.123456) = -2.091870 \f]
START_TEST(s21_log_69)
{
    double value = 0.123456;

    s21_test_log(value);
}

/// @brief \f[ log(0.345621) = -1.062412 \f]
START_TEST(s21_log_70)
{
    double value = 0.345621;

    s21_test_log(value);
}

/// @brief \f[ log(0.8788787) = -0.129108 \f]
START_TEST(s21_log_71)
{
    double value = 0.8788787;

    s21_test_log(value);
}

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
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief Checking values in the interval (0;1)
 * 
 * @return Suite* 
 */
Suite *s21_log_second_case(void)
{
    Suite *math = suite_create("s21_math (s21_log second case)");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_6);
    tcase_add_test(tc_log, s21_log_7);
    tcase_add_test(tc_log, s21_log_8);
    tcase_add_test(tc_log, s21_log_9);
    tcase_add_test(tc_log, s21_log_10);
    tcase_add_test(tc_log, s21_log_11);
    tcase_add_test(tc_log, s21_log_12);
    tcase_add_test(tc_log, s21_log_13);
    tcase_add_test(tc_log, s21_log_14);
    tcase_add_test(tc_log, s21_log_15);
    tcase_add_test(tc_log, s21_log_16);
    tcase_add_test(tc_log, s21_log_17);
    tcase_add_test(tc_log, s21_log_18);
    tcase_add_test(tc_log, s21_log_19);
    tcase_add_test(tc_log, s21_log_20);
    tcase_add_test(tc_log, s21_log_21);
    tcase_add_test(tc_log, s21_log_22);
    tcase_add_test(tc_log, s21_log_23);
    tcase_add_test(tc_log, s21_log_24);
    tcase_add_test(tc_log, s21_log_25);
    tcase_add_test(tc_log, s21_log_26);
    tcase_add_test(tc_log, s21_log_27);
    tcase_add_test(tc_log, s21_log_28);
    tcase_add_test(tc_log, s21_log_29);
    tcase_add_test(tc_log, s21_log_30);
    tcase_add_test(tc_log, s21_log_31);
    tcase_add_test(tc_log, s21_log_32);
    tcase_add_test(tc_log, s21_log_33);
    tcase_add_test(tc_log, s21_log_34);
    tcase_add_test(tc_log, s21_log_35);
    tcase_add_test(tc_log, s21_log_36);
    tcase_add_test(tc_log, s21_log_37);
    tcase_add_test(tc_log, s21_log_38);
    tcase_add_test(tc_log, s21_log_39);
    tcase_add_test(tc_log, s21_log_40);
    tcase_add_test(tc_log, s21_log_41);
    tcase_add_test(tc_log, s21_log_42);
    tcase_add_test(tc_log, s21_log_43);
    tcase_add_test(tc_log, s21_log_44);
    tcase_add_test(tc_log, s21_log_45);
    tcase_add_test(tc_log, s21_log_46);
    tcase_add_test(tc_log, s21_log_47);
    tcase_add_test(tc_log, s21_log_48);
    tcase_add_test(tc_log, s21_log_49);
    tcase_add_test(tc_log, s21_log_50);
    tcase_add_test(tc_log, s21_log_51);
    tcase_add_test(tc_log, s21_log_52);
    tcase_add_test(tc_log, s21_log_53);
    tcase_add_test(tc_log, s21_log_54);
    tcase_add_test(tc_log, s21_log_55);
    tcase_add_test(tc_log, s21_log_56);
    tcase_add_test(tc_log, s21_log_57);
    tcase_add_test(tc_log, s21_log_58);
    tcase_add_test(tc_log, s21_log_59);
    tcase_add_test(tc_log, s21_log_60);
    tcase_add_test(tc_log, s21_log_61);
    tcase_add_test(tc_log, s21_log_62);
    tcase_add_test(tc_log, s21_log_63);
    tcase_add_test(tc_log, s21_log_64);
    tcase_add_test(tc_log, s21_log_65);
    tcase_add_test(tc_log, s21_log_66);
    tcase_add_test(tc_log, s21_log_67);
    tcase_add_test(tc_log, s21_log_68);
    tcase_add_test(tc_log, s21_log_69);
    tcase_add_test(tc_log, s21_log_70);
    tcase_add_test(tc_log, s21_log_71);
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
    #ifdef DEBUG
        s21_test_print(original_func, implementation);
    #endif
    } else {
        printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
    }

    s21_test_print(original_func, implementation);


    ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}
