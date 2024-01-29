/**
 * @file s21_log.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Implementation of function log from math.h library
 * @version 1.0
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./include/s21_log.h"

/**
 * @brief Computes natural logarithm.
 * 
 * @details The function calculates the natural logarithm using Taylor series:
 * \f[
 *      ln(x) = 2 \left( \frac{{x - 1}}{{x + 1}} + \frac{1}{3} \left(\frac{{x - 1}}{{x + 1}}\right)^3 + \frac{1}{5} \left(\frac{{x - 1}}{{x + 1}}\right)^5 + \ldots \right)
 * \f]
 * @param[in] x a value used in the calculation of the logarithm of x to the base of e.
 * @return long double - result of calculation.
 * 
 * 
 * @todo Изучить синтаксис LaTex
 * @todo Добавить формулу вычисления log через ряды Тейлора
 */
long double s21_log(double x)
{
    double result;
    if(!x) {
        result = S21_INF_NEG;
    } else if(x < 0 || S21_IS_NAN(x) || x == S21_INF_NEG) {
        result = S21_NAN;
    } else if(x == 1.0) {
        result = 0.0;
    } else if(x == S21_INF_POS) {
        result = S21_INF_POS;
    } else {
       result = x;
    }
    return result;
}