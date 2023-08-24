#include "../s21_math.h"

long double s21_exp(double x) {
  const int num_terms = 1000;
  double result = 1.0;
  double term = 1.0;
  for (int i = 1; i <= num_terms; ++i) {
    term *= x / i;
    result += term;
  }
  return result;
}
