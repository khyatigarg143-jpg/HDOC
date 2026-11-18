/*
 * ============================================================================
 * Day             : Day 94 (Day-094)
 * Date            : 18 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q144 (Enum):
 *   Write a function that accepts a structure as parameter and prints its members.
 *
 * Explanation:
 *   Defines a function printStudent(struct Student s) that takes a Student structure by value and prints its members.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Student: Neha 104 92
 *     Output : Name: Neha | Roll: 104 | Marks: 92
 *     Detail : The structure is passed by value to a function that prints its data.
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

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main(void) {
    struct Student s;
    printf("Enter Student Name, Roll, Marks: ");
    if (scanf("%99s %d %d", s.name, &s.roll_no, &s.marks) == 3) {
        printStudent(s);
    }
    return 0;
}
