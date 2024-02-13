/**
 * @file s21_acos.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function acos from math.h library
 * @version 1.0
 * @date 2024-02-12
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_acos.h"

/**
 * @brief Calculates the arc cosine of a floating point number.
 *
 * @param[in] x number whose arc cosine needs to be calculated.
 * @return long double - result of calculation.
 */
long double s21_acos(double x) { return PI / 2.0 - s21_asin(x); }