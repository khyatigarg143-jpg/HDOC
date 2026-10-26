/*
 * ============================================================================
 * Day             : Day 71 (Day-071)
 * Date            : 26 October 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q121 (File Handling):
 *   Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 *
 * Explanation:
 *   Opens info.txt in write mode ("w"), takes the user's name and age, writes them using fprintf(), closes the file, and prints confirmation.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Name: Rahul, Age: 23
 *     Output : File created successfully! Data written to info.txt
 *     Detail : Expected File Content (info.txt): Name: Rahul Age: 23
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

int main(void) {
    char name[100];
    int age;
    printf("Enter Name and Age: ");
    if (scanf("%99s %d", name, &age) == 2) {
        FILE *fp = fopen("info.txt", "w");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
        fprintf(fp, "Name: %s\nAge: %d\n", name, age);
        fclose(fp);
        printf("File created successfully! Data written to info.txt\n");
    }
    return 0;
}
