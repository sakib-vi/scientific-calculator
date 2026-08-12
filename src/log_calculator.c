/* ==========================================================
 *  log_calculator.c
 *  Calculates natural log and log base 10
 * ========================================================== */

#include <stdio.h>
#include <math.h>
#include "../include/calculator.h"

void logarithmCalculator(void) {
    double number;

    printf("\n===== LOGARITHM CALCULATOR =====\n");

    number = getValidDouble("Enter a positive number: ");

    if (number <= 0) {
        printf("\nError: Logarithm requires a positive number.\n");
    } else {
        printf("\nNatural log ln(%.2lf) = %.4lf\n", number, log(number));
        printf("Log base 10 log10(%.2lf) = %.4lf\n", number, log10(number));
    }
}