/*
 * ============================================================================
 * Day             : Day 7 (Day-007)
 * Date            : 23 August 2026
 * Topic           : Conditional Statements
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q13 (Conditional Statements):
 *   Write a program to input a year and check whether it is a leap year or not using conditional statements.
 *   Note: Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
 *
 * Explanation:
 *   Checks leap year rules: divisible by 400, OR divisible by 4 and not divisible by 100.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2020
 *     Output : Leap year
 *   Test Case 2:
 *     Input  : 1900
 *     Output : Not a leap year
 *   Test Case 3:
 *     Input  : 2000
 *     Output : Leap year
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q14 (Conditional Statements):
 *   Write a program to input a character and check whether it is a vowel or consonant using if–else.
 *
 * Explanation:
 *   Checks whether an input alphabet character is a vowel (a, e, i, o, u in upper or lower case) or a consonant.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : a
 *     Output : Vowel
 *   Test Case 2:
 *     Input  : b
 *     Output : Consonant
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

/* --- Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements. --- */
void solve_q13(void) {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) == 1) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }
}

/* --- Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else. --- */
void solve_q14(void) {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) == 1) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
}

int main(void) {
    printf("=== Day 7 | Q13 ===\n");
    solve_q13();

    printf("\n=== Day 7 | Q14 ===\n");
    solve_q14();
    return 0;
}
