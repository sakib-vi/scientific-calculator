/* ==========================================================
 *  sqrt_calculator.c
 *  Calculates the square root of a number
 * ========================================================== */

#include <stdio.h>
#include <math.h>
#include "../include/calculator.h"

void squareRootCalculator(void) {
    double number;

    printf("\n===== SQUARE ROOT CALCULATOR =====\n");

    number = getValidDouble("Enter a number: ");

    if (number < 0) {
        printf("\nError: Square root of a negative number is not real.\n");
    } else {
        printf("\nResult: sqrt(%.2lf) = %.4lf\n", number, sqrt(number));
    }
}