#include <stdio.h>
#include "../include/calculator.h"

int main(void) {
    int choice;
    int running = 1;

    showWelcomeBanner();

    while (running) {
        showMenu();
        choice = getValidInt("\nEnter your choice: ");

        switch (choice) {
            case 1:
                basicCalculator();
                break;
            case 2:
                powerCalculator();
                break;
            case 3:
                squareRootCalculator();
                break;
            case 4:
                trigonometryCalculator();
                break;
            case 5:
                logarithmCalculator();
                break;
            case 6:
                factorialCalculator();
                break;
            case 7:
                percentageCalculator();
                break;
            case 0:
                showGoodbyeMessage();
                running = 0;
                break;
            default:
                printf("\nInvalid choice! Please select a number from the menu.\n");
        }
    }

    return 0;
}

void showMenu(void) {
    printf("\n");
    printf("----------------------------------------\n");
    printf("              MAIN MENU\n");
    printf("----------------------------------------\n");
    printf(" 1. Basic Calculator (+ - * /)\n");
    printf(" 2. Power (x^y)\n");
    printf(" 3. Square Root\n");
    printf(" 4. Trigonometry (sin/cos/tan)\n");
    printf(" 5. Logarithm\n");
    printf(" 6. Factorial\n");
    printf(" 7. Percentage\n");
    printf(" 0. Exit\n");
    printf("----------------------------------------\n");
}

void showWelcomeBanner(void) {
    printf("\n");
    printf("========================================\n");
    printf("        SCIENTIFIC C CALCULATOR\n");
    printf("           Version 1.0.0\n");
    printf("========================================\n");
}

void showGoodbyeMessage(void) {
    printf("\n========================================\n");
    printf(" Thank you for using Scientific Calculator!\n");
    printf("========================================\n\n");
}