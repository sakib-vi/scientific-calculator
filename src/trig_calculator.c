/* ==========================================================
 *  trig_calculator.c
 *  Calculates sine, cosine, and tangent of an angle (degrees)
 * ========================================================== */

#include <stdio.h>
#include <math.h>
#include "../include/calculator.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void trigonometryCalculator(void) {
    double angle, radians;
    int choice;

    printf("\n===== TRIGONOMETRY CALCULATOR =====\n");
    printf("1. Sine (sin)\n");
    printf("2. Cosine (cos)\n");
    printf("3. Tangent (tan)\n");

    choice = getValidInt("Choose an option (1-3): ");
    angle  = getValidDouble("Enter angle in degrees: ");

    radians = angle * M_PI / 180.0;

    switch (choice) {
        case 1:
            printf("\nResult: sin(%.2lf) = %.4lf\n", angle, sin(radians));
            break;
        case 2:
            printf("\nResult: cos(%.2lf) = %.4lf\n", angle, cos(radians));
            break;
        case 3:
            printf("\nResult: tan(%.2lf) = %.4lf\n", angle, tan(radians));
            break;
        default:
            printf("\nInvalid choice! Please select 1, 2, or 3.\n");
    }
}