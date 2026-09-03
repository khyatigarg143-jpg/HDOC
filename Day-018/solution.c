/*
 * ============================================================================
 * Day             : Day 18 (Day-018)
 * Date            : 3 September 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q35 (Loops without Arrays/Strings):
 *   Write a program to print all factors of a given number.
 *
 * Explanation:
 *   Iterates from 1 to n and prints every integer i that divides n evenly (n % i == 0).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 6
 *     Output : 1 2 3 6
 *   Test Case 2:
 *     Input  : 10
 *     Output : 1 2 5 10
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q36 (Loops without Arrays/Strings):
 *   Write a program to find the HCF (GCD) of two numbers.
 *
 * Explanation:
 *   Uses the Euclidean algorithm to find the Highest Common Factor (GCD) of two integers.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 12 18
 *     Output : 6
 *   Test Case 2:
 *     Input  : 7 9
 *     Output : 1
 *
 * Time Complexity : O(log(min(a, b)))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q35: Write a program to print all factors of a given number. --- */
void solve_q35(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%d%s", i, (i == n) ? "" : " ");
            }
        }
        printf("\n");
    }
}

/* --- Q36: Write a program to find the HCF (GCD) of two numbers. --- */
void solve_q36(void) {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        printf("%d\n", a);
    }
}

int main(void) {
    printf("=== Day 18 | Q35 ===\n");
    solve_q35();

    printf("\n=== Day 18 | Q36 ===\n");
    solve_q36();
    return 0;
}
