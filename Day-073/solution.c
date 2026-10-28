/*
 * ============================================================================
 * Day             : Day 73 (Day-073)
 * Date            : 28 October 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q123 (File Handling):
 *   Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
 *
 * Explanation:
 *   Reads a text file character-by-character using fgetc(), tracking total characters, word transitions, and newline counts.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : File: sample.txt (Content: Hello world\nThis is C programming)
 *     Output : Characters: 31 \n Words: 5 \n Lines: 2
 *     Detail : The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
 *
 * Time Complexity : O(N) where N is number of characters in file
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
        printf("Error: Could not open %s\n", filename);
        return 1;
    }

    int chars = 0, words = 0, lines = 0, in_word = 0;
    int ch, last_ch = '\n';
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
        last_ch = ch;
    }
    if (chars > 0 && last_ch != '\n') {
        lines++;
    }
    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
