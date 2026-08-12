/* ==========================================================
 *  factorial_calculator.c
 *  Calculates the factorial of a non-negative integer
 * ========================================================== */

#include <stdio.h>
#include "../include/calculator.h"

void factorialCalculator(void) {
    int number;
    unsigned long long factorial = 1;

    printf("\n===== FACTORIAL CALCULATOR =====\n");

    number = getValidInt("Enter a non-negative integer (0-20): ");

    if (number < 0) {
        printf("\nError: Factorial is not defined for negative numbers.\n");
    } else if (number > 20) {
        printf("\nError: Number too large. Max supported value is 20.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("\nResult: %d! = %llu\n", number, factorial);
    }
}