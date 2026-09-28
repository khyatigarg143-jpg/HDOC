/*
 * ============================================================================
 * Day             : Day 43 (Day-043)
 * Date            : 28 September 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q85 (Strings):
 *   Reverse a string.
 *
 * Explanation:
 *   Finds the string length and swaps characters from both ends moving inward.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : abcd
 *     Output : dcba
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q86 (Strings):
 *   Check if a string is a palindrome.
 *
 * Explanation:
 *   Compares characters at symmetric indices i and (len - 1 - i) to determine if the string reads the same forwards and backwards.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : madam
 *     Output : Palindrome
 *   Test Case 2:
 *     Input  : hello
 *     Output : Not palindrome
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

/* --- Q85: Reverse a string. --- */
void solve_q85(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int len = 0;
        while (str[len] != '\0') len++;
        for (int i = 0; i < len / 2; i++) {
            char temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
        printf("%s\n", str);
    }
}

/* --- Q86: Check if a string is a palindrome. --- */
void solve_q86(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int len = 0;
        while (str[len] != '\0') len++;
        int is_pal = 1;
        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                is_pal = 0;
                break;
            }
        }
        printf("%s\n", is_pal ? "Palindrome" : "Not palindrome");
    }
}

int main(void) {
    printf("=== Day 43 | Q85 ===\n");
    solve_q85();

    printf("\n=== Day 43 | Q86 ===\n");
    solve_q86();
    return 0;
}
