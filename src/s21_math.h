#ifndef S21_MATH_H
#define S21_MATH_H

#include <check.h>
#include <stdio.h>
#include <stdlib.h>

// #define s21_NULL ((void *)0);
// typedef unsigned long s21_size_t;
#define S21_NAN 0.0 / 0.0
#define S21_INF_POS 1.0 / 0.0   // +infinity
#define S21_INF_NEG -1.0 / 0.0  // -infinity
#define S21_PI 3.141592653589793
#define S21_LN2 0.69314718056
#define S21_E 2.71828182845
#define S21_IS_NAN(x) (x != x)
#define S21_IS_INF(x) (x == S21_INF_NEG || x == S21_INF_POS)
#define S21_EPS 1e-100

// Вычисляет абсолютное значение целого числа
int s21_abs(int x);

// Вычисляет абсолютное значение числа с плавающей точкой
long double s21_fabs(double x);

// Возвращает ближайшее целое число, не меньшее заданного значения
long double s21_ceil(double x);

// Возвращает значение e, возведенное в заданную степень
long double s21_exp(double x);

// Возводит число в заданную степень
long double s21_pow(double base, double exp);

// Возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor(double x);

// Остаток операции деления с плавающей точкой
long double s21_fmod(double x, double y);

// Вычисляет синус
long double s21_sin(double x);

// Вычисляет косинус
long double s21_cos(double x);

// Вычисляет тангенс
long double s21_tan(double x);

// Вычисляет квадратный корень
long double s21_sqrt(double x);

// Вычисляет натуральный логарифм
long double s21_log(double x);

// Дополнительные функции

// Вычисление факториала
long double s21_factorial(double n);

// Возведение в int - степень
double s21_fast_pow(double base, int exp);

#endif  // S21_MATH_H