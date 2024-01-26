/**
 * @file s21_fabs.c
 * @author kossadda (https://github.com/kossadda)
 * @brief Implementation of function abs from math.h library
 * @version 1.0
 * @date 2024-01-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./include/s21_fabs.h"

/**
 * @brief Computes absolute value of a floating-point value.
 * 
 * @param[in] x number whose absolute value must be determined.
 * @return long double - result of calculation.
 */
long double s21_fabs(double x)
{
    long double result = x;
    union ieee754_double bits = {x};

    if(bits.ieee.negative) {
        bits.ieee.negative = 0;
        result = bits.d;
    }

    return result;
}
