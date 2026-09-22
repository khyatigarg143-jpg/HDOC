/*
 * ============================================================================
 * Day             : Day 37 (Day-037)
 * Date            : 22 September 2026
 * Topic           : 2D Arrays
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q73 (2D Arrays):
 *   Find the sum of each row of a matrix and store it in an array.
 *
 * Explanation:
 *   Computes the sum of each row of an r x c matrix, stores the sums in a 1D array row_sum[], and prints them.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2 3 \n 1 2 3 \n 4 5 6
 *     Output : 6 15
 *
 * Time Complexity : O(r * c)
 * Space Complexity: O(r * c)
 * ----------------------------------------------------------------------------
 *
 * Question Q74 (2D Arrays):
 *   Find the transpose of a matrix.
 *
 * Explanation:
 *   Constructs the transpose of an r x c matrix by swapping rows and columns (trans[j][i] = mat[i][j]).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2 3 \n 1 2 3 \n 4 5 6
 *     Output : 1 4 \n 2 5 \n 3 6
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

/* --- Q73: Find the sum of each row of a matrix and store it in an array. --- */
void solve_q73(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100], row_sum[100] = {0};
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
                row_sum[i] += mat[i][j];
            }
        }
        for (int i = 0; i < r; i++) {
            printf("%d%s", row_sum[i], (i == r - 1) ? "" : " ");
        }
        printf("\n");
    }
}

/* --- Q74: Find the transpose of a matrix. --- */
void solve_q74(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                printf("%d%s", mat[i][j], (i == r - 1) ? "" : " ");
            }
            printf("\n");
        }
    }
}

int main(void) {
    printf("=== Day 37 | Q73 ===\n");
    solve_q73();

    printf("\n=== Day 37 | Q74 ===\n");
    solve_q74();
    return 0;
}
