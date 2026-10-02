/*
 * ============================================================================
 * Day             : Day 47 (Day-047)
 * Date            : 2 October 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q93 (Strings):
 *   Check if two strings are anagrams of each other.
 *
 * Explanation:
 *   Uses a frequency array of size 256 to verify whether both strings have identical character counts.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : listen \n silent
 *     Output : Anagrams
 *   Test Case 2:
 *     Input  : hello \n world
 *     Output : Not anagrams
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q94 (Strings):
 *   Find the longest word in a sentence.
 *
 * Explanation:
 *   Scans the sentence character by character, tracking the start index and length of the longest space-separated word.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : I love programming
 *     Output : programming
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

/* --- Q93: Check if two strings are anagrams of each other. --- */
void solve_q93(void) {
    char s1[1000], s2[1000];
    if (scanf("%999s %999s", s1, s2) == 2) {
        int freq[256] = {0};
        int len1 = (int)strlen(s1), len2 = (int)strlen(s2);
        if (len1 != len2) {
            printf("Not anagrams\n");
            return;
        }
        for (int i = 0; i < len1; i++) {
            freq[(unsigned char)s1[i]]++;
            freq[(unsigned char)s2[i]]--;
        }
        int is_anagram = 1;
        for (int i = 0; i < 256; i++) {
            if (freq[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
        printf("%s\n", is_anagram ? "Anagrams" : "Not anagrams");
    }
}

/* --- Q94: Find the longest word in a sentence. --- */
void solve_q94(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int max_len = 0, max_start = 0;
        int cur_len = 0, cur_start = 0;
        for (int i = 0; ; i++) {
            char c = str[i];
            if (c != ' ' && c != '\0' && c != '\n' && c != '\r') {
                if (cur_len == 0) cur_start = i;
                cur_len++;
            } else {
                if (cur_len > max_len) {
                    max_len = cur_len;
                    max_start = cur_start;
                }
                cur_len = 0;
                if (c == '\0' || c == '\n' || c == '\r') break;
            }
        }
        for (int i = 0; i < max_len; i++) {
            printf("%c", str[max_start + i]);
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 47 | Q93 ===\n");
    solve_q93();

    printf("\n=== Day 47 | Q94 ===\n");
    solve_q94();
    return 0;
}
