/*
 * ============================================================================
 * Day             : Day 85 (Day-085)
 * Date            : 9 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q135 (Enum):
 *   Assign explicit values starting from 10 and print them.
 *
 * Explanation:
 *   Assigns an explicit starting integer value of 10 to the first enum constant (A = 10), causing B and C to auto-increment to 11 and 12.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : No input
 *     Output : A=10 \n B=11 \n C=12
 *     Detail : Enum values can be explicitly assigned; subsequent values auto-increment.
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

enum Values { A = 10, B, C };

int main(void) {
    printf("A=%d\nB=%d\nC=%d\n", A, B, C);
    return 0;
}
