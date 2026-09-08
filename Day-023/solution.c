/*
 * ============================================================================
 * Day             : Day 23 (Day-023)
 * Date            : 8 September 2026
 * Topic           : Loops without Arrays/Strings / Nested Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q45 (Loops without Arrays/Strings):
 *   Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 *
 * Explanation:
 *   Calculates the sum of n terms of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... where the i-th term (1-indexed) is (2*i) / (4*i - 1).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3
 *     Output : Approximate sum: 1.56
 *   Test Case 2:
 *     Input  : 5
 *     Output : Approximate sum: 2.22
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q46 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   *****
 *   *****
 *   *****
 *   *****
 *   *****
 *
 * Explanation:
 *   Uses nested loops (5 rows, 5 columns) to print a 5x5 grid of asterisks.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : ***** \n ***** \n ***** \n ***** \n *****
 *
 * Time Complexity : O(1) (fixed 5x5 grid)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. --- */
void solve_q45(void) {
    int n;
    printf("Enter number of terms n: ");
    if (scanf("%d", &n) == 1) {
        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            sum += (double)(2 * i) / (double)(4 * i - 1);
        }
        printf("Approximate sum: %.2f\n", sum);
    }
}

/* --- Q46: Write a program to print the following pattern: --- */
void solve_q46(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 23 | Q45 ===\n");
    solve_q45();

    printf("\n=== Day 23 | Q46 ===\n");
    solve_q46();
    return 0;
}
