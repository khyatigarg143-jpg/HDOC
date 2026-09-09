/*
 * ============================================================================
 * Day             : Day 24 (Day-024)
 * Date            : 9 September 2026
 * Topic           : Nested Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q47 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   *
 *   **
 *   ***
 *   ****
 *   *****
 *
 * Explanation:
 *   Uses nested loops to print a right-angled triangle of asterisks with i stars on row i (1 to 5).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : * \n ** \n *** \n **** \n *****
 *
 * Time Complexity : O(1) (fixed 5 rows)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q48 (Nested Loops without Arrays/Strings):
 *   Write a program to print the following pattern:
 *   1
 *   12
 *   123
 *   1234
 *   12345
 *
 * Explanation:
 *   Uses nested loops to print numbers from 1 to i on each row i (for i = 1 to 5).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : (No input)
 *     Output : 1 \n 12 \n 123 \n 1234 \n 12345
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

/* --- Q47: Write a program to print the following pattern: --- */
void solve_q47(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/* --- Q48: Write a program to print the following pattern: --- */
void solve_q48(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 24 | Q47 ===\n");
    solve_q47();

    printf("\n=== Day 24 | Q48 ===\n");
    solve_q48();
    return 0;
}
