/*
 * ============================================================================
 * Day             : Day 36 (Day-036)
 * Date            : 21 September 2026
 * Topic           : 2D Arrays
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q71 (2D Arrays):
 *   Read and print a matrix.
 *
 * Explanation:
 *   Reads a 2D matrix of dimensions r x c using nested loops and prints it row by row.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2 2 \n 1 2 \n 3 4
 *     Output : 1 2 \n 3 4
 *
 * Time Complexity : O(r * c)
 * Space Complexity: O(r * c)
 * ----------------------------------------------------------------------------
 *
 * Question Q72 (2D Arrays):
 *   Find the sum of all elements in a matrix.
 *
 * Explanation:
 *   Reads a 2D matrix of size r x c and accumulates the sum of all its elements.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2 3 \n 1 2 3 \n 4 5 6
 *     Output : 21
 *
 * Time Complexity : O(r * c)
 * Space Complexity: O(r * c)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q71: Read and print a matrix. --- */
void solve_q71(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                printf("%d%s", mat[i][j], (j == c - 1) ? "" : " ");
            }
            printf("\n");
        }
    }
}

/* --- Q72: Find the sum of all elements in a matrix. --- */
void solve_q72(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100], sum = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
                sum += mat[i][j];
            }
        }
        printf("%d\n", sum);
    }
}

int main(void) {
    printf("=== Day 36 | Q71 ===\n");
    solve_q71();

    printf("\n=== Day 36 | Q72 ===\n");
    solve_q72();
    return 0;
}
