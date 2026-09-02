/*
 * ============================================================================
 * Day             : Day 17 (Day-017)
 * Date            : 2 September 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q33 (Loops without Arrays/Strings):
 *   Write a program to check if a number is an Armstrong number.
 *
 * Explanation:
 *   Counts the number of digits d in the number, then sums each digit raised to the power d and compares with the original number.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 153
 *     Output : Armstrong
 *   Test Case 2:
 *     Input  : 123
 *     Output : Not Armstrong
 *
 * Time Complexity : O(log10(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q34 (Loops without Arrays/Strings):
 *   Write a program to check if a number is prime.
 *
 * Explanation:
 *   Checks if a number n > 1 has any divisor from 2 up to sqrt(n).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 7
 *     Output : Prime
 *   Test Case 2:
 *     Input  : 10
 *     Output : Not prime
 *
 * Time Complexity : O(sqrt(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q33: Write a program to check if a number is an Armstrong number. --- */
void solve_q33(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        int original = n, temp = n, digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        if (original == 0) digits = 1;
        temp = original;
        int sum = 0;
        while (temp > 0) {
            int rem = temp % 10;
            int p = 1;
            for (int i = 0; i < digits; i++) p *= rem;
            sum += p;
            temp /= 10;
        }
        if (sum == original) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
}

/* --- Q34: Write a program to check if a number is prime. --- */
void solve_q34(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        if (n <= 1) {
            printf("Not prime\n");
            return;
        }
        int is_prime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }
}

int main(void) {
    printf("=== Day 17 | Q33 ===\n");
    solve_q33();

    printf("\n=== Day 17 | Q34 ===\n");
    solve_q34();
    return 0;
}
