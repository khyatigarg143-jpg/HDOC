/*
 * ============================================================================
 * Day             : Day 25 (Day-025)
 * Date            : 10 September 2026
 * Topic           : Nested Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q49 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   5
 *   45
 *   345
 *   2345
 *   12345
 *
 * Explanation:
 *   Prints numbers starting from (6 - i) up to 5 on row i (for i = 1 to 5).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : 5 \n 45 \n 345 \n 2345 \n 12345
 *
 * Time Complexity : O(1) (fixed 5 rows)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q50 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   *****
 *    ****
 *     ***
 *      **
 *       *
 *
 * Explanation:
 *   Prints an inverted right-aligned triangle of stars with (i - 1) leading spaces and (6 - i) stars on row i.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : ***** \n  **** \n   *** \n    ** \n     *
 *   Test Case 2:
 *     Input  : (No input)
 *     Output : Note: Spaces indicate indentation.
 *
 * Time Complexity : O(1) (fixed 5 rows)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q49: Write a program to print the following pattern: --- */
void solve_q49(void) {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

/* --- Q50: Write a program to print the following pattern: --- */
void solve_q50(void) {
    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 6 - i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 25 | Q49 ===\n");
    solve_q49();

    printf("\n=== Day 25 | Q50 ===\n");
    solve_q50();
    return 0;
}
