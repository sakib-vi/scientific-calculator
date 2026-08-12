/* ==========================================================
 *  basic_calculator.c
 *  Performs addition, subtraction, multiplication, division
 * ========================================================== */

#include <stdio.h>
#include "../include/calculator.h"

void basicCalculator(void) {
    double num1, num2;
    char op;

    printf("\n===== BASIC CALCULATOR =====\n");

    num1 = getValidDouble("Enter first number: ");
    op   = getValidOperator("Enter operator (+, -, *, /): ");
    num2 = getValidDouble("Enter second number: ");

    switch (op) {
        case '+':
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("\nError: Division by zero is undefined!\n");
            } else {
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            }
            break;
    }
}