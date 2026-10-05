/*
 * ============================================================================
 * Day             : Day 50 (Day-050)
 * Date            : 5 October 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q99 (Strings):
 *   Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 *
 * Explanation:
 *   Parses day, month, and year from dd/mm/yyyy format and prints dd-MMM-yyyy using a month abbreviation lookup table.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 15/04/2025
 *     Output : 15-Apr-2025
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q100 (Strings):
 *   Print all sub-strings of a string.
 *
 * Explanation:
 *   Uses nested loops over start index i and end index j to print all contiguous substrings separated by commas.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : abc
 *     Output : a,ab,abc,b,bc,c
 *
 * Time Complexity : O(n^3)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy. --- */
void solve_q99(void) {
    int d, m, y;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    if (scanf("%d/%d/%d", &d, &m, &y) == 3 && m >= 1 && m <= 12) {
        printf("%02d-%s-%04d\n", d, months[m], y);
    }
}

/* --- Q100: Print all sub-strings of a string. --- */
void solve_q100(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int len = (int)strlen(str);
        int first = 1;
        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                if (!first) printf(",");
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
                first = 0;
            }
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 50 | Q99 ===\n");
    solve_q99();

    printf("\n=== Day 50 | Q100 ===\n");
    solve_q100();
    return 0;
}
