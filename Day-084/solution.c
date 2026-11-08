/*
 * ============================================================================
 * Day             : Day 84 (Day-084)
 * Date            : 8 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q134 (Enum):
 *   Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 *
 * Explanation:
 *   Defines an enum Status { SUCCESS, FAILURE, TIMEOUT } and prints the corresponding status message.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : FAILURE
 *     Output : Operation failed
 *     Detail : FAILURE corresponds to a failed operation message.
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
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    if (scanf("%19s", input) == 1) {
        enum Status s = SUCCESS;
        if (strcmp(input, "FAILURE") == 0) s = FAILURE;
        else if (strcmp(input, "TIMEOUT") == 0) s = TIMEOUT;

        switch (s) {
            case SUCCESS: printf("Operation successful\n"); break;
            case FAILURE: printf("Operation failed\n"); break;
            case TIMEOUT: printf("Operation timed out\n"); break;
        }
    }
    return 0;
}
