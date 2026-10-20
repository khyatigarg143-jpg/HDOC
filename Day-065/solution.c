/*
 * ============================================================================
 * Day             : Day 65 (Day-065)
 * Date            : 20 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q115 (Logic Enhancers):
 *   Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
 *
 * Explanation:
 *   Counts lowercase character frequencies (a-z) for strings s and t and checks if all 26 frequency counts match.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : s = "anagram", t = "nagaram"
 *     Output : Anagram
 *     Detail : The strings contain the same characters with the same frequencies.
 *   Test Case 2:
 *     Input  : s = "rat", t = "car"
 *     Output : Not Anagram
 *     Detail : The strings do not contain the same characters.
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

int main(void) {
    char s[1000], t[1000];
    printf("Enter two strings: ");
    if (scanf("%999s %999s", s, t) == 2) {
        if (strlen(s) != strlen(t)) {
            printf("Not Anagram\n");
            return 0;
        }
        int count[26] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                printf("Not Anagram\n");
                return 0;
            }
        }
        printf("Anagram\n");
    }
    return 0;
}
