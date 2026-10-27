/*
 * ============================================================================
 * Day             : Day 72 (Day-072)
 * Date            : 27 October 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q122 (File Handling):
 *   Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 *
 * Explanation:
 *   Opens info.txt in read mode ("r"), reads each line using fgets() until EOF, and prints it to the console.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : File: info.txt (Content: Name: Rahul\nAge: 23)
 *     Output : Name: Rahul \n Age: 23
 *     Detail : The program reads each line from info.txt using fgets() and prints it until EOF.
 *
 * Time Complexity : O(N) where N is file size in bytes
 * Space Complexity: O(1) buffer space
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open info.txt\n");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
