/**
 * @file s21_sqrt.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function sqrt from math.h library
 * @version 1.0
 * @date 2024-02-12
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_sqrt.h"

/**
 * @brief Calculates the square root of a floating point number.
 *
 * @param[in] x number whose root needs to be extracted.
 * @return long double - result of calculation.
 */
long double s21_sqrt(double x) { return s21_pow(x, 0.5); }
