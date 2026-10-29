/*
 * ============================================================================
 * Day             : Day 74 (Day-074)
 * Date            : 29 October 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q124 (File Handling):
 *   Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 *
 * Explanation:
 *   Opens the source file in read mode and destination file in write mode, copying byte-by-byte with fgetc() and fputc().
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : Source File: source.txt (Content: Learning C File Handling)
 *     Output : File copied successfully to destination.txt
 *     Detail : Expected File (destination.txt): Learning C File Handling
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
    char src[256], dest[256];
    printf("Enter source and destination filenames: ");
    if (scanf("%255s %255s", src, dest) != 2) return 0;

    FILE *fsrc = fopen(src, "r");
    if (fsrc == NULL) {
        printf("Error: Cannot open source file %s\n", src);
        return 1;
    }
    FILE *fdest = fopen(dest, "w");
    if (fdest == NULL) {
        fclose(fsrc);
        printf("Error: Cannot open destination file %s\n", dest);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }

    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
