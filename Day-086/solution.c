/*
 * ============================================================================
 * Day             : Day 86 (Day-086)
 * Date            : 10 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q136 (Enum):
 *   Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 *
 * Explanation:
 *   Defines an enum Menu { ADD, SUBTRACT, MULTIPLY }, parses the operation choice and two operands, and executes the operation via switch-case.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : ADD 10 20
 *     Output : 30
 *     Detail : The enum ADD triggers addition of 10 and 20.
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

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char op_str[20];
    int a, b;
    printf("Enter choice (ADD, SUBTRACT, MULTIPLY) and two numbers: ");
    if (scanf("%19s %d %d", op_str, &a, &b) == 3) {
        enum Menu choice = ADD;
        if (strcmp(op_str, "SUBTRACT") == 0) choice = SUBTRACT;
        else if (strcmp(op_str, "MULTIPLY") == 0) choice = MULTIPLY;

        switch (choice) {
            case ADD:      printf("%d\n", a + b); break;
            case SUBTRACT: printf("%d\n", a - b); break;
            case MULTIPLY: printf("%d\n", a * b); break;
        }
    }
    return 0;
}
