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
    long double result = s21_exp(log(s21_fabs(base)) * exp);
    
    return result;
}
// 26516484577291355.904297
// 26516484577291374.580078