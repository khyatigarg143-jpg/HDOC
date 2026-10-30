/*
 * ============================================================================
 * Day             : Day 75 (Day-075)
 * Date            : 30 October 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q125 (File Handling):
 *   Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
 *
 * Explanation:
 *   Opens an existing file in append mode ("a"), reads a line of text from the user, and appends it to the end of the file.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Existing File: data.txt (Content before execution: Hello world) \n User Input: This is appended text.
 *     Output : File updated successfully with appended text.
 *     Detail : Output File (data.txt after execution): Hello world\nThis is appended text.
 *
 * Time Complexity : O(L) where L is length of appended text
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char filename[256], text[1000];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) return 0;
    getchar(); // consume newline

    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) return 0;

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    fprintf(fp, "\n%s", text);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
