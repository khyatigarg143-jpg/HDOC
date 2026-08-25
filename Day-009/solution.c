/*
 * ============================================================================
 * Day             : Day 9 (Day-009)
 * Date            : 25 August 2026
 * Topic           : Conditional Statements
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q17 (Conditional Statements):
 *   Write a program to find the roots of a quadratic equation and categorize them.
 *
 * Explanation:
 *   Computes discriminant D = b^2 - 4ac of a quadratic equation ax^2 + bx + c = 0 and categorizes roots as real and different (D > 0), real and same (D == 0), or complex (D < 0).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 1 -3 2
 *     Output : Roots are real and different: 2, 1
 *   Test Case 2:
 *     Input  : 1 -2 1
 *     Output : Roots are real and same: 1
 *   Test Case 3:
 *     Input  : 1 2 5
 *     Output : Roots are complex
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q18 (Conditional Statements):
 *   Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
 *   90-100: Grade A 
 *   80-89: Grade B 
 *   70-79: Grade C 
 *   60-69: Grade D 
 *   below 60: Grade F.
 *
 * Explanation:
 *   Uses an if-else ladder to map a percentage score (0-100) to its corresponding letter grade.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 95
 *     Output : Grade A
 *   Test Case 2:
 *     Input  : 82
 *     Output : Grade B
 *   Test Case 3:
 *     Input  : 68
 *     Output : Grade D
 *   Test Case 4:
 *     Input  : 50
 *     Output : Grade F
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q17: Write a program to find the roots of a quadratic equation and categorize them. --- */
void solve_q17(void) {
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double d = b * b - 4.0 * a * c;
        if (d > 0) {
            double r1 = (-b + sqrt(d)) / (2.0 * a);
            double r2 = (-b - sqrt(d)) / (2.0 * a);
            printf("Roots are real and different: %.0f, %.0f\n", r1, r2);
        } else if (d == 0) {
            double r = -b / (2.0 * a);
            printf("Roots are real and same: %.0f\n", r);
        } else {
            printf("Roots are complex\n");
        }
    }
}

/* --- Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:  --- */
void solve_q18(void) {
    int percentage;
    printf("Enter percentage (0-100): ");
    if (scanf("%d", &percentage) == 1) {
        if (percentage >= 90 && percentage <= 100) {
            printf("Grade A\n");
        } else if (percentage >= 80) {
            printf("Grade B\n");
        } else if (percentage >= 70) {
            printf("Grade C\n");
        } else if (percentage >= 60) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }
}

int main(void) {
    printf("=== Day 9 | Q17 ===\n");
    solve_q17();

    printf("\n=== Day 9 | Q18 ===\n");
    solve_q18();
    return 0;
}
