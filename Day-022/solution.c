/*
 * ============================================================================
 * Day             : Day 22 (Day-022)
 * Date            : 7 September 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q43 (Loops without Arrays/Strings):
 *   Write a program to check if a number is a strong number.
 *
 * Explanation:
 *   Computes the sum of factorials of the digits of n and checks whether it equals the original number (e.g., 145 = 1! + 4! + 5!).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 145
 *     Output : Strong number
 *   Test Case 2:
 *     Input  : 123
 *     Output : Not strong number
 *
 * Time Complexity : O(log10(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q44 (Loops without Arrays/Strings):
 *   Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
 *
 * Explanation:
 *   Calculates the sum of n terms of the series: 1 + 3/4 + 5/6 + 7/8 + ... where term 1 is 1 and term i (i >= 2) is (2*i - 1) / (2*i).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3
 *     Output : Approximate sum: 3.3
 *   Test Case 2:
 *     Input  : 5
 *     Output : Approximate sum: 4.4
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

/* --- Q43: Write a program to check if a number is a strong number. --- */
void solve_q43(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        int original = n, sum = 0;
        while (n > 0) {
            int digit = n % 10;
            int fact = 1;
            for (int i = 1; i <= digit; i++) {
                fact *= i;
            }
            sum += fact;
            n /= 10;
        }
        if (original > 0 && sum == original) {
            printf("Strong number\n");
        } else {
            printf("Not strong number\n");
        }
    }
}

/* --- Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. --- */
void solve_q44(void) {
    int n;
    printf("Enter number of terms n: ");
    if (scanf("%d", &n) == 1) {
        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                sum += 1.0;
            } else {
                sum += (double)(2 * i - 1) / (double)(2 * i);
            }
        }
        printf("Approximate sum: %.1f\n", sum);
    }
}

int main(void) {
    printf("=== Day 22 | Q43 ===\n");
    solve_q43();

    printf("\n=== Day 22 | Q44 ===\n");
    solve_q44();
    return 0;
}
