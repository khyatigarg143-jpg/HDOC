/*
 * ============================================================================
 * Day             : Day 41 (Day-041)
 * Date            : 26 September 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q81 (Strings):
 *   Count characters in a string without using built-in length functions.
 *
 * Explanation:
 *   Iterates through the character array until the null terminator ('\0') or newline is reached, counting each character.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Hello
 *     Output : 5
 *   Test Case 2:
 *     Input  :  
 *     Output : 1
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q82 (Strings):
 *   Print each character of a string on a new line.
 *
 * Explanation:
 *   Iterates over each character of the string until the null terminator and prints each character on its own line.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Hi
 *     Output : H \n i
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

/* --- Q81: Count characters in a string without using built-in length functions. --- */
void solve_q81(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
            len++;
        }
        printf("%d\n", len);
    }
}

/* --- Q82: Print each character of a string on a new line. --- */
void solve_q82(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            printf("%c\n", str[i]);
        }
    }
}

int main(void) {
    printf("=== Day 41 | Q81 ===\n");
    solve_q81();

    printf("\n=== Day 41 | Q82 ===\n");
    solve_q82();
    return 0;
}
