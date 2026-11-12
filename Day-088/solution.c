/*
 * ============================================================================
 * Day             : Day 88 (Day-088)
 * Date            : 12 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q138 (Enum):
 *   Print all enum names and integer values using a loop.
 *
 * Explanation:
 *   Iterates through enum constants from RED (0) to GREEN (2) using a for loop and prints their names and integer values.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : No input
 *     Output : RED=0 \n YELLOW=1 \n GREEN=2
 *     Detail : Iterating through enum values prints each constant with its assigned integer.
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

enum Color { RED, YELLOW, GREEN };

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }
    return 0;
}
