/**
 * @file s21_exp.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function exp from math.h library
 * @version 1.0
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./include/s21_exp.h"

/**
 * @brief Returns e raised to the given power
 * 
 * @param x Euler exponent
 * @return long double - result of calculation
 */
long double s21_exp(double x)
{
    long double result = 1;
    long double taylor_member = x;

    for(double n = 1; s21_fabs(taylor_member) > 1.0e-100; ++n) {
        taylor_member = ((fast_pow(x, n)) / factorial(n));
        result += taylor_member;
    }
    
    return result;
}