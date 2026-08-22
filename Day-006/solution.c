/*
 * ============================================================================
 * Day             : Day 6 (Day-006)
 * Date            : 22 August 2026
 * Topic           : Conditional Statements
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q11 (Conditional Statements):
 *   Write a program to input an integer and check whether it is even or odd using if–else.
 *
 * Explanation:
 *   Checks whether an integer is divisible by 2 (even) or not (odd) using the modulo operator (%) and if-else.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 7
 *     Output : 7 is odd
 *   Test Case 2:
 *     Input  : 12
 *     Output : 12 is even
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q12 (Conditional Statements):
 *   Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
 *
 * Explanation:
 *   Uses nested if-else statements to check if an integer is positive, negative, or zero.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : -5
 *     Output : Negative
 *   Test Case 2:
 *     Input  : 0
 *     Output : Zero
 *   Test Case 3:
 *     Input  : 10
 *     Output : Positive
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

/* --- Q11: Write a program to input an integer and check whether it is even or odd using if–else. --- */
void solve_q11(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) == 1) {
        if (n % 2 == 0) {
            printf("%d is even\n", n);
        } else {
            printf("%d is odd\n", n);
        }
    }
}

/* --- Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. --- */
void solve_q12(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) == 1) {
        if (n >= 0) {
            if (n == 0) {
                printf("Zero\n");
            } else {
                printf("Positive\n");
            }
        } else {
            printf("Negative\n");
        }
    }
}

int main(void) {
    printf("=== Day 6 | Q11 ===\n");
    solve_q11();

    printf("\n=== Day 6 | Q12 ===\n");
    solve_q12();
    return 0;
}
