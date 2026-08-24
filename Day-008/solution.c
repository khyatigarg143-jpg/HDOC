/*
 * ============================================================================
 * Day             : Day 8 (Day-008)
 * Date            : 24 August 2026
 * Topic           : Conditional Statements
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q15 (Conditional Statements):
 *   Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 *
 * Explanation:
 *   Categorizes a character by checking ASCII ranges for uppercase ('A'-'Z'), lowercase ('a'-'z'), digit ('0'-'9'), or special character.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : A
 *     Output : Uppercase alphabet
 *   Test Case 2:
 *     Input  : a
 *     Output : Lowercase alphabet
 *   Test Case 3:
 *     Input  : 3
 *     Output : Digit
 *   Test Case 4:
 *     Input  : #
 *     Output : Special character
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q16 (Conditional Statements):
 *   Write a program to input three numbers and find the largest among them using if–else.
 *
 * Explanation:
 *   Compares three numbers using if-else statements to find and print the largest among them.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 7 5
 *     Output : Largest is 7
 *   Test Case 2:
 *     Input  : -1 -5 0
 *     Output : Largest is 0
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

/* --- Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. --- */
void solve_q15(void) {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) == 1) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase alphabet\n");
        } else if (ch >= 'a' && ch <= 'z') {
            printf("Lowercase alphabet\n");
        } else if (ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("Special character\n");
        }
    }
}

/* --- Q16: Write a program to input three numbers and find the largest among them using if–else. --- */
void solve_q16(void) {
    int a, b, c;
    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a >= b && a >= c) {
            printf("Largest is %d\n", a);
        } else if (b >= a && b >= c) {
            printf("Largest is %d\n", b);
        } else {
            printf("Largest is %d\n", c);
        }
    }
}

int main(void) {
    printf("=== Day 8 | Q15 ===\n");
    solve_q15();

    printf("\n=== Day 8 | Q16 ===\n");
    solve_q16();
    return 0;
}
