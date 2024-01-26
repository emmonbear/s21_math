# s21_math 

## Contents
1. [About the project](#about-the-project)
2. [Development team](#development-team)
3. [Completed tasks](#completed-tasks)
4. [Implementation features](#implementation-features)
5. [Building the project](#building-the-project)

## About the project

This project is part of the School 21 project database from Sber. As part of this project, the standard library of this language, math.h, was implemented in C.

## Development team

Composition of the team that implemented the project: <br>
**kossadda** (https://github.com/kossadda) <br>
**emmonbea** (https://github.com/emmonbear) <br>

## Completed tasks

As part of the project, 15 functions of the math.h library were implemented. List of functions:

1. **int abs(double x)** - calculates the absolute value of an integer.
2. **long double fabs(double x)** - calculates the absolute value of a floating point number.
3. **long double floor(double x)** - returns the nearest integer not exceeding the specified floating point number.
4. **long double ceil(double x)** - returns the nearest integer not less than the specified floating point number.
5. **long double exp(double x)** - returns the value of e raised to the specified power.
6. **long double fmod(double x, double y)** - the remainder of the division operation by a floating point number.
7. **long double log(double x)** - calculates the natural logarithm of a floating point number.
8. **long double sqrt(double x)** - calculates the square root of a floating point number.
9. **long double pow(double base, double exp)** - raises a number to a given power.
10. **long double sin(double x)** - calculates the sine of a floating point number.
11. **long double cos(double x)** - calculates the cosine of a floating point number.
12. **long double tan(double x)** - calculates the tangent of a floating point number.
13. **long double asin(double x)** - calculates the arcsine of a floating point number.
14. **long double atan(double x)** - calculates the arctangent of a floating point number.
15. **long double acos(double x)** - calculates the arc cosine of a floating point number.

## Implementation features

While writing the project, it was decided to implement the function by working with individual bits of floating point numbers. This method is aimed at a more detailed study of the architecture of the language and the method of storing floating point numbers in computer memory.

> We are talking about the IEEE Standard for Floating-Point Arithmetic (IEEE 754).
>
> The standard describes:
> - format of floating point numbers: mantissa, exponent (exponent), number sign;
> - representation of positive and negative zero, positive and negative infinities, as well as non-number (English: Not-a-Number, NaN);
> - methods used to convert numbers when performing mathematical operations;
> - exceptional situations: division by zero, overflow, underflow, working with denormalized numbers and others;
> - operations: arithmetic and others.

To work with bits, the standard library ieee754.h was used, containing the union structure of floating point numbers (single, double and extended precision). This structure allows us to directly access the necessary fields (sign, mantissa, exponent) and perform the necessary bit operations to obtain the number values required within a given algorithm.

## Building the project

The following main goals for working with the project have been added to the Makefile:

1. **all** - generates documentation for the project and starts testing modules.
2. **s21_math** - assembles modules into a static library.
3. **test** - tests modules.
4. **gcov_report** - tests modules and generates a coverage report in html format.
5. **dvi** - generates documentation in html and manual format for the functionality.
6. **rebuild** - rebuilding the project.
7. **clang_check** - testing modules for compliance with Google style.
8. **valgrind** - testing modules for working with memory through Valgrind.
9. **install** - installs the necessary dependencies for testing the project.
10. **clean** - cleans the repository from generated files.