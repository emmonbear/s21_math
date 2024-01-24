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

static int test_suite(Suite *test);

/**
 * @brief Function to start testing modules.
 * 
 * @return int - error code.
 * @retval EXIT_SUCCESS = 0 - if the tests pass successfully.
 * @retval EXIT_FAILURE = 1 - if the tests pass unsuccessful.
 */
int main(void)
{
    int failed_count = 0;

    Suite *(*s21_abs[])(void) = {
        s21_abs_first_case,
        s21_abs_second_case,
    };

    Suite *(*s21_fabs[])(void) = {
        s21_fabs_first_case,
        s21_fabs_second_case,
        s21_fabs_edge_case,
    };

    Suite *(*s21_floor[])(void) = {
        s21_floor_first_case,
        s21_floor_second_case,
        s21_floor_edge_case,
    };

    Suite *(*s21_ceil[])(void) = {
        s21_ceil_first_case,
        s21_ceil_second_case,
        s21_ceil_edge_case,
    };

    // Suite *(*s21_exp[])(void) = {
    //     s21_exp_first_case,
    // };

    // Suite *(*s21_fmod[])(void) = {
    //     s21_fmod_first_case,
    // };

    // Suite *(*s21_log[])(void) = {
    //     s21_log_first_case,
    // };

    // Suite *(*s21_sqrt[])(void) = {
    //     s21_sqrt_first_case,
    // };

    // Suite *(*s21_pow[])(void) = {
    //     s21_pow_first_case,
    // };
    
    // Suite *(*s21_sin[])(void) = {
    //     s21_sin_first_case,
    // };

    // Suite *(*s21_cos[])(void) = {
    //     s21_cos_first_case,
    // };

    // Suite *(*s21_tan[])(void) = {
    //     s21_tan_first_case,
    // };

    // Suite *(*s21_asin[])(void) = {
    //     s21_asin_first_case,
    // };

    // Suite *(*s21_acos[])(void) = {
    //     s21_acos_first_case,
    // };

    // Suite *(*s21_atan[])(void) = {
    //     s21_atan_first_case,
    // };

    printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~ WELCOME! LET'S START TESTING THE PROJECT MODULES. ~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    

    printf("\n\n _______________________________________________________________________\n");
    printf("|                                                                       |\n");
    printf("|                             S21_ABS TESTS                             |\n");
    printf("|_______________________________________________________________________|\n\n\n");
    for(size_t i = 0; i < sizeof(s21_abs)/sizeof(s21_abs[0]); i++) {
        printf("*************************************************************************\n");
        failed_count = test_suite(s21_abs[i]());
        if (failed_count) {
            i = sizeof(s21_abs)/sizeof(s21_abs[0]);
        }
    }
    printf("*************************************************************************\n");


    printf("\n\n _______________________________________________________________________\n");
    printf("|                                                                       |\n");
    printf("|                            S21_FABS TESTS                             |\n");
    printf("|_______________________________________________________________________|\n\n\n");
    for(size_t i = 0; i < sizeof(s21_fabs)/sizeof(s21_fabs[0]); i++) {
        printf("*************************************************************************\n");
        failed_count = test_suite(s21_fabs[i]());
        if (failed_count) {
            i = sizeof(s21_fabs)/sizeof(s21_fabs[0]);
        }
    }
    printf("*************************************************************************\n");


    printf("\n\n _______________________________________________________________________\n");
    printf("|                                                                       |\n");
    printf("|                            S21_FLOOR TESTS                            |\n");
    printf("|_______________________________________________________________________|\n\n\n");
    for(size_t i = 0; i < sizeof(s21_floor)/sizeof(s21_floor[0]); i++) {
        printf("*************************************************************************\n");
        failed_count = test_suite(s21_floor[i]());
        if (failed_count) {
            i = sizeof(s21_floor)/sizeof(s21_floor[0]);
        }
    }
    printf("*************************************************************************\n");


    printf("\n\n _______________________________________________________________________\n");
    printf("|                                                                       |\n");
    printf("|                             S21_CEIL TESTS                            |\n");
    printf("|_______________________________________________________________________|\n\n\n");
    for(size_t i = 0; i < sizeof(s21_ceil)/sizeof(s21_ceil[0]); i++) {
        printf("*************************************************************************\n");
        failed_count = test_suite(s21_ceil[i]());
        if (failed_count) {
            i = sizeof(s21_ceil)/sizeof(s21_ceil[0]);
        }
    }
    printf("*************************************************************************\n");

    
    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                             S21_EXP TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_exp)/sizeof(s21_exp[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_exp[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_exp)/sizeof(s21_exp[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                            S21_FMOD TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_fmod)/sizeof(s21_fmod[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_fmod[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_fmod)/sizeof(s21_fmod[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                             S21_LOG TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_log)/sizeof(s21_log[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_log[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_log)/sizeof(s21_log[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                            S21_SQRT TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_sqrt)/sizeof(s21_sqrt[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_sqrt[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_sqrt)/sizeof(s21_sqrt[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                             S21_POW TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_pow)/sizeof(s21_pow[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_pow[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_pow)/sizeof(s21_pow[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                             S21_SIN TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_sin)/sizeof(s21_sin[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_sin[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_sin)/sizeof(s21_sin[0]);
    //     }
    // }
    // printf("*************************************************************************\n");

    
    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                             S21_COS TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_cos)/sizeof(s21_cos[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_cos[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_cos)/sizeof(s21_cos[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                             S21_TAN TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_tan)/sizeof(s21_tan[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_tan[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_tan)/sizeof(s21_tan[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                            S21_ASIN TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_asin)/sizeof(s21_asin[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_asin[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_asin)/sizeof(s21_asin[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                            S21_ACOS TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_acos)/sizeof(s21_acos[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_acos[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_acos)/sizeof(s21_acos[0]);
    //     }
    // }
    // printf("*************************************************************************\n");


    // printf("\n\n _______________________________________________________________________\n");
    // printf("|                                                                       |\n");
    // printf("|                            S21_ATAN TESTS                             |\n");
    // printf("|_______________________________________________________________________|\n\n\n");
    // for(size_t i = 0; i < sizeof(s21_atan)/sizeof(s21_atan[0]); i++) {
    //     printf("*************************************************************************\n");
    //     failed_count = test_suite(s21_atan[i]());
    //     if (failed_count) {
    //         i = sizeof(s21_atan)/sizeof(s21_atan[0]);
    //     }
    // }
    // printf("*************************************************************************\n\n\n");


    return (failed_count) ? EXIT_FAILURE : EXIT_SUCCESS;
}

/**
 * @brief Function for testing the specified Suite.
 * 
 * @param test input Suite test.
 * 
 * @return int - error code.
 * @retval EXIT_SUCCESS = 0 - if the tests pass successfully.
 * @retval EXIT_FAILURE = 1 - if the tests pass unsuccessful.
*/
static int test_suite(Suite *test)
{
    SRunner *suite_runner = srunner_create(test);

    srunner_run_all(suite_runner, CK_NORMAL);
    int failed_count = srunner_ntests_failed(suite_runner);
    srunner_free(suite_runner);

    return (failed_count) ? EXIT_FAILURE : EXIT_SUCCESS;
}