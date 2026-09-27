/*
 * ============================================================================
 * Day             : Day 42 (Day-042)
 * Date            : 27 September 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q83 (Strings):
 *   Count vowels and consonants in a string.
 *
 * Explanation:
 *   Scans each character of the string, counting alphabetic vowels (a, e, i, o, u) and consonants.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : hello
 *     Output : Vowels=2, Consonants=3
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q84 (Strings):
 *   Convert a lowercase string to uppercase without using built-in functions.
 *
 * Explanation:
 *   Converts each lowercase character ('a' to 'z') to uppercase by subtracting 32 from its ASCII value.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : hello
 *     Output : HELLO
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

/* --- Q83: Count vowels and consonants in a string. --- */
void solve_q83(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int vowels = 0, consonants = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                    vowels++;
                else
                    consonants++;
            }
        }
        printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    }
}

/* --- Q84: Convert a lowercase string to uppercase without using built-in functions. --- */
void solve_q84(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n' || str[i] == '\r') {
                str[i] = '\0';
                break;
            }
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
        printf("%s\n", str);
    }
}

int main(void) {
    printf("=== Day 42 | Q83 ===\n");
    solve_q83();

    printf("\n=== Day 42 | Q84 ===\n");
    solve_q84();
    return 0;
}
