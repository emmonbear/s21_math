/**
 * @file s21_pow.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Implementation of function pow from math.h library
 * @version 1.0
 * @date 2024-01-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./include/s21_pow.h"
#include "./include/s21_exp.h"
#include "./include/s21_fabs.h"
#include <math.h>

/**
 * @brief Raises a number to a given power.
 * 
 * @param[in] base number whose absolute value must be determined.
 * @param[in] exp the degree to which it is raised base.
 * @return long double - result of calculation.
 */
long double s21_pow(double base, double exp)
{
    double_int base_bits = {{base}};
    double_int exp_bits = {{exp}};
    long double result = 0;

    if(BITS_NAN(base_bits) || BITS_NAN(exp_bits)) {
        result = S21_NAN;
    } else if(s21_fabs(base) < 1.0 && BITS_INF(exp_bits)) {
        if(BITS_NEG_INF(exp_bits)) {
            result = S21_INF;
        } else {
            result = 0.0;
        }
    } else if(s21_fabs(base) == 1.0 && BITS_INF(exp_bits)) {
        result = 1.0;
    } else if(BITS_NEG_INF(exp_bits)) {
        result = 0.0;
    } else if(BITS_POS_INF(exp_bits)) {
        result = S21_INF;
    } else if(BITS_NEG_INF(base_bits)) {
        if(exp_bits.dbl.ieee.negative) {
            result = 0.0;
        } else {
            result = S21_INF;
        }
    } else {
        result = s21_exp(log(base) * exp);
    }
    
    return result;
}
