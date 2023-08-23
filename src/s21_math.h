#ifndef S21_MATH_H
#define S21_MATH_H

#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#define s21_NULL ((void *)0);
typedef unsigned long s21_size_t;
#define s21_nan 0.0 / 0.0;
#define s21_p_inf 1.0 / 0.0; // +infinity
#define s21_m_inf -1.0 / 0.0; // -infinity
#define s21_PI 3.141592653589793;

// Вычисляет абсолютное значение целого числа
int s21_abs(int x);

// Вычисляет абсолютное значение числа с плавающей точкой
long double s21_fabs(double x);

#endif  // S21_MATH_H