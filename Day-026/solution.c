/*
 * ============================================================================
 * Day             : Day 26 (Day-026)
 * Date            : 11 September 2026
 * Topic           : Nested Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q51 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *       5
 *      45
 *     345
 *    2345
 *   12345
 *
 * Explanation:
 *   Prints leading spaces followed by numbers from i to 5 (for i = 5 down to 1).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output :     5 \n    45 \n   345 \n  2345 \n 12345
 *
 * Time Complexity : O(1) (fixed 5 rows)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q52 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   
 *   *
 *   
 *   *
 *   *
 *   *
 *   
 *   *
 *   *
 *   *
 *   *
 *   *
 *   
 *   *
 *   *
 *   *
 *   
 *   *
 *   
 *   
 *
 * Explanation:
 *   Prints vertical groups of stars of sizes 1, 3, 5, 3, 1 separated by blank lines using nested loops.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : Pattern with stars spaced irregularly as shown.
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

/* --- Q51: Write a program to print the following pattern: --- */
void solve_q51(void) {
    for (int i = 5; i >= 1; i--) {
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

/* --- Q52: Write a program to print the following pattern: --- */
void solve_q52(void) {
    int groups[] = {1, 3, 5, 3, 1};
    for (int g = 0; g < 5; g++) {
        for (int i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        if (g < 4) {
            printf("\n");
        }
    }
}

int main(void) {
    printf("=== Day 26 | Q51 ===\n");
    solve_q51();

    printf("\n=== Day 26 | Q52 ===\n");
    solve_q52();
    return 0;
}
