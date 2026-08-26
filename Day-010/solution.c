/*
 * ============================================================================
 * Day             : Day 10 (Day-010)
 * Date            : 26 August 2026
 * Topic           : Conditional Statements
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q19 (Conditional Statements):
 *   Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 *
 * Explanation:
 *   Compares the three side lengths of a triangle: all three equal -> Equilateral, any two equal -> Isosceles, all different -> Scalene.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 3 3
 *     Output : Equilateral
 *   Test Case 2:
 *     Input  : 3 3 4
 *     Output : Isosceles
 *   Test Case 3:
 *     Input  : 2 3 4
 *     Output : Scalene
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q20 (Conditional Statements):
 *   Write a program to display the day of the week based on a number (1–7) using switch-case.
 *
 * Explanation:
 *   Uses a switch-case statement to map numbers 1 through 7 to Monday through Sunday.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 1
 *     Output : Monday
 *   Test Case 2:
 *     Input  : 5
 *     Output : Friday
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

/* --- Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. --- */
void solve_q19(void) {
    int a, b, c;
    printf("Enter three side lengths: ");
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }
}

/* --- Q20: Write a program to display the day of the week based on a number (1–7) using switch-case. --- */
void solve_q20(void) {
    int day;
    printf("Enter day number (1-7): ");
    if (scanf("%d", &day) == 1) {
        switch (day) {
            case 1: printf("Monday\n"); break;
            case 2: printf("Tuesday\n"); break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n"); break;
            case 5: printf("Friday\n"); break;
            case 6: printf("Saturday\n"); break;
            case 7: printf("Sunday\n"); break;
            default: printf("Invalid day number\n"); break;
        }
    }
}

int main(void) {
    printf("=== Day 10 | Q19 ===\n");
    solve_q19();

    printf("\n=== Day 10 | Q20 ===\n");
    solve_q20();
    return 0;
}
