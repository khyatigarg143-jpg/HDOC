/*
 * ============================================================================
 * Day             : Day 1 (Day-001)
 * Date            : 17 August 2026
 * Topic           : User Inputs, Operations & Output
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q1 (User Inputs, Operations & Output):
 *   Write a program to input two numbers and display their sum.
 *
 * Explanation:
 *   Reads two integers from standard input using scanf() and prints their sum.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 4
 *     Output : Sum = 7
 *   Test Case 2:
 *     Input  : -1 20
 *     Output : Sum = 19
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q2 (User Inputs, Operations & Output):
 *   Write a program to input two numbers and display their sum, difference, product, and quotient.
 *   Note: Division by zero should be handled carefully.
 *
 * Explanation:
 *   Reads two integers and calculates their sum, difference, product, and integer quotient (checking that the second number is non-zero before dividing).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 10 2
 *     Output : Sum=12, Diff=8, Product=20, Quotient=5
 *   Test Case 2:
 *     Input  : 7 3
 *     Output : Sum=10, Diff=4, Product=21, Quotient=2
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

/* --- Q1: Write a program to input two numbers and display their sum. --- */
void solve_q1(void) {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        int sum = a + b;
        printf("Sum = %d\n", sum);
    }
}

/* --- Q2: Write a program to input two numbers and display their sum, difference, product, and quotient. --- */
void solve_q2(void) {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        int sum = a + b;
        int diff = a - b;
        int prod = a * b;
        if (b != 0) {
            int quot = a / b;
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);
        } else {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined (division by zero)\n", sum, diff, prod);
        }
    }
}

int main(void) {
    printf("=== Day 1 | Q1 ===\n");
    solve_q1();

    printf("\n=== Day 1 | Q2 ===\n");
    solve_q2();
    return 0;
}
