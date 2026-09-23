/*
 * ============================================================================
 * Day             : Day 38 (Day-038)
 * Date            : 23 September 2026
 * Topic           : 2D Arrays
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q75 (2D Arrays):
 *   Add two matrices.
 *
 * Explanation:
 *   Reads two matrices of identical dimensions and computes their element-wise sum.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2 2 \n 1 2 \n 3 4 \n 2 2 \n 5 6 \n 7 8
 *     Output : 6 8 \n 10 12
 *
 * Time Complexity : O(r * c)
 * Space Complexity: O(r * c)
 * ----------------------------------------------------------------------------
 *
 * Question Q76 (2D Arrays):
 *   Check if a matrix is symmetric.
 *
 * Explanation:
 *   Checks whether a square matrix equals its transpose (mat[i][j] == mat[j][i] for all i, j).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2 2 \n 1 2 \n 2 1
 *     Output : True
 *   Test Case 2:
 *     Input  : 2 2 \n 1 0 \n 2 1
 *     Output : False
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

/* --- Q75: Add two matrices. --- */
void solve_q75(void) {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) == 2 && r1 > 0 && c1 > 0 && r1 <= 100 && c1 <= 100) {
        int a[100][100], b[100][100];
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        if (scanf("%d %d", &r2, &c2) == 2 && r1 == r2 && c1 == c2) {
            for (int i = 0; i < r2; i++)
                for (int j = 0; j < c2; j++)
                    scanf("%d", &b[i][j]);
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    printf("%d%s", a[i][j] + b[i][j], (j == c1 - 1) ? "" : " ");
                }
                printf("\n");
            }
        }
    }
}

/* --- Q76: Check if a matrix is symmetric. --- */
void solve_q76(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &mat[i][j]);
        int symmetric = (r == c);
        for (int i = 0; i < r && symmetric; i++) {
            for (int j = 0; j < c; j++) {
                if (mat[i][j] != mat[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
        }
        printf("%s\n", symmetric ? "True" : "False");
    }
}

int main(void) {
    printf("=== Day 38 | Q75 ===\n");
    solve_q75();

    printf("\n=== Day 38 | Q76 ===\n");
    solve_q76();
    return 0;
}
