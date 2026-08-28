/*
 * ============================================================================
 * Day             : Day 12 (Day-012)
 * Date            : 28 August 2026
 * Topic           : Conditional Statements
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q23 (Conditional Statements):
 *   Write a program to calculate library fine based on late days as follows: 
 *   First 5 days late: ₹2/day 
 *   Next 5 days late: ₹4/day 
 *   Next 20 days days late: ₹6/day 
 *   More than 30 days: Membership Cancelled.
 *
 * Explanation:
 *   Calculates progressive library fine: first 5 days at Rs 2/day, next 5 days (6-10) at Rs 4/day, next 20 days (11-30) at Rs 6/day, and >30 days cancels membership.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 4
 *     Output : Fine ₹8
 *   Test Case 2:
 *     Input  : 8
 *     Output : Fine ₹22
 *   Test Case 3:
 *     Input  : 15
 *     Output : Fine ₹60
 *   Test Case 4:
 *     Input  : 31
 *     Output : Membership Cancelled
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q24 (Conditional Statements):
 *   Write a program to calculate electricity bill based on units consumed with these rates: 
 *   First 100 units at ₹5/unit 
 *   Next 100 units at ₹7/unit 
 *   Next 100 units at ₹10/unit 
 *   Above at ₹12/unit
 *
 * Explanation:
 *   Calculates tiered electricity bill: first 100 units at Rs 5/unit, next 100 at Rs 7/unit, next 100 at Rs 10/unit, and above 300 at Rs 12/unit.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 50
 *     Output : Bill: ₹250
 *   Test Case 2:
 *     Input  : 150
 *     Output : Bill: ₹850
 *   Test Case 3:
 *     Input  : 250
 *     Output : Bill: ₹1700
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

/* --- Q23: Write a program to calculate library fine based on late days as follows:  --- */
void solve_q23(void) {
    int days;
    printf("Enter number of late days: ");
    if (scanf("%d", &days) == 1) {
        if (days <= 0) {
            printf("Fine ₹0\n");
        } else if (days <= 5) {
            printf("Fine ₹%d\n", days * 2);
        } else if (days <= 10) {
            printf("Fine ₹%d\n", 5 * 2 + (days - 5) * 4);
        } else if (days <= 30) {
            printf("Fine ₹%d\n", 5 * 2 + 5 * 4 + (days - 10) * 6);
        } else {
            printf("Membership Cancelled\n");
        }
    }
}

/* --- Q24: Write a program to calculate electricity bill based on units consumed with these rates:  --- */
void solve_q24(void) {
    int units;
    printf("Enter units consumed: ");
    if (scanf("%d", &units) == 1) {
        int bill = 0;
        if (units <= 100) {
            bill = units * 5;
        } else if (units <= 200) {
            bill = 100 * 5 + (units - 100) * 7;
        } else if (units <= 300) {
            bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        } else {
            bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
        }
        printf("Bill: ₹%d\n", bill);
    }
}

int main(void) {
    printf("=== Day 12 | Q23 ===\n");
    solve_q23();

    printf("\n=== Day 12 | Q24 ===\n");
    solve_q24();
    return 0;
}
