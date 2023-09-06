#include "../s21_math.h"

// long double s21_sin(double x) {
//   if (S21_IS_INF(x) || S21_IS_NAN(x)) {
//     return S21_NAN;
//   }
//   x = s21_fmod(x, 2 * S21_PI);
//   while (x > S21_PI) {
//     x -= 2 * S21_PI;
//   }
//   while (x < -S21_PI) {
//     x += 2 * S21_PI;
//   }
//   long double res = x;
//   long double expon = 3;
//   long double sign = -1;
//   long double temp = x;
//   int max_iterations = 10;
//   while ((s21_fabs(temp) > S21_EPS)  && (max_iterations > 0)) {
//     temp = ((s21_fast_pow(x, expon)) / s21_factorial(expon)) * (sign);
//     res += temp;
//     expon += 2;
//     sign *= -1;
//     max_iterations--;
//   }
//   return res;
// }


  long double s21_sin(double x) {
  long double result = 0.0;
  long double temp = x;
  if ((S21_IS_INF(x)) || (S21_IS_NAN(x))) result = S21_NAN;
  x = s21_fmod(x, 2 * S21_PI);
  while (x > S21_PI) x -= 2 * S21_PI;
  while (x < -S21_PI) x += 2 * S21_PI;
  int n = 0;
  while (s21_fabs(temp) > S21_EPS) {
    temp = (s21_fast_pow(-1, n) * s21_fast_pow(x, ((2 * n) + 1))) / (s21_factorial(((2 * n) + 1)));
    n++;
    result += temp;
  }
  return result;
}