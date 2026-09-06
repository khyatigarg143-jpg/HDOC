/*
 * ============================================================================
 * Day             : Day 21 (Day-021)
 * Date            : 6 September 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q41 (Loops without Arrays/Strings):
 *   Write a program to swap the first and last digit of a number.
 *
 * Explanation:
 *   Isolates the first digit, middle part, and last digit using powers of 10, then reconstructs the number with first and last digits swapped.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 1234
 *     Output : 4231
 *   Test Case 2:
 *     Input  : 1001
 *     Output : 1001
 *
 * Time Complexity : O(log10(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q42 (Loops without Arrays/Strings):
 *   Write a program to check if a number is a perfect number.
 *
 * Explanation:
 *   Sums all proper divisors of n (from 1 to n/2) and checks if the sum equals n.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 6
 *     Output : Perfect number
 *   Test Case 2:
 *     Input  : 10
 *     Output : Not perfect number
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

/* --- Q41: Write a program to swap the first and last digit of a number. --- */
void solve_q41(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        if (n < 10) {
            printf("%d\n", n);
            return;
        }
        int last = n % 10;
        int temp = n, pow10 = 1;
        while (temp >= 10) {
            temp /= 10;
            pow10 *= 10;
        }
        int first = temp;
        int middle = (n % pow10) / 10;
        int swapped = last * pow10 + middle * 10 + first;
        printf("%d\n", swapped);
    }
}

/* --- Q42: Write a program to check if a number is a perfect number. --- */
void solve_q42(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (n > 0 && sum == n) {
            printf("Perfect number\n");
        } else {
            printf("Not perfect number\n");
        }
    }
}

int main(void) {
    printf("=== Day 21 | Q41 ===\n");
    solve_q41();

    printf("\n=== Day 21 | Q42 ===\n");
    solve_q42();
    return 0;
}
