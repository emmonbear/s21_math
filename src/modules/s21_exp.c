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
#include "./include/s21_fabs.h"

/**
 * @brief Returns e raised to the given power
 * 
 * @param[in] x Euler exponent
 * @return long double - result of calculation
 */
long double s21_exp(double x)
{
    long double result = 1;
    long double taylor_member = x;
    union ieee754_double bits = {x};

    if(S21_IS_NAN(x)) {
        result = S21_NAN;
    } else if(bits.ieee.exponent == INF_BITS) {
        if(bits.ieee.negative) {
            result = ZERO;
        } else {
            result = x;
        }
    } else {
        for(double n = 1; taylor_member > 1.0e-100; ++n) {
            taylor_member = factorial(fast_pow(x, n), n);
            result += taylor_member;
        }
    }

    return result;
}