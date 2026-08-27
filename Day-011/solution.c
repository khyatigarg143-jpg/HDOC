/*
 * ============================================================================
 * Day             : Day 11 (Day-011)
 * Date            : 27 August 2026
 * Topic           : Conditional Statements
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q21 (Conditional Statements):
 *   Write a program to display the month name and number of days using switch-case for a given month number.
 *
 * Explanation:
 *   Uses switch-case to print the month name and number of days for a given month number (1-12).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2
 *     Output : February, 28 days
 *   Test Case 2:
 *     Input  : 12
 *     Output : December, 31 days
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q22 (Conditional Statements):
 *   Write a program to find profit or loss percentage given cost price and selling price.
 *
 * Explanation:
 *   Compares selling price (SP) and cost price (CP) to calculate profit percentage or loss percentage relative to CP.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 1000 1200
 *     Output : Profit 20%
 *   Test Case 2:
 *     Input  : 1000 800
 *     Output : Loss 20%
 *   Test Case 3:
 *     Input  : 1000 1000
 *     Output : No Profit No Loss
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

/* --- Q21: Write a program to display the month name and number of days using switch-case for a given month number. --- */
void solve_q21(void) {
    int month;
    printf("Enter month number (1-12): ");
    if (scanf("%d", &month) == 1) {
        switch (month) {
            case 1:  printf("January, 31 days\n"); break;
            case 2:  printf("February, 28 days\n"); break;
            case 3:  printf("March, 31 days\n"); break;
            case 4:  printf("April, 30 days\n"); break;
            case 5:  printf("May, 31 days\n"); break;
            case 6:  printf("June, 30 days\n"); break;
            case 7:  printf("July, 31 days\n"); break;
            case 8:  printf("August, 31 days\n"); break;
            case 9:  printf("September, 30 days\n"); break;
            case 10: printf("October, 31 days\n"); break;
            case 11: printf("November, 30 days\n"); break;
            case 12: printf("December, 31 days\n"); break;
            default: printf("Invalid month number\n"); break;
        }
    }
}

/* --- Q22: Write a program to find profit or loss percentage given cost price and selling price. --- */
void solve_q22(void) {
    double cp, sp;
    printf("Enter cost price and selling price: ");
    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (sp > cp) {
            double profit_pct = ((sp - cp) / cp) * 100.0;
            printf("Profit %.0f%%\n", profit_pct);
        } else if (cp > sp) {
            double loss_pct = ((cp - sp) / cp) * 100.0;
            printf("Loss %.0f%%\n", loss_pct);
        } else {
            printf("No Profit No Loss\n");
        }
    }
}

int main(void) {
    printf("=== Day 11 | Q21 ===\n");
    solve_q21();

    printf("\n=== Day 11 | Q22 ===\n");
    solve_q22();
    return 0;
}
