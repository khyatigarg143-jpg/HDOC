/*
 * ============================================================================
 * Day             : Day 87 (Day-087)
 * Date            : 11 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q137 (Enum):
 *   Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 *
 * Explanation:
 *   Defines an enum Role { ADMIN, USER, GUEST } and displays a welcome/permission message based on the selected role.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : GUEST
 *     Output : Welcome Guest!
 *     Detail : Enum value determines which message is displayed.
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

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char input[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%19s", input) == 1) {
        enum Role role = GUEST;
        if (strcmp(input, "ADMIN") == 0) role = ADMIN;
        else if (strcmp(input, "USER") == 0) role = USER;

        switch (role) {
            case ADMIN: printf("Welcome Admin!\n"); break;
            case USER:  printf("Welcome User!\n"); break;
            case GUEST: printf("Welcome Guest!\n"); break;
        }
    }
    return 0;
}
