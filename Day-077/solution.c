/*
 * ============================================================================
 * Day             : Day 77 (Day-077)
 * Date            : 1 November 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q127 (File Handling):
 *   Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
 *
 * Explanation:
 *   Reads characters from input.txt using fgetc(), converts lowercase characters to uppercase, and writes them to output.txt.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Input File (input.txt): Hello World\nC programming
 *     Output : Output File (output.txt): HELLO WORLD\nC PROGRAMMING
 *     Detail : All lowercase letters in input.txt are converted to uppercase using character manipulation before writing to output.txt.
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
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        fclose(in);
        printf("Error: Could not create output.txt\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    printf("Conversion completed and written to output.txt\n");
    return 0;
}
