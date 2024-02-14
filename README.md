# s21_math

Implementation of the s21_math.h library.

The English version of the README can be found in the repository.

## Content
1. [About a project](#about-a-project)
2. [Development team](#development-team)
3. [Building project](#building-project)
4. [Testing](#testing)
5. [Feedback](#feedback)

## About a project

The goal of this project is to develop its own version of the standard library math.h in the C programming language. This library implements basic mathematical operations, which are then used in various algorithms. As part of this project, it is expected to become familiar with the basics of computational methods and consolidate the approaches of structured programming.

### Overview of implemented functions "math.h"

Mathematical operations in the C language are a group of functions in the standard library of the C programming language that implement basic mathematical functions. All functions use floating point numbers in one way or another. Different C standards provide different, albeit backward-compatible, sets of functionality. Any functions that work with angles use radians as the angle unit.

| №  | Function                                   | Description                                                   |
|----|--------------------------------------------|---------------------------------------------------------------|
| 1  | `int abs(double x)`                        | Computes absolute value of an integer value                   |
| 2  | `long double fabs(double x)`               | Computes absolute value of a floating-point value.            |
| 3  | `long double floor(double x)`              | Returns the nearest integer not greater than the given value. |
| 4  | `long double ceil(double x)`               | Returns the nearest integer not less than the given value.    |
| 5  | `long double exp(double x)`                | Returns e raised to the given power.                          |
| 6  | `long double fmod(double x, double y)`     | Remainder of the floating-point division operation.           |
| 7  | `long double log(double x)`                | Computes natural logarithm.                                   |
| 8  | `long double sqrt(double x)`               | Computes square root.                                         |
| 9  | `long double pow(double base, double exp)` | Raises a number to the given power.                           |
| 10 | `long double sin(double x)`                | Computes sine.                                                |
| 11 | `long double cos(double x)`                | Computes cosine.                                              |
| 12 | `long double tan(double x)`                | Computes tangent.                                             |
| 13 | `long double asin(double x)`               | Computes arc sine.                                            |
| 14 | `long double atan(double x)`               | Computes arc cosine.                                          |
| 15 | `long double acos(double x)`               | Computes arc tangent.                                         |

### Implementation features

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

### Project details

- The library was developed in the C language of the C11 standard using the gcc compiler;
- The library code is located in the `src` folder in the `develop` branch;
- Outdated and obsolete language constructs and library functions are not used. The implementation pays attention to the legacy and obsolete marks in the official documentation on the language and the libraries used. The code is based on the `POSIX.1-2017` standard;
- Code formatting is made in accordance with Google Style;
- The solution is designed as a static library (with a header file `s21_math.h`);
- The library is developed in accordance with the principles of structured programming, code duplication is excluded;
- The prefix `s21_` is used before each function;
- Provided full coverage of library functions by unit tests using the `Check` library;
- Unit tests check the results of the implementation by comparing it with the implementation of the standard math.h library;
- Unit tests cover at least 80% of each function;
- In the gcov_report target, a gcov report is generated in the form of an html page. To do this, unit tests are run with the gcov flags;
- A Makefile is provided for building the library and tests (with the goals all, clean, test, s21_math.a, gcov_report);
- Copying of the implementation and use of the standard math.h library is excluded everywhere except for unit tests;
- The logic of the standard library is observed;
- Overall verified accuracy - `16` significant figures;
- The verified accuracy of the fractional part is `6` decimal places.

## Development team

Composition of the team that implemented the project: <br>
**kossadda** (https://github.com/kossadda) <br>
**emmonbea** (https://github.com/emmonbear) <br>

## Building project

The following main goals for working with the project have been added to the Makefile:

| #  | Цель            | Описание цели                                                                |
|----|-----------------|------------------------------------------------------------------------------|
| 1  | `all`           | Generates documentation for the project and starts testing modules.           |
| 2  | `s21_math`      | Builds modules into a static library.                        |
| 3  | `test`          | Performs module testing.                                             |
| 4  | `gcov_report`   | Tests modules and generates a coverage report in html format. |
| 5  | `dvi`           | Generates documentation in html and manual format for the functionality.                |
| 6  | `rebuild`       | Rebuilding the project.                                                          |
| 7  | `clang_check`   | Testing modules for compliance with Google style.                           |
| 8  | `valgrind`      | Testing modules for working with memory via Valgrind.                     |
| 9  | `install`       | Installs the necessary dependencies for testing the project.      |
| 10 | `clean`         | Cleans the repository of generated files.                   |

## Testing

The written code was tested by unit-tests using the check library.<br>

![unit_tests](./misc/img/test.gif) <br>

The code was covered with tests and output to an html report using gcovr.<br>

![gcoverage](./misc/img/gcov.gif) <br>

Code tested for errors/leaks via valgrind. <br>

![valgrind_tests](./misc/img/valgrind.gif) <br>

## Feedback

If you have any questions regarding the features or other aspects of the project that interest you, please contact us by email:

moskaleviluak@icloud.com <br>
gabilov1997@gmail.com <br>

Thank you for your attention. I hope you enjoy this project and find it useful.

<br>

[Return to contents](#s21_math)