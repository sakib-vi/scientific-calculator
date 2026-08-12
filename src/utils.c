/* ==========================================================
 *  utils.c
 *  Utility functions for input validation and program flow
 * ========================================================== */

#include <stdio.h>
#include <ctype.h>
#include "../include/calculator.h"

/* Clears leftover characters in the input buffer */
void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/* Prompts until a valid integer is entered */
int getValidInt(const char *prompt) {
    int value;
    int result;

    while (1) {
        printf("%s", prompt);
        result = scanf("%d", &value);

        if (result == 1) {
            clearInputBuffer();
            return value;
        } else {
            printf("Invalid input! Please enter a valid integer.\n");
            clearInputBuffer();
        }
    }
}

/* Prompts until a valid double is entered */
double getValidDouble(const char *prompt) {
    double value;
    int result;

    while (1) {
        printf("%s", prompt);
        result = scanf("%lf", &value);

        if (result == 1) {
            clearInputBuffer();
            return value;
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            clearInputBuffer();
        }
    }
}

/* Prompts until a valid operator (+, -, *, /) is entered */
char getValidOperator(const char *prompt) {
    char op;

    while (1) {
        printf("%s", prompt);
        scanf(" %c", &op);
        clearInputBuffer();

        if (op == '+' || op == '-' || op == '*' || op == '/') {
            return op;
        } else {
            printf("Invalid operator! Please enter one of + - * /\n");
        }
    }
}

/* Asks the user whether to continue using the calculator */
int askToContinue(void) {
    char choice;
    printf("\nDo you want to perform another operation? (y/n): ");
    scanf(" %c", &choice);
    clearInputBuffer();
    return (choice == 'y' || choice == 'Y');
}

/* Simple pause to let user read results before returning to menu */
void pauseScreen(void) {
    printf("\nPress Enter to continue...");
    getchar();
}