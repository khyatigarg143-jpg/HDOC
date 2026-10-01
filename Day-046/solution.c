/*
 * ============================================================================
 * Day             : Day 46 (Day-046)
 * Date            : 1 October 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q91 (Strings):
 *   Remove all vowels from a string.
 *
 * Explanation:
 *   Uses a write index to copy only non-vowel characters in-place and null-terminates the filtered string.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : education
 *     Output : dctn
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q92 (Strings):
 *   Find the first repeating lowercase alphabet in a string.
 *
 * Explanation:
 *   Counts lowercase character frequencies and finds the first lowercase alphabet that appears more than once.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : stress
 *     Output : s
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

/* --- Q91: Remove all vowels from a string. --- */
void solve_q91(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int k = 0;
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            char c = str[i];
            char lower = (c >= 'A' && c <= 'Z') ? (c + 32) : c;
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                str[k++] = c;
            }
        }
        str[k] = '\0';
        printf("%s\n", str);
    }
}

/* --- Q92: Find the first repeating lowercase alphabet in a string. --- */
void solve_q92(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int freq[26] = {0};
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                freq[str[i] - 'a']++;
            }
        }
        char ans = '\0';
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
                ans = str[i];
                break;
            }
        }
        if (ans != '\0') printf("%c\n", ans);
        else printf("-1\n");
    }
}

int main(void) {
    printf("=== Day 46 | Q91 ===\n");
    solve_q91();

    printf("\n=== Day 46 | Q92 ===\n");
    solve_q92();
    return 0;
}
