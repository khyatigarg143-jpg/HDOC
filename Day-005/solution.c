/*
 * ============================================================================
 * Day             : Day 5 (Day-005)
 * Date            : 21 August 2026
 * Topic           : User Inputs, Operations & Output
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q9 (User Inputs, Operations & Output):
 *   Write a program to calculate simple and compound interest for given principal, rate, and time.
 *
 * Explanation:
 *   Calculates Simple Interest (P * R * T / 100) and Compound Interest (P * (1 + R/100)^T - P) using pow() from <math.h>.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 1000 5 2
 *     Output : Simple Interest=100, Compound Interest=102.5
 *   Test Case 2:
 *     Input  : 5000 7 3
 *     Output : Simple Interest=1050, Compound Interest=1125.76
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q10 (User Inputs, Operations & Output):
 *   Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 *
 * Explanation:
 *   Converts total seconds into hours, minutes, and remaining seconds using integer division and modulo.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3661
 *     Output : 1:1:1
 *   Test Case 2:
 *     Input  : 7322
 *     Output : 2:2:2
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

/* --- Q9: Write a program to calculate simple and compound interest for given principal, rate, and time. --- */
void solve_q9(void) {
    double principal, rate, time;
    printf("Enter principal, rate, and time: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) == 3) {
        double si = (principal * rate * time) / 100.0;
        double ci = principal * pow((1.0 + rate / 100.0), time) - principal;
        printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);
    }
}

/* --- Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format. --- */
void solve_q10(void) {
    int total_seconds;
    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) == 1) {
        int hours = total_seconds / 3600;
        int minutes = (total_seconds % 3600) / 60;
        int seconds = total_seconds % 60;
        printf("%d:%d:%d\n", hours, minutes, seconds);
    }
}

int main(void) {
    printf("=== Day 5 | Q9 ===\n");
    solve_q9();

    printf("\n=== Day 5 | Q10 ===\n");
    solve_q10();
    return 0;
}
