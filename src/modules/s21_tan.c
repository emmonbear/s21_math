/**
 * @file s21_tan.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function tan from math.h library
 * @version 1.0
 * @date 2024-02-12
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./include/s21_tan.h"

/**
 * @brief Calculates the tangent of a floating point number.
 *
 * @param[in] x number whose tangent needs to be calculated.
 * @return long double - result of calculation.
 */
long double s21_tan(double x) { return s21_sin(x) / s21_cos(x); }
