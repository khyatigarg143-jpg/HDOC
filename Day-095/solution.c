/*
 * ============================================================================
 * Day             : Day 95 (Day-095)
 * Date            : 18 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q145 (Enum):
 *   Return a structure containing top student's details from a function.
 *
 * Explanation:
 *   Defines a function getTopStudent() that finds and returns the struct Student with the highest marks from an array of students.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 students: Riya 101 89, Karan 102 96, Meena 103 92
 *     Output : Top Student: Karan | Roll: 102 | Marks: 96
 *     Detail : The function returns the structure containing the highest scoring student's details.
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
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

struct Student getTopStudent(struct Student arr[], int n) {
    int top_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[top_idx].marks) {
            top_idx = i;
        }
    }
    return arr[top_idx];
}

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 0;

    struct Student s[100];
    for (int i = 0; i < n; i++) {
        scanf("%99s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
