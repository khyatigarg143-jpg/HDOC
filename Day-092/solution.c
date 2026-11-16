/*
 * ============================================================================
 * Day             : Day 92 (Day-092)
 * Date            : 16 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q142 (Enum):
 *   Store details of 5 students in an array of structures and print all.
 *
 * Explanation:
 *   Stores the details (name, roll_no, marks) of 5 students in an array of structures and prints all 5 records in a formatted list.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Details of 5 students (Name, Roll, Marks)
 *     Output : Tabular list of all 5 students with their details
 *     Detail : The array of structures stores multiple student records and displays them in a table.
 *
 * Time Complexity : O(1) (fixed 5 students)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i + 1);
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}
