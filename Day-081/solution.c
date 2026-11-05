/*
 * ============================================================================
 * Day             : Day 81 (Day-081)
 * Date            : 5 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q131 (Enum):
 *   Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
 *
 * Explanation:
 *   Defines an enum Day from SUNDAY (0) to SATURDAY (6) and prints each day constant alongside its integer value.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : No input
 *     Output : SUNDAY = 0 \n MONDAY = 1 \n TUESDAY = 2 \n WEDNESDAY = 3 \n THURSDAY = 4 \n FRIDAY = 5 \n SATURDAY = 6
 *     Detail : Each day in the enum is automatically assigned an integer starting from 0.
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

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void) {
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };
    for (int d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", names[d], d);
    }
    return 0;
}
