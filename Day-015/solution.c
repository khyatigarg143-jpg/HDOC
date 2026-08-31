/*
 * ============================================================================
 * Day             : Day 15 (Day-015)
 * Date            : 31 August 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q29 (Loops without Arrays/Strings):
 *   Write a program to calculate the factorial of a number.
 *
 * Explanation:
 *   Calculates n! (factorial of n) iteratively by multiplying integers from 1 to n.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5
 *     Output : 120
 *   Test Case 2:
 *     Input  : 3
 *     Output : 6
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q30 (Loops without Arrays/Strings):
 *   Write a program to reverse a given number.
 *
 * Explanation:
 *   Extracts the last digit repeatedly using modulo 10 and builds the reversed integer.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 1234
 *     Output : 4321
 *   Test Case 2:
 *     Input  : 100
 *     Output : 1
 *
 * Time Complexity : O(log10(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q29: Write a program to calculate the factorial of a number. --- */
void solve_q29(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%lld\n", fact);
    }
}

/* --- Q30: Write a program to reverse a given number. --- */
void solve_q30(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        int rev = 0;
        while (n != 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        printf("%d\n", rev);
    }
}

int main(void) {
    printf("=== Day 15 | Q29 ===\n");
    solve_q29();

    printf("\n=== Day 15 | Q30 ===\n");
    solve_q30();
    return 0;
}
