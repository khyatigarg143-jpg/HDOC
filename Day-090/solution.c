/*
 * ============================================================================
 * Day             : Day 90 (Day-090)
 * Date            : 14 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q140 (Enum):
 *   Define a struct with enum Gender and print person's gender.
 *
 * Explanation:
 *   Defines an enum Gender inside a Person struct, reads the gender value, and prints the corresponding human-readable label.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Gender=MALE
 *     Output : Male
 *     Detail : The enum inside the struct allows representing gender as a named constant.
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

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main(void) {
    char input[30];
    printf("Enter gender (e.g., MALE, FEMALE, OTHER): ");
    if (scanf("%29s", input) == 1) {
        struct Person p;
        if (strstr(input, "FEMALE") != NULL) p.gender = FEMALE;
        else if (strstr(input, "MALE") != NULL) p.gender = MALE;
        else p.gender = OTHER;

        if (p.gender == MALE) printf("Male\n");
        else if (p.gender == FEMALE) printf("Female\n");
        else printf("Other\n");
    }
    return 0;
}
