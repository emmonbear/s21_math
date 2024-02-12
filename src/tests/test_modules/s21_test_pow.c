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
START_TEST(s21_pow_1) {
  double base = 2.0;
  double exp = 5.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 3^4 = 81 \f]
START_TEST(s21_pow_2) {
  double base = 3.0;
  double exp = 4.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 5^5 = 3125 \f]
START_TEST(s21_pow_3) {
  double base = 5.0;
  double exp = 5.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 7^1 = 7 \f]
START_TEST(s21_pow_4) {
  double base = 7.0;
  double exp = 1.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 8^0 = 1 \f]
START_TEST(s21_pow_5) {
  double base = 8.0;
  double exp = 0.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 9^4 = 6561 \f]
START_TEST(s21_pow_6) {
  double base = 9.0;
  double exp = 4.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 11^3 = 1331 \f]
START_TEST(s21_pow_7) {
  double base = 11.0;
  double exp = 3.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 15^5 = 759375 \f]
START_TEST(s21_pow_8) {
  double base = 15.0;
  double exp = 5.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 21^4 = 194481 \f]
START_TEST(s21_pow_9) {
  double base = 21.0;
  double exp = 4.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 25^6 = 244140625 \f]
START_TEST(s21_pow_10) {
  double base = 25.0;
  double exp = 6.0;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.7345^2.1531 = 3.273152 \f]
START_TEST(s21_pow_11) {
  double base = 1.7345;
  double exp = 2.1531;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.7345^2.1531 = -nan \f]
START_TEST(s21_pow_12) {
  double base = -1.7345;
  double exp = 2.1531;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.7345^-2.1531 = 0.305516 \f]
START_TEST(s21_pow_13) {
  double base = 1.7345;
  double exp = -2.1531;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.7345^-2.1531 = -nan \f]
START_TEST(s21_pow_14) {
  double base = -1.7345;
  double exp = -2.1531;

  s21_test_pow(base, exp);
}

/// @brief \f[ 25.0004321^4.4444406 = 1633408.051937 \f]
START_TEST(s21_pow_15) {
  double base = 25.0004321;
  double exp = 4.4444406;

  s21_test_pow(base, exp);
}

/// @brief \f[ -25.0004321^4.4444406 = -nan \f]
START_TEST(s21_pow_16) {
  double base = -25.0004321;
  double exp = 4.4444406;

  s21_test_pow(base, exp);
}

/// @brief \f[ 25.0004321^-4.4444406 = 0.000001 \f]
START_TEST(s21_pow_17) {
  double base = 25.0004321;
  double exp = -4.4444406;

  s21_test_pow(base, exp);
}

/// @brief \f[ -25.0004321^-4.4444406 = -nan \f]
START_TEST(s21_pow_18) {
  double base = -25.0004321;
  double exp = -4.4444406;

  s21_test_pow(base, exp);
}

/// @brief \f[ 0.417275^123.523423 = 0.000000 \f]
START_TEST(s21_pow_19) {
  double base = 0.417275;
  double exp = 123.523423;

  s21_test_pow(base, exp);
}

/// @brief \f[ -0.417275^123.523423 = -nan \f]
START_TEST(s21_pow_20) {
  double base = -0.417275;
  double exp = 123.523423;

  s21_test_pow(base, exp);
}

/// @brief \f[ 0.417275^-23.523423 = 135890.441136 \f]
START_TEST(s21_pow_21) {
  double base = 0.417275;
  double exp = -13.523423;

  s21_test_pow(base, exp);
}

/// @brief \f[ -0.417275^-123.523423 = -nan \f]
START_TEST(s21_pow_22) {
  double base = -0.417275;
  double exp = -123.523423;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.543^-inf = 0.000000 \f]
START_TEST(s21_pow_23) {
  double base = -1.543;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.543^-inf = 0.000000 \f]
START_TEST(s21_pow_24) {
  double base = 1.543;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ inf^-inf = 0.000000 \f]
START_TEST(s21_pow_25) {
  double base = S21_INF;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ -inf^-inf = 0.000000 \f]
START_TEST(s21_pow_26) {
  double base = -S21_INF;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.543^inf = inf \f]
START_TEST(s21_pow_27) {
  double base = -1.543;
  double exp = S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.543^inf= inf \f]
START_TEST(s21_pow_28) {
  double base = 1.543;
  double exp = S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ inf^inf = inf \f]
START_TEST(s21_pow_29) {
  double base = S21_INF;
  double exp = S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ -inf^inf = inf \f]
START_TEST(s21_pow_30) {
  double base = -S21_INF;
  double exp = S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ -0.52366^inf = 0.000000 \f]
START_TEST(s21_pow_31) {
  double base = -0.52366;
  double exp = S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ 0.52366^inf = 0.000000 \f]
START_TEST(s21_pow_32) {
  double base = 0.52366;
  double exp = S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ -0.52366^-inf = inf \f]
START_TEST(s21_pow_33) {
  double base = -0.52366;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ 0.52366^-inf = inf \f]
START_TEST(s21_pow_34) {
  double base = 0.52366;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1^-inf = 1.000000 \f]
START_TEST(s21_pow_35) {
  double base = 1;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1^-inf = 1.000000 \f]
START_TEST(s21_pow_36) {
  double base = -1;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ -inf^-1.5677 = 0.000000 \f]
START_TEST(s21_pow_37) {
  double base = -S21_INF;
  double exp = -1.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ -inf^-0.5677 = 0.000000 \f]
START_TEST(s21_pow_38) {
  double base = -S21_INF;
  double exp = -0.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ -inf^0.5677 = inf \f]
START_TEST(s21_pow_39) {
  double base = -S21_INF;
  double exp = 0.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ -inf^1.5677 = inf \f]
START_TEST(s21_pow_40) {
  double base = -S21_INF;
  double exp = 1.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ inf^-1.5677 = 0.000000 \f]
START_TEST(s21_pow_41) {
  double base = S21_INF;
  double exp = -1.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ inf^-0.5677 = 0.000000 \f]
START_TEST(s21_pow_42) {
  double base = S21_INF;
  double exp = -0.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ inf^0.5677 = inf \f]
START_TEST(s21_pow_43) {
  double base = S21_INF;
  double exp = 0.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ inf^1.5677 = inf \f]
START_TEST(s21_pow_44) {
  double base = S21_INF;
  double exp = 1.5677;

  s21_test_pow(base, exp);
}

/// @brief \f[ 0.7857342^NaN = -nan \f]
START_TEST(s21_pow_45) {
  double base = 0.7857342;
  double exp = S21_NAN;

  s21_test_pow(base, exp);
}

/// @brief \f[ -0.7857342^NaN = -nan \f]
START_TEST(s21_pow_46) {
  double base = -0.7857342;
  double exp = S21_NAN;

  s21_test_pow(base, exp);
}

/// @brief \f[ 11.7857342^NaN = -nan \f]
START_TEST(s21_pow_47) {
  double base = 11.7857342;
  double exp = S21_NAN;

  s21_test_pow(base, exp);
}

/// @brief \f[ -11.7857342^NaN = -nan \f]
START_TEST(s21_pow_48) {
  double base = -11.7857342;
  double exp = S21_NAN;

  s21_test_pow(base, exp);
}

/// @brief \f[ inf^NaN = -nan \f]
START_TEST(s21_pow_49) {
  double base = S21_INF;
  double exp = S21_NAN;

  s21_test_pow(base, exp);
}

/// @brief \f[ -inf^NaN = -nan \f]
START_TEST(s21_pow_50) {
  double base = -S21_INF;
  double exp = S21_NAN;

  s21_test_pow(base, exp);
}

/// @brief \f[ NaN^0.7857342 = -nan \f]
START_TEST(s21_pow_51) {
  double base = S21_NAN;
  double exp = 0.7857342;

  s21_test_pow(base, exp);
}

/// @brief \f[ NaN^-0.7857342 = -nan \f]
START_TEST(s21_pow_52) {
  double base = S21_NAN;
  double exp = -0.7857342;

  s21_test_pow(base, exp);
}

/// @brief \f[ NaN^1.7857342 = -nan \f]
START_TEST(s21_pow_53) {
  double base = S21_NAN;
  double exp = 1.7857342;

  s21_test_pow(base, exp);
}

/// @brief \f[ NaN^-1.7857342 = -nan \f]
START_TEST(s21_pow_54) {
  double base = S21_NAN;
  double exp = -1.7857342;

  s21_test_pow(base, exp);
}

/// @brief \f[ NaN^inf = -nan \f]
START_TEST(s21_pow_55) {
  double base = S21_NAN;
  double exp = S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ NaN^-inf = -nan \f]
START_TEST(s21_pow_56) {
  double base = S21_NAN;
  double exp = -S21_INF;

  s21_test_pow(base, exp);
}

/// @brief \f[ NaN^NaN = -nan \f]
START_TEST(s21_pow_57) {
  double base = S21_NAN;
  double exp = S21_NAN;

  s21_test_pow(base, exp);
}

/// @brief \f[ 8.4326^4.823611 = 29273.730974 \f]
START_TEST(s21_pow_58) {
  double base = 8.4326;
  double exp = 4.823611;

  s21_test_pow(base, exp);
}

/// @brief \f[ -8.4326^4.823611 = -nan \f]
START_TEST(s21_pow_59) {
  double base = -8.4326;
  double exp = 4.823611;

  s21_test_pow(base, exp);
}

/// @brief \f[ 8.4326^-4.823611 = 0.000034 \f]
START_TEST(s21_pow_60) {
  double base = 8.4326;
  double exp = -4.823611;

  s21_test_pow(base, exp);
}

/// @brief \f[ -8.4326^-4.823611 = -nan \f]
START_TEST(s21_pow_61) {
  double base = -8.4326;
  double exp = -4.823611;

  s21_test_pow(base, exp);
}

/// @brief \f[ 14656.32867462^0.223611 = 8.542187 \f]
START_TEST(s21_pow_62) {
  double base = 14656.32867462;
  double exp = 0.223611;

  s21_test_pow(base, exp);
}

/// @brief \f[ 14656.32867462^-0.223611 = -nan \f]
START_TEST(s21_pow_63) {
  double base = -14656.32867462;
  double exp = 0.223611;

  s21_test_pow(base, exp);
}

/// @brief \f[ -14656.32867462^0.223611 = -nan \f]
START_TEST(s21_pow_64) {
  double base = -14656.32867462;
  double exp = 0.223611;

  s21_test_pow(base, exp);
}

/// @brief \f[ -14656.32867462^-0.223611 = -nan \f]
START_TEST(s21_pow_65) {
  double base = -14656.32867462;
  double exp = -0.223611;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.0100101^100.002031 = 2.707575 \f]
START_TEST(s21_pow_66) {
  double base = 1.0100101;
  double exp = 100.002031;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.0100101^100.002031 = -nan \f]
START_TEST(s21_pow_67) {
  double base = -1.0100101;
  double exp = 100.002031;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.0100101^-100.002031 = 0.369334 \f]
START_TEST(s21_pow_68) {
  double base = 1.0100101;
  double exp = -100.002031;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.0100101^-100.002031 = -nan \f]
START_TEST(s21_pow_69) {
  double base = -1.0100101;
  double exp = -100.002031;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.0043234^1000.0222031 = 74.752058 \f]
START_TEST(s21_pow_70) {
  double base = 1.0043234;
  double exp = 1000.0222031;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.0043234^1000.0222031 = -nan \f]
START_TEST(s21_pow_71) {
  double base = -1.0043234;
  double exp = 1000.0222031;

  s21_test_pow(base, exp);
}

/// @brief \f[ 1.0043234^-1000.0222031 = 0.013378 \f]
START_TEST(s21_pow_72) {
  double base = 1.0043234;
  double exp = -1000.0222031;

  s21_test_pow(base, exp);
}

/// @brief \f[ -1.0043234^-1000.0222031 = -nan \f]
START_TEST(s21_pow_73) {
  double base = -1.0043234;
  double exp = -1000.0222031;

  s21_test_pow(base, exp);
}

/**
 * @brief First set of tests.
 *
 * @return Suite*
 */
Suite *s21_pow_first_case(void) {
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
  tcase_add_test(tc_pow, s21_pow_11);
  tcase_add_test(tc_pow, s21_pow_12);
  tcase_add_test(tc_pow, s21_pow_13);
  tcase_add_test(tc_pow, s21_pow_14);
  tcase_add_test(tc_pow, s21_pow_15);
  tcase_add_test(tc_pow, s21_pow_16);
  tcase_add_test(tc_pow, s21_pow_17);
  tcase_add_test(tc_pow, s21_pow_18);
  tcase_add_test(tc_pow, s21_pow_19);
  tcase_add_test(tc_pow, s21_pow_20);
  tcase_add_test(tc_pow, s21_pow_21);
  tcase_add_test(tc_pow, s21_pow_22);
  tcase_add_test(tc_pow, s21_pow_23);
  tcase_add_test(tc_pow, s21_pow_24);
  tcase_add_test(tc_pow, s21_pow_25);
  tcase_add_test(tc_pow, s21_pow_26);
  tcase_add_test(tc_pow, s21_pow_27);
  tcase_add_test(tc_pow, s21_pow_28);
  tcase_add_test(tc_pow, s21_pow_29);
  tcase_add_test(tc_pow, s21_pow_30);
  tcase_add_test(tc_pow, s21_pow_31);
  tcase_add_test(tc_pow, s21_pow_32);
  tcase_add_test(tc_pow, s21_pow_33);
  tcase_add_test(tc_pow, s21_pow_34);
  tcase_add_test(tc_pow, s21_pow_35);
  tcase_add_test(tc_pow, s21_pow_36);
  tcase_add_test(tc_pow, s21_pow_37);
  tcase_add_test(tc_pow, s21_pow_38);
  tcase_add_test(tc_pow, s21_pow_39);
  tcase_add_test(tc_pow, s21_pow_40);
  tcase_add_test(tc_pow, s21_pow_41);
  tcase_add_test(tc_pow, s21_pow_42);
  tcase_add_test(tc_pow, s21_pow_43);
  tcase_add_test(tc_pow, s21_pow_44);
  tcase_add_test(tc_pow, s21_pow_45);
  tcase_add_test(tc_pow, s21_pow_46);
  tcase_add_test(tc_pow, s21_pow_47);
  tcase_add_test(tc_pow, s21_pow_48);
  tcase_add_test(tc_pow, s21_pow_49);
  tcase_add_test(tc_pow, s21_pow_50);
  tcase_add_test(tc_pow, s21_pow_51);
  tcase_add_test(tc_pow, s21_pow_52);
  tcase_add_test(tc_pow, s21_pow_53);
  tcase_add_test(tc_pow, s21_pow_54);
  tcase_add_test(tc_pow, s21_pow_55);
  tcase_add_test(tc_pow, s21_pow_56);
  tcase_add_test(tc_pow, s21_pow_57);
  tcase_add_test(tc_pow, s21_pow_58);
  tcase_add_test(tc_pow, s21_pow_59);
  tcase_add_test(tc_pow, s21_pow_60);
  tcase_add_test(tc_pow, s21_pow_61);
  tcase_add_test(tc_pow, s21_pow_62);
  tcase_add_test(tc_pow, s21_pow_63);
  tcase_add_test(tc_pow, s21_pow_64);
  tcase_add_test(tc_pow, s21_pow_65);
  tcase_add_test(tc_pow, s21_pow_66);
  tcase_add_test(tc_pow, s21_pow_67);
  tcase_add_test(tc_pow, s21_pow_68);
  tcase_add_test(tc_pow, s21_pow_69);
  tcase_add_test(tc_pow, s21_pow_70);
  tcase_add_test(tc_pow, s21_pow_71);
  tcase_add_test(tc_pow, s21_pow_72);
  tcase_add_test(tc_pow, s21_pow_73);
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
void s21_test_pow(double base, double exp) {
  long double original_func = pow(base, exp);
  long double implementation = s21_pow(base, exp);

  printf("Input value: %lf^%lf\n", base, exp);

  long double first = 0;
  long double second = 0;

  if (S21_IS_INF(original_func)) {
    first = S21_IS_INF(original_func);
    second = S21_IS_INF(implementation);
  } else if (S21_IS_NAN(original_func)) {
    first = S21_IS_NAN(original_func);
    second = S21_IS_NAN(implementation);
  } else {
    first = original_func;
    second = implementation;
  }

  if (fabsl(first - second) > COMPARE_ACCURACY) {
    printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n");
  } else {
    printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
  }

#ifdef DEBUG
  s21_test_print(original_func, implementation);
#endif

  ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}
