/**
 * @file main.c
 * @author emmonbea (https://github.com/emmonbear)
 * @brief Debug file
 * @version 1.0
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <math.h>
#include "s21_math.h"

/**
 * @brief Debug file
 * @return int 
 */
int main()
{
  double value = 1;

  long double original_func = asin(value);
  long double implementation = s21_asin(value);

  printf("original function  = %Lf\n", original_func);
  printf("our implementation = %Lf\n", implementation);
  
  return 0;
}