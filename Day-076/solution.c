/*
 * ============================================================================
 * Day             : Day 76 (Day-076)
 * Date            : 31 October 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q126 (File Handling):
 *   Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
 *
 * Explanation:
 *   Attempts to open a user-specified filename in read mode ("r"); if fopen() returns NULL, prints an error message, otherwise displays the content.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Filename: sample.txt (File Exists: Yes)
 *     Output : File opened successfully. \n (Displays file content)
 *     Detail : The program opens the existing file and prints its content using fgets().
 *   Test Case 2:
 *     Input  : Filename: nofile.txt (File Exists: No)
 *     Output : Error: File does not exist!
 *     Detail : Since fopen() returns NULL, an error message is displayed instead of reading.
 *
 * Time Complexity : O(N) where N is file size
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 0;
    }

    printf("File opened successfully.\n");
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
