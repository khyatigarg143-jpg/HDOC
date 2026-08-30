/*
 * ============================================================================
 * Day             : Day 14 (Day-014)
 * Date            : 30 August 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q27 (Loops without Arrays/Strings):
 *   Write a program to print the sum of the first n odd numbers.
 *
 * Explanation:
 *   Iterates through the first n odd numbers (2*i - 1 for i = 1..n) and accumulates their sum.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3
 *     Output : 9
 *   Test Case 2:
 *     Input  : 5
 *     Output : 25
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q28 (Loops without Arrays/Strings):
 *   Write a program to print the product of even numbers from 1 to n.
 *
 * Explanation:
 *   Multiplies all even numbers from 2 up to n using a loop.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 4
 *     Output : 8 (2 * 4)
 *   Test Case 2:
 *     Input  : 6
 *     Output : 48 (2 * 4 * 6)
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q27: Write a program to print the sum of the first n odd numbers. --- */
void solve_q27(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += (2 * i - 1);
        }
        printf("%d\n", sum);
    }
}

/* --- Q28: Write a program to print the product of even numbers from 1 to n. --- */
void solve_q28(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) == 1) {
        long long product = 1;
        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("%lld\n", product);
    }
}

int main(void) {
    printf("=== Day 14 | Q27 ===\n");
    solve_q27();

    printf("\n=== Day 14 | Q28 ===\n");
    solve_q28();
    return 0;
}
