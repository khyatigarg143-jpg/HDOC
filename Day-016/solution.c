/*
 * ============================================================================
 * Day             : Day 16 (Day-016)
 * Date            : 1 September 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q31 (Loops without Arrays/Strings):
 *   Write a program to take a number as input and print its equivalent binary representation.
 *
 * Explanation:
 *   Converts a non-negative integer to its binary representation without arrays by accumulating bits in base 10 place values.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 10
 *     Output : 1010
 *   Test Case 2:
 *     Input  : 7
 *     Output : 111
 *
 * Time Complexity : O(log2(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q32 (Loops without Arrays/Strings):
 *   Write a program to check if a number is a palindrome.
 *
 * Explanation:
 *   Reverses the input integer and compares the reversed number with the original number.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 121
 *     Output : Palindrome
 *   Test Case 2:
 *     Input  : 123
 *     Output : Not palindrome
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

/* --- Q31: Write a program to take a number as input and print its equivalent binary representation. --- */
void solve_q31(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        if (n == 0) {
            printf("0\n");
            return;
        }
        long long binary = 0, place = 1;
        while (n > 0) {
            int rem = n % 2;
            binary += rem * place;
            place *= 10;
            n /= 2;
        }
        printf("%lld\n", binary);
    }
}

/* --- Q32: Write a program to check if a number is a palindrome. --- */
void solve_q32(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        int original = n, rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        if (original == rev) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
}

int main(void) {
    printf("=== Day 16 | Q31 ===\n");
    solve_q31();

    printf("\n=== Day 16 | Q32 ===\n");
    solve_q32();
    return 0;
}
