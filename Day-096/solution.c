/*
 * ============================================================================
 * Day             : Day 96 (Day-096)
 * Date            : 18 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q146 (Enum):
 *   Create Employee structure with nested Date structure for joining date and print details.
 *
 * Explanation:
 *   Defines a Date structure (day, month, year) nested inside an Employee structure and prints the formatted employee details.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Employee: Raj | ID: 11 | Joining Date: 12 05 2020
 *     Output : Name: Raj | ID: 11 | Joining Date: 12/05/2020
 *     Detail : Nested structure Date is used inside Employee structure to represent joining date.
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

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joining_date;
};

int main(void) {
    struct Employee emp;
    printf("Enter Employee Name, ID, and Joining Date (dd mm yyyy): ");
    if (scanf("%99s %d %d %d %d",
              emp.name, &emp.id,
              &emp.joining_date.day,
              &emp.joining_date.month,
              &emp.joining_date.year) == 5) {
        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
               emp.name, emp.id,
               emp.joining_date.day,
               emp.joining_date.month,
               emp.joining_date.year);
    }
    return 0;
}
