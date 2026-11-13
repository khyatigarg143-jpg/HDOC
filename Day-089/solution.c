/*
 * ============================================================================
 * Day             : Day 89 (Day-089)
 * Date            : 13 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q139 (Enum):
 *   Show that enums store integers by printing assigned values.
 *
 * Explanation:
 *   Demonstrates that enumeration constants are stored as integers by printing SUCCESS, FAILURE, and TIMEOUT with %d format specifiers.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : No input
 *     Output : SUCCESS=0, FAILURE=1, TIMEOUT=2
 *     Detail : Enum constants are internally stored as integer values starting from 0.
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

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
