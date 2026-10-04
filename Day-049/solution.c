/*
 * ============================================================================
 * Day             : Day 49 (Day-049)
 * Date            : 4 October 2026
 * Topic           : Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q97 (Strings):
 *   Print the initials of a name.
 *
 * Explanation:
 *   Prints the first character of each word in the name followed by a period ('.').
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : John Doe
 *     Output : J.D.
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q98 (Strings):
 *   Print initials of a name with the surname displayed in full.
 *
 * Explanation:
 *   Prints initials with periods for all words before the last space, then prints the surname (last word) in full.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : John David Doe
 *     Output : J.D. Doe
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

/* --- Q97: Print the initials of a name. --- */
void solve_q97(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int in_word = 0;
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            if (str[i] != ' ') {
                if (!in_word) {
                    printf("%c.", str[i]);
                    in_word = 1;
                }
            } else {
                in_word = 0;
            }
        }
        printf("\n");
    }
}

/* --- Q98: Print initials of a name with the surname displayed in full. --- */
void solve_q98(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = (int)strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r' || str[len - 1] == ' ')) {
            str[--len] = '\0';
        }
        int last_space = -1;
        for (int i = 0; i < len; i++) {
            if (str[i] == ' ') last_space = i;
        }
        if (last_space == -1) {
            printf("%s\n", str);
            return;
        }
        int in_word = 0;
        for (int i = 0; i < last_space; i++) {
            if (str[i] != ' ') {
                if (!in_word) {
                    printf("%c.", str[i]);
                    in_word = 1;
                }
            } else {
                in_word = 0;
            }
        }
        printf(" %s\n", &str[last_space + 1]);
    }
}

int main(void) {
    printf("=== Day 49 | Q97 ===\n");
    solve_q97();

    printf("\n=== Day 49 | Q98 ===\n");
    solve_q98();
    return 0;
}
