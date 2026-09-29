/*
 * ============================================================================
 * Day             : Day 44 (Day-044)
 * Date            : 29 September 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q87 (Strings):
 *   Count spaces, digits, and special characters in a string.
 *
 * Explanation:
 *   Scans the input line and classifies non-alphabetic characters into spaces (' '), digits ('0'-'9'), and special characters.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : a b1&2
 *     Output : Spaces=1, Digits=2, Special=1
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q88 (Strings):
 *   Replace spaces with hyphens in a string.
 *
 * Explanation:
 *   Iterates through the string and replaces every space character (' ') with a hyphen ('-').
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : hello world
 *     Output : hello-world
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

/* --- Q87: Count spaces, digits, and special characters in a string. --- */
void solve_q87(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int spaces = 0, digits = 0, special = 0;
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            char ch = str[i];
            if (ch == ' ') {
                spaces++;
            } else if (ch >= '0' && ch <= '9') {
                digits++;
            } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
                special++;
            }
        }
        printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    }
}

/* --- Q88: Replace spaces with hyphens in a string. --- */
void solve_q88(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n' || str[i] == '\r') {
                str[i] = '\0';
                break;
            }
            if (str[i] == ' ') {
                str[i] = '-';
            }
        }
        printf("%s\n", str);
    }
}

int main(void) {
    printf("=== Day 44 | Q87 ===\n");
    solve_q87();

    printf("\n=== Day 44 | Q88 ===\n");
    solve_q88();
    return 0;
}
