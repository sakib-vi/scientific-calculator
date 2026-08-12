/* ==========================================================
 *  percentage_calculator.c
 *  Calculates percentage of a given number
 * ========================================================== */

#include <stdio.h>
#include "../include/calculator.h"

void percentageCalculator(void) {
    double number, percentage, result;

    printf("\n===== PERCENTAGE CALCULATOR =====\n");

    number     = getValidDouble("Enter number: ");
    percentage = getValidDouble("Enter percentage: ");

    result = (number * percentage) / 100.0;
    printf("\nResult: %.2lf%% of %.2lf = %.2lf\n", percentage, number, result);
}