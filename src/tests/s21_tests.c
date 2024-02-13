/**
 * @file s21_tests.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Module for assembling all test modules
 * @version 1.0
 * @date 2024-01-22
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "s21_tests.h"

#include <stdio.h>
#include <string.h>

static void test_function(Suite *(**array)(void), size_t size, char *name,
                          int *passed_count, int *failed_count);
static void conclusion(int passed_count, int failed_count);
static void function_declaration(char *function);
static int test_suite(Suite *test, int *passed_count);
static void greetings();
static void line();

/**
 * @brief Function to start testing modules.
 *
 * @return int - error code.
 * @retval EXIT_SUCCESS = 0 - if the tests pass successfully.
 * @retval EXIT_FAILURE = 1 - if the tests pass unsuccessful.
 */
int main(void) {
  int failed_count = 0;
  int passed_count = 0;

  greetings();

#ifdef ABS_TEST
#define ABS_TEST
  Suite *(*s21_abs[])(void) = {
      s21_abs_first_case,
      s21_abs_second_case,
  };
  test_function(s21_abs, sizeof(s21_abs) / sizeof(s21_abs[0]), "S21_ABS",
                &passed_count, &failed_count);
#endif

#ifdef FABS_TEST
#define FABS_TEST
  Suite *(*s21_fabs[])(void) = {
    s21_fabs_first_case,
    s21_fabs_second_case,
    s21_fabs_third_case,
    s21_fabs_fourth_case,
    s21_fabs_fifth_case,
    s21_fabs_sixth_case,
    s21_fabs_seventh_case,
    s21_fabs_eighth_case,
    s21_fabs_ninth_case,
    s21_fabs_tenth_case,
    s21_fabs_edge_case,
  };
  test_function(s21_fabs, sizeof(s21_fabs) / sizeof(s21_fabs[0]), "S21_FABS",
                &passed_count, &failed_count);
#endif

#ifdef FLOOR_TEST
#define FLOOR_TEST
  Suite *(*s21_floor[])(void) = {
    s21_floor_first_case,
    s21_floor_second_case,
    s21_floor_third_case,
    s21_floor_fourth_case,
    s21_floor_fifth_case,
    s21_floor_sixth_case,
    s21_floor_seventh_case,
    s21_floor_eighth_case,
    s21_floor_ninth_case,
    s21_floor_tenth_case,
};

  test_function(s21_floor, sizeof(s21_floor) / sizeof(s21_floor[0]),
                "S21_FLOOR", &passed_count, &failed_count);
#endif

#ifdef CEIL_TEST
#define CEIL_TEST
  Suite *(*s21_ceil[])(void) = {
    s21_ceil_first_case,
    s21_ceil_second_case,
    s21_ceil_third_case,
    s21_ceil_fourth_case,
    s21_ceil_fifth_case,
    s21_ceil_sixth_case,
    s21_ceil_seventh_case,
    s21_ceil_eighth_case,
    s21_ceil_ninth_case,
    s21_ceil_tenth_case,
    s21_ceil_edge_case,
  };
  test_function(s21_ceil, sizeof(s21_ceil) / sizeof(s21_ceil[0]), "S21_CEIL",
                &passed_count, &failed_count);
#endif

#ifdef EXP_TEST
#define EXP_TEST
  Suite *(*s21_exp[])(void) = {
    s21_exp_first_case,
    s21_exp_second_case,
    s21_exp_third_case,
    s21_exp_forth_case,
    s21_exp_fifth_case,
    s21_exp_sixth_case,
    s21_exp_seventh_case,
    s21_exp_eighth_case,
    s21_exp_ninth_case,
    s21_exp_tenth_case,
  };
  test_function(s21_exp, sizeof(s21_exp) / sizeof(s21_exp[0]), "S21_EXP",
                &passed_count, &failed_count);
#endif

#ifdef FMOD_TEST
#define FMOD_TEST
  Suite *(*s21_fmod[])(void) = {
      s21_fmod_first_case,
  };
  test_function(s21_fmod, sizeof(s21_fmod) / sizeof(s21_fmod[0]), "S21_FMOD",
                &passed_count, &failed_count);
#endif

#ifdef LOG_TEST
#define LOG_TEST
  Suite *(*s21_log[])(void) = {
    s21_log_first_case,
    s21_log_second_case,
    s21_log_third_case,
    s21_log_fourth_case,
    s21_log_fifth_case,
    s21_log_sixth_case,
    s21_log_seventh_case,
    s21_log_eighth_case,
    s21_log_ninth_case,
    s21_log_tenth_case,
};

  test_function(s21_log, sizeof(s21_log) / sizeof(s21_log[0]), "S21_LOG",
                &passed_count, &failed_count);
#endif

#ifdef SQRT_TEST
#define SQRT_TEST
  Suite *(*s21_sqrt[])(void) = {
      s21_sqrt_first_case,
  };
  test_function(s21_sqrt, sizeof(s21_sqrt) / sizeof(s21_sqrt[0]), "S21_SQRT",
                &passed_count, &failed_count);
#endif

#define POW_TEST
#ifdef POW_TEST
  Suite *(*s21_pow[])(void) = {
    // s21_pow_first_case,
    // s21_pow_second_case,
    // s21_pow_third_case,
    // s21_pow_fourth_case,
    // s21_pow_fifth_case,*
    // s21_pow_sixth_case,
    s21_pow_seventh_case,
    // s21_pow_eighth_case,*
    // s21_pow_ninth_case,
    // s21_pow_tenth_case,
};
  test_function(s21_pow, sizeof(s21_pow) / sizeof(s21_pow[0]), "S21_POW",
                &passed_count, &failed_count);
#endif

#ifdef SIN_TEST
#define SIN_TEST
  Suite *(*s21_sin[])(void) = {
    s21_sin_first_case,
    s21_sin_second_case,
    s21_sin_third_case,
    s21_sin_fourth_case,
    s21_sin_fifth_case,
    s21_sin_sixth_case,
    s21_sin_seventh_case,
    s21_sin_eighth_case,
    s21_sin_ninth_case,
    s21_sin_tenth_case,
};

  test_function(s21_sin, sizeof(s21_sin) / sizeof(s21_sin[0]), "S21_SIN",
                &passed_count, &failed_count);
#endif

#ifdef COS_TEST
#define COS_TEST
  Suite *(*s21_cos[])(void) = {
    s21_cos_first_case,
    s21_cos_second_case,
    s21_cos_third_case,
    s21_cos_fourth_case,
    s21_cos_fifth_case,
    s21_cos_sixth_case,
    s21_cos_seventh_case,
    s21_cos_eighth_case,
    s21_cos_ninth_case,
    s21_cos_tenth_case,
};

  test_function(s21_cos, sizeof(s21_cos) / sizeof(s21_cos[0]), "S21_COS",
                &passed_count, &failed_count);
#endif

#ifdef TAN_TEST
#define TAN_TEST
  Suite *(*s21_tan[])(void) = {
    s21_tan_first_case,
    s21_tan_second_case,
    s21_tan_third_case,
    s21_tan_fourth_case,
    s21_tan_fifth_case,
    s21_tan_sixth_case,
    s21_tan_seventh_case,
    s21_tan_eighth_case,
    s21_tan_ninth_case,
    s21_tan_tenth_case,
};

  test_function(s21_tan, sizeof(s21_tan) / sizeof(s21_tan[0]), "S21_TAN",
                &passed_count, &failed_count);
#endif

#ifdef ASIN_TEST
#define ASIN_TEST
  Suite *(*s21_asin[])(void) = {
    s21_asin_first_case,
    s21_asin_second_case,
    s21_asin_third_case,
    s21_asin_fourth_case,
    s21_asin_fifth_case,
    s21_asin_sixth_case,
    s21_asin_seventh_case,
    s21_asin_eighth_case,
    s21_asin_ninth_case,
    s21_asin_tenth_case,
};

  test_function(s21_asin, sizeof(s21_asin) / sizeof(s21_asin[0]), "S21_ASIN",
                &passed_count, &failed_count);
#endif

#ifdef ACOS_TEST
#define ACOS_TEST
  Suite *(*s21_acos[])(void) = {
    s21_acos_first_case,
    s21_acos_second_case,
    s21_acos_third_case,
    s21_acos_fourth_case,
    s21_acos_fifth_case,
    s21_acos_sixth_case,
    s21_acos_seventh_case,
    s21_acos_eighth_case,
    s21_acos_ninth_case,
    s21_acos_tenth_case,
};

  test_function(s21_acos, sizeof(s21_acos) / sizeof(s21_acos[0]), "S21_ACOS",
                &passed_count, &failed_count);
#endif

#ifdef ATAN_TEST
#define ATAN_TEST
  Suite *(*s21_atan[])(void) = {
    s21_atan_first_case,
    s21_atan_second_case,
    s21_atan_third_case,
    s21_atan_fourth_case,
    s21_atan_fifth_case,
    s21_atan_sixth_case,
    s21_atan_seventh_case,
    s21_atan_eighth_case,
    s21_atan_ninth_case,
    s21_atan_tenth_case,
};

  test_function(s21_atan, sizeof(s21_atan) / sizeof(s21_atan[0]), "S21_ATAN",
                &passed_count, &failed_count);
#endif

  conclusion(passed_count, failed_count);

  return (failed_count) ? EXIT_FAILURE : EXIT_SUCCESS;
}

/**
 * @brief Function for testing the specified Suite.
 *
 * @param[out] test input Suite test.
 * @param[out] passed_count counter of successfully passed tests.
 *
 * @return int - error code.
 * @retval EXIT_SUCCESS = 0 - if the tests pass successfully.
 * @retval EXIT_FAILURE = 1 - if the tests pass unsuccessful.
 */
static int test_suite(Suite *test, int *passed_count) {
  SRunner *suite_runner = srunner_create(test);

  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  *passed_count += srunner_ntests_run(suite_runner) - failed_count;
  srunner_free(suite_runner);

  return failed_count;
}

/**
 * @brief Prints greeting message.
 */
static void greetings() {
  printf(
      "\033[0;33m __          __  _                            _          _    "
      "        _   _             \n");
  printf(
      " \\ \\        / / | |                          | |        | |          "
      "| | (_)            \n");
  printf(
      "  \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___  | |_ ___   | |_ ___  "
      "___| |_ _ _ __   __ _ \n");
  printf(
      "   \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\  | __/ _ "
      "\\/ __| __| | '_ \\ / _` |\n");
  printf(
      "    \\  /\\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | ||  __/\\__ "
      "\\ |_| | | | | (_| |\n");
  printf(
      "     \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/   "
      "\\__\\___||___/\\__|_|_| |_|\\__, |\n");
  printf(
      "                                                                        "
      "           __/ |\n");
  printf(
      "                                                                        "
      "          |___/ \n");

  printf(
      "                                    _                                   "
      "                  \n");
  printf(
      "                                   | |                                  "
      "                  \n");
  printf(
      "                                   | |__  _   _                         "
      "                  \n");
  printf(
      "                                   | '_ \\| | | |                       "
      "                   \n");
  printf(
      "                                   | |_) | |_| |                        "
      "                  \n");
  printf(
      "                                   |_.__/ \\__, |                       "
      "                   \n");
  printf(
      "                       _                   __/ |   _     _              "
      "     \n");
  printf(
      "                      | |                 |___/   | |   | |             "
      "     \n");
  printf(
      "                      | | _____  ___ ___  __ _  __| | __| | __ _        "
      "     \n");
  printf(
      "                      | |/ / _ \\/ __/ __|/ _` |/ _` |/ _` |/ _` |      "
      "      \n");
  printf(
      "                      |   < (_) \\__ \\__ \\ (_| | (_| | (_| | (_| |    "
      "        \n");
  printf(
      "                      |_|\\_\\___/|___/___/\\__,_|\\__,_|\\__,_|\\__,_| "
      "           \n");
  printf(
      "                                                     | |               "
      "\n");
  printf(
      "                  ___ _ __ ___  _ __ ___   ___  _ __ | |__   ___  __ _ "
      "\n");
  printf(
      "                 / _ \\ '_ ` _ \\| '_ ` _ \\ / _ \\| '_ \\| '_ \\ / _ "
      "\\/ _` |\n");
  printf(
      "                |  __/ | | | | | | | | | | (_) | | | | |_) |  __/ (_| "
      "|\n");
  printf(
      "                 \\___|_| |_| |_|_| |_| |_|\\___/|_| |_|_.__/ "
      "\\___|\\__,_|\n\033[0m");
}

/**
 * @brief Collects all functions for testing into a single block.
 *
 * @param array array of function under test.
 * @param size array size.
 * @param name name of the function being tested.
 * @param passed_count number of tests passed.
 * @param failed_count number of failed tests.
 */
static void test_function(Suite *(**array)(void), size_t size, char *name,
                          int *passed_count, int *failed_count) {
  function_declaration(name);
  for (size_t i = 0; i < size; i++) {
    line();
    *failed_count += test_suite(array[i](), passed_count);
  }
  line();
}

/**
 * @brief Prints function declaration message.
 *
 * @param[in] function name of testing function.
 */
static void function_declaration(char *function) {
  char space[5] = {0};
  int str_len = strlen(function);
  if (str_len == 7) {
    strcpy(space, "  ");
  } else if (str_len == 8) {
    strcpy(space, " ");
  }
  printf(
      "\033[0;33m\n\n "
      "________________________________________________________________________"
      "______________\n");
  printf(
      "|                                                                       "
      "               |\n");
  printf(
      "|                                     %s TESTS %s                       "
      "          |\n",
      function, space);
  printf(
      "|_______________________________________________________________________"
      "_______________|\n\n\n\033[0m");
}

/**
 * @brief Prints the dividing line.
 */
static void line() {
  printf(
      "\033[0;33m**************************************************************"
      "**************************\n\033[0m");
}

/**
 * @brief Prints test results.
 *
 * @param[in] passed_count number of tests passed.
 * @param[in] failed_count number of failed tests.
 */
static void conclusion(int passed_count, int failed_count) {
  printf(
      "\033[0;33m\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
      "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf(
      "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TOTAL RESULTS "
      "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf(
      "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
      "~~~~~~~~~~~~~~~~\n");
  printf(
      "                                                                        "
      " \n");
  printf(
      "                               PASSED %d tests from %d                  "
      "      \n",
      passed_count, passed_count + failed_count);
  printf(
      "                                                                        "
      " \n");
  printf(
      "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
      "~~~~~~~~~~~~~~~~\n\033[0m\n");
}