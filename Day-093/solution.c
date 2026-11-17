/*
 * ============================================================================
 * Day             : Day 93 (Day-093)
 * Date            : 17 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q143 (Enum):
 *   Find and print the student with the highest marks.
 *
 * Explanation:
 *   Reads an array of Student structures, tracks the index of the student with the maximum marks, and prints the topper's details.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 students: Ravi 101 95, Sita 102 85, Aman 103 88
 *     Output : Topper: Ravi (Marks: 95)
 *     Detail : Program compares marks of all students and prints the one with the highest.
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

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 0;

    struct Student s[100];
    int top_idx = 0;
    for (int i = 0; i < n; i++) {
        scanf("%99s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[top_idx].marks) {
            top_idx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[top_idx].name, s[top_idx].marks);
    return 0;
}
