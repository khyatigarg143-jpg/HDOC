/*
 * ============================================================================
 * Day             : Day 45 (Day-045)
 * Date            : 30 September 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q89 (Strings):
 *   Count frequency of a given character in a string.
 *
 * Explanation:
 *   Scans the string and counts how many times the target character appears.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : programming \n g
 *     Output : 2
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q90 (Strings):
 *   Toggle case of each character in a string.
 *
 * Explanation:
 *   Converts uppercase letters to lowercase (+32) and lowercase letters to uppercase (-32).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Hello
 *     Output : hELLO
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

/* --- Q89: Count frequency of a given character in a string. --- */
void solve_q89(void) {
    char str[1000], target;
    if (scanf("%999s", str) == 1 && scanf(" %c", &target) == 1) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == target) count++;
        }
        printf("%d\n", count);
    }
}

/* --- Q90: Toggle case of each character in a string. --- */
void solve_q90(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n' || str[i] == '\r') {
                str[i] = '\0';
                break;
            }
            if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
            else if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        }
        printf("%s\n", str);
    }
}

int main(void) {
    printf("=== Day 45 | Q89 ===\n");
    solve_q89();

    printf("\n=== Day 45 | Q90 ===\n");
    solve_q90();
    return 0;
}
