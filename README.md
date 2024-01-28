# s21_math 

## Contents
1. [About the project](#about-the-project)
2. [Development team](#development-team)
3. [Completed tasks](#completed-tasks)
4. [Implementation features](#implementation-features)
5. [Building the project](#building-the-project)
6. [Feedback](#feedback)

## About the project

This project is part of the School 21 project database from Sber. As part of this project, the standard library of this language, math.h, was implemented in C.

## Development team

Composition of the team that implemented the project: <br>
**kossadda** (https://github.com/kossadda) <br>
**emmonbea** (https://github.com/emmonbear) <br>

## Completed tasks

As part of the project, 15 functions of the math.h library were implemented. List of functions:

| #  | Function Signature                           | Description                                                                    |
|----|----------------------------------------------|--------------------------------------------------------------------------------|
| 1  | `int abs(double x)`                          | Calculates the absolute value of an integer.                                   |
| 2  | `long double fabs(double x)`                 | Calculates the absolute value of a floating point number.                      |
| 3  | `long double floor(double x)`                | Returns the nearest integer not exceeding the specified floating point number. |
| 4  | `long double ceil(double x)`                 | Returns the nearest integer not less than the specified floating point number. |
| 5  | `long double exp(double x)`                  | Returns the value of e raised to the specified power.                          |
| 6  | `long double fmod(double x, double y)`       | The remainder of the division operation by a floating point number.            |
| 7  | `long double log(double x)`                  | Calculates the natural logarithm of a floating point number.                   |
| 8  | `long double sqrt(double x)`                 | Calculates the square root of a floating point number.                         |
| 9  | `long double pow(double base, double exp)`   | Raises a number to a given power.                                              |
| 10 | `long double sin(double x)`                  | Calculates the sine of a floating point number.                                |
| 11 | `long double cos(double x)`                  | Calculates the cosine of a floating point number.                              |
| 12 | `long double tan(double x)`                  | Calculates the tangent of a floating point number.                             |
| 13 | `long double asin(double x)`                 | Calculates the arcsine of a floating point number.                             |
| 14 | `long double atan(double x)`                 | Calculates the arctangent of a floating point number.                          |
| 15 | `long double acos(double x)`                 | Calculates the arc cosine of a floating point number.                          |

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

| #  | Command         | Description                                                              |
|----|-----------------|--------------------------------------------------------------------------|
| 1  | `all`           | Generates documentation for the project and starts testing modules.      |
| 2  | `s21_math`      | Assembles modules into a static library.                                 |
| 3  | `test`          | Tests modules.                                                           |
| 4  | `gcov_report`   | Tests modules and generates a coverage report in html format.            |
| 5  | `dvi`           | Generates documentation in html and manual format for the functionality. |
| 6  | `rebuild`       | Rebuilding the project.                                                  |
| 7  | `clang_check`   | Testing modules for compliance with Google style.                        |
| 8  | `valgrind`      | Testing modules for working with memory through Valgrind.                |
| 9  | `install`       | Installs the necessary dependencies for testing the project.             |
| 10 | `clean`         | Cleans the repository from generated files.                              |

## Feedback

If you have any questions regarding the features or other aspects of the project that interest you, please contact us by email:

moskaleviluak@icloud.com <br>
gabilov1997@gmail.com <br>

Thank you for your attention. We hope that you will like this project.