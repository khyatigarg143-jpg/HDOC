/*
 * ============================================================================
 * Day             : Day 83 (Day-083)
 * Date            : 7 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q133 (Enum):
 *   Create an enum for months and print how many days each month has.
 *
 * Explanation:
 *   Defines an enum Month (JAN = 1 to DEC = 12) and prints the number of days for the given month abbreviation.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : FEB
 *     Output : 28 or 29 days
 *     Detail : February has 28 days in a normal year and 29 in a leap year.
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void) {
    char input[20];
    printf("Enter month (e.g., JAN, FEB, ...): ");
    if (scanf("%19s", input) == 1) {
        const char *names[] = {
            "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
            "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
        };
        enum Month m = JAN;
        for (int i = JAN; i <= DEC; i++) {
            if (strcmp(input, names[i]) == 0) {
                m = (enum Month)i;
                break;
            }
        }
        switch (m) {
            case FEB:
                printf("28 or 29 days\n");
                break;
            case APR: case JUN: case SEP: case NOV:
                printf("30 days\n");
                break;
            default:
                printf("31 days\n");
                break;
        }
    }
    return 0;
}
