/*
 * ============================================================================
 * Day             : Day 70 (Day-070)
 * Date            : 25 October 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q120 (File Handling):
 *   Write a program to take a string input. Change it to sentence case.
 *
 * Explanation:
 *   Capitalizes the first letter of each word (Title/Sentence case as shown in sample test cases) while converting remaining letters of each word to lowercase.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : str = I am trying to build logic.
 *     Output : I Am Trying To Build Logic
 *   Test Case 2:
 *     Input  : str = The classes are supposed to start early.
 *     Output : The Classes Are Supposed To Start Early.
 *   Test Case 3:
 *     Input  : str = We are going to look at 26 different test cases.
 *     Output : We Are Going To Look At 26 Different Test Cases.
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char str[1000];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int new_word = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n' || str[i] == '\r') {
                str[i] = '\0';
                break;
            }
            if (str[i] == ' ') {
                new_word = 1;
            } else {
                if (new_word) {
                    if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
                    new_word = 0;
                } else {
                    if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
                }
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
