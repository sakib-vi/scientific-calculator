/* ==========================================================
 *  power_calculator.c
 *  Calculates x raised to the power y
 * ========================================================== */

#include <stdio.h>
#include <math.h>
#include "../include/calculator.h"

void powerCalculator(void) {
    double base, exponent, result;

    printf("\n===== POWER CALCULATOR (x^y) =====\n");

    base     = getValidDouble("Enter base: ");
    exponent = getValidDouble("Enter exponent: ");

    result = pow(base, exponent);
    printf("\nResult: %.2lf ^ %.2lf = %.4lf\n", base, exponent, result);
}