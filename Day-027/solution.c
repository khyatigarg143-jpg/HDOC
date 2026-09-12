/*
 * ============================================================================
 * Day             : Day 27 (Day-027)
 * Date            : 12 September 2026
 * Topic           : Nested Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q53 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   *
 *   ***
 *   *****
 *   *******
 *   *********
 *   *******
 *   *****
 *   ***
 *   *
 *
 * Explanation:
 *   Prints a diamond-like left-aligned star pattern with odd star counts 1, 3, 5, 7, 9, 7, 5, 3, 1.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : * \n *** \n ***** \n ******* \n ********* \n ******* \n ***** \n *** \n *
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q54 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   
 *      *
 *     ***
 *    *****
 *   *******
 *    *****
 *     ***
 *      *
 *   
 *
 * Explanation:
 *   Prints a centered diamond star pattern with 4 upper rows (1, 3, 5, 7 stars) and 3 lower rows (5, 3, 1 stars).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : Pattern with layers of stars as shown.
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

/* --- Q53: Write a program to print the following pattern: --- */
void solve_q53(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/* --- Q54: Write a program to print the following pattern: --- */
void solve_q54(void) {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 27 | Q53 ===\n");
    solve_q53();

    printf("\n=== Day 27 | Q54 ===\n");
    solve_q54();
    return 0;
}
