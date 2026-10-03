/*
 * ============================================================================
 * Day             : Day 48 (Day-048)
 * Date            : 3 October 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q95 (Strings):
 *   Check if one string is a rotation of another.
 *
 * Explanation:
 *   Checks that both strings have equal length and that s2 is a substring of s1 concatenated with itself (s1 + s1).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : abcde \n deabc
 *     Output : Rotation
 *   Test Case 2:
 *     Input  : abc \n acb
 *     Output : Not rotation
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 * ----------------------------------------------------------------------------
 *
 * Question Q96 (Strings):
 *   Reverse each word in a sentence without changing the word order.
 *
 * Explanation:
 *   Identifies each word boundary in the sentence and reverses the characters of each word in-place.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : I love coding
 *     Output : I evol gnidoc
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

/* --- Q95: Check if one string is a rotation of another. --- */
void solve_q95(void) {
    char s1[1000], s2[1000], doubled[2000];
    if (scanf("%999s %999s", s1, s2) == 2) {
        if (strlen(s1) == strlen(s2)) {
            strcpy(doubled, s1);
            strcat(doubled, s1);
            if (strstr(doubled, s2) != NULL) {
                printf("Rotation\n");
                return;
            }
        }
        printf("Not rotation\n");
    }
}

/* --- Q96: Reverse each word in a sentence without changing the word order. --- */
void solve_q96(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = (int)strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[--len] = '\0';
        }
        int start = 0;
        for (int i = 0; i <= len; i++) {
            if (str[i] == ' ' || str[i] == '\0') {
                int left = start, right = i - 1;
                while (left < right) {
                    char temp = str[left];
                    str[left] = str[right];
                    str[right] = temp;
                    left++;
                    right--;
                }
                start = i + 1;
            }
        }
        printf("%s\n", str);
    }
}

int main(void) {
    printf("=== Day 48 | Q95 ===\n");
    solve_q95();

    printf("\n=== Day 48 | Q96 ===\n");
    solve_q96();
    return 0;
}
