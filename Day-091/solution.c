/*
 * ============================================================================
 * Day             : Day 91 (Day-091)
 * Date            : 15 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q141 (Enum):
 *   Define a structure Student with name, roll_no, and marks, then read and print one student's data.
 *
 * Explanation:
 *   Defines a structure Student with name, roll_no, and marks fields, reads one student's data from standard input, and prints it.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Name: Asha \n Roll: 101 \n Marks: 90
 *     Output : Name: Asha | Roll: 101 | Marks: 90
 *     Detail : The program stores and displays one student's details using structure members.
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

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s;
    printf("Enter Name, Roll, and Marks: ");
    if (scanf("%99s %d %d", s.name, &s.roll_no, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    }
    return 0;
}
