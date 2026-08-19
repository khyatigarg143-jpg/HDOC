/*
 * ============================================================================
 * Day             : Day 3 (Day-003)
 * Date            : 19 August 2026
 * Topic           : User Inputs, Operations & Output
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q5 (User Inputs, Operations & Output):
 *   Write a program to convert temperature from Celsius to Fahrenheit.
 *
 * Explanation:
 *   Converts temperature from Celsius to Fahrenheit using the formula F = (C * 9 / 5) + 32.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 0
 *     Output : Fahrenheit=32
 *   Test Case 2:
 *     Input  : 100
 *     Output : Fahrenheit=212
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q6 (User Inputs, Operations & Output):
 *   Write a program to swap two numbers using a third variable.
 *
 * Explanation:
 *   Swaps the values of two integer variables using a temporary third variable.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 5
 *     Output : After swap: 5 3
 *   Test Case 2:
 *     Input  : -1 1
 *     Output : After swap: 1 -1
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

/* --- Q5: Write a program to convert temperature from Celsius to Fahrenheit. --- */
void solve_q5(void) {
    double celsius;
    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) == 1) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("Fahrenheit=%.0f\n", fahrenheit);
    }
}

/* --- Q6: Write a program to swap two numbers using a third variable. --- */
void solve_q6(void) {
    int a, b, temp;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        temp = a;
        a = b;
        b = temp;
        printf("After swap: %d %d\n", a, b);
    }
}

int main(void) {
    printf("=== Day 3 | Q5 ===\n");
    solve_q5();

    printf("\n=== Day 3 | Q6 ===\n");
    solve_q6();
    return 0;
}
