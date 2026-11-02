/*
 * ============================================================================
 * Day             : Day 78 (Day-078)
 * Date            : 2 November 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q128 (File Handling):
 *   Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
 *
 * Explanation:
 *   Reads a text file character-by-character and counts alphabetic vowels and consonants while ignoring digits and symbols.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : File: text.txt (Content: Welcome to C language)
 *     Output : Vowels: 8 \n Consonants: 10
 *     Detail : The program iterates through each character, counts vowels (A, E, I, O, U) and consonants, ignoring other symbols.
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
        printf("Error: Could not open %s\n", filename);
        return 1;
    }

    int vowels = 0, consonants = 0, ch;
    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            int lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
