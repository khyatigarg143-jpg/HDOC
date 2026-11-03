/*
 * ============================================================================
 * Day             : Day 79 (Day-079)
 * Date            : 3 November 2026
 * Topic           : File Handling
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q129 (File Handling):
 *   A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
 *
 * Explanation:
 *   Opens numbers.txt, reads all space-separated integers using fscanf() in a loop until EOF, and prints their sum and average.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : File: numbers.txt (Content: 10 20 30 40 50)
 *     Output : Sum = 150 \n Average = 30.00
 *     Detail : The program reads integers from the file, computes their total sum (150), and calculates the average (30.00).
 *
 * Time Complexity : O(k) where k is count of integers in numbers.txt
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);

    double avg = (count > 0) ? ((double)sum / count) : 0.0;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
