/**
 * @file common.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Common functions module
 * @version 1.0
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./common.h"

/**
 * @brief Calculate the factorial of n
 * 
 * @param n count of iterations
 * @return long double 
 */
long double factorial(unsigned int n)
{
    long double result = 1;

    for(unsigned int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

/**
 * @brief Algorithm for fast integer base to degree exp
 * 
 * @param base a number raised to the degree exp
 * @param exp exponent
 * @return double - result of calculation.
 */
double fast_pow(double base, unsigned int exp)
{
    double result = 1.0;
    double current_pow = base;

    while (exp > 0) {
        if (exp & 1) {
            result *= current_pow;
        }
        current_pow *= current_pow;
        exp /= 2;
    }

    return result;
}

