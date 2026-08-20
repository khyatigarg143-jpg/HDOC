/*
 * ============================================================================
 * Day             : Day 4 (Day-004)
 * Date            : 20 August 2026
 * Topic           : User Inputs, Operations & Output
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q7 (User Inputs, Operations & Output):
 *   Write a program to swap two numbers without using a third variable.
 *
 * Explanation:
 *   Swaps two numbers without a third variable using arithmetic addition and subtraction.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 10 20
 *     Output : After swap: 20 10
 *   Test Case 2:
 *     Input  : 7 14
 *     Output : After swap: 14 7
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q8 (User Inputs, Operations & Output):
 *   Write a program to find and display the sum of the first n natural numbers.
 *
 * Explanation:
 *   Finds the sum of the first n natural numbers using the formula n * (n + 1) / 2 (or a simple loop).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5
 *     Output : Sum=15
 *   Test Case 2:
 *     Input  : 10
 *     Output : Sum=55
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

/* --- Q7: Write a program to swap two numbers without using a third variable. --- */
void solve_q7(void) {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After swap: %d %d\n", a, b);
    }
}

/* --- Q8: Write a program to find and display the sum of the first n natural numbers. --- */
void solve_q8(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) == 1) {
        int sum = n * (n + 1) / 2;
        printf("Sum=%d\n", sum);
    }
}

int main(void) {
    printf("=== Day 4 | Q7 ===\n");
    solve_q7();

    printf("\n=== Day 4 | Q8 ===\n");
    solve_q8();
    return 0;
}
