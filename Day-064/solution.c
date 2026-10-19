/*
 * ============================================================================
 * Day             : Day 64 (Day-064)
 * Date            : 19 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q114 (Logic Enhancers):
 *   Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 *
 * Explanation:
 *   Uses a sliding window with an array tracking the last seen index of each ASCII character to find the longest substring without repeating characters.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : s = "abcabcbb"
 *     Output : 3
 *     Detail : The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
 *   Test Case 2:
 *     Input  : s = "bbbbb"
 *     Output : 1
 *     Detail : The answer is "b", with the length of 1.
 *   Test Case 3:
 *     Input  : s = "pwwkew"
 *     Output : 3
 *     Detail : The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1) (fixed 256-element table)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000];
    printf("Enter a string: ");
    if (scanf("%999s", s) == 1) {
        int last_index[256];
        for (int i = 0; i < 256; i++) last_index[i] = -1;

        int max_len = 0, start = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            unsigned char ch = (unsigned char)s[i];
            if (last_index[ch] >= start) {
                start = last_index[ch] + 1;
            }
            last_index[ch] = i;
            int cur_len = i - start + 1;
            if (cur_len > max_len) max_len = cur_len;
        }
        printf("%d\n", max_len);
    }
    return 0;
}
