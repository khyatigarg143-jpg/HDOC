/*
 * ============================================================================
 * Day             : Day 80 (Day-080)
 * Date            : 4 November 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q130 (File Handling):
 *   Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
 *
 * Explanation:
 *   Writes multiple student records (name, roll, marks) to students.txt using fprintf(), then re-opens the file and reads them using fscanf().
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
 *     Output : Name: Asha | Roll: 101 | Marks: 85 \n Name: Ravi | Roll: 102 | Marks: 92
 *     Detail : Expected File Content (students.txt): Asha 101 85\nRavi 102 92
 *
 * Time Complexity : O(n) where n is number of student records
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening students.txt for writing!\n");
        return 1;
    }

    char name[100];
    int roll, marks;
    for (int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i + 1);
        scanf("%99s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening students.txt for reading!\n");
        return 1;
    }
    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
