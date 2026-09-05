/*
 * ============================================================================
 * Day             : Day 20 (Day-020)
 * Date            : 5 September 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q39 (Loops without Arrays/Strings):
 *   Write a program to find the product of odd digits of a number.
 *
 * Explanation:
 *   Extracts each digit of the number and multiplies it into the product if the digit is odd (defaults to 1 if no odd digits exist).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 12345
 *     Output : 15 (1*3*5)
 *   Test Case 2:
 *     Input  : 2468
 *     Output : 1 (no odd digits, assume 1)
 *
 * Time Complexity : O(log10(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q40 (Loops without Arrays/Strings):
 *   Write a program to find the 1’s complement of a binary number and print it.
 *
 * Explanation:
 *   Reads a binary number, flips each digit (0 becomes 1, 1 becomes 0) while preserving leading zeros in output.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 1010
 *     Output : 0101
 *   Test Case 2:
 *     Input  : 1111
 *     Output : 0000
 *
 * Time Complexity : O(d) where d is number of binary digits
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q39: Write a program to find the product of odd digits of a number. --- */
void solve_q39(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        if (n < 0) n = -n;
        int product = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 != 0) {
                product *= digit;
            }
            n /= 10;
        }
        printf("%d\n", product);
    }
}

/* --- Q40: Write a program to find the 1’s complement of a binary number and print it. --- */
void solve_q40(void) {
    long long bin;
    printf("Enter a binary number: ");
    if (scanf("%lld", &bin) == 1) {
        if (bin == 0) {
            printf("1\n");
            return;
        }
        long long temp = bin, place = 1, comp = 0;
        int digits = 0;
        while (temp > 0) {
            int bit = temp % 10;
            int flipped = (bit == 0) ? 1 : 0;
            comp += flipped * place;
            place *= 10;
            temp /= 10;
            digits++;
        }
        printf("%0*lld\n", digits, comp);
    }
}

int main(void) {
    printf("=== Day 20 | Q39 ===\n");
    solve_q39();

    printf("\n=== Day 20 | Q40 ===\n");
    solve_q40();
    return 0;
}
