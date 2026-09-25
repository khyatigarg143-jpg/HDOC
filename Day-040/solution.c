/*
 * ============================================================================
 * Day             : Day 40 (Day-040)
 * Date            : 25 September 2026
 * Topic           : 2D Arrays
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q79 (2D Arrays):
 *   Perform diagonal traversal of a matrix.
 *
 * Explanation:
 *   Traverses anti-diagonals of the matrix (where row + col == s for s = 0..r+c-2), alternating direction on even and odd diagonals.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 3 \n 1 2 3 \n 4 5 6 \n 7 8 9
 *     Output : 1 2 4 7 5 3 6 8 9
 *
 * Time Complexity : O(r * c)
 * Space Complexity: O(r * c)
 * ----------------------------------------------------------------------------
 *
 * Question Q80 (2D Arrays):
 *   Multiply two matrices.
 *
 * Explanation:
 *   Multiplies an r1 x c1 matrix with an r2 x c2 matrix (where c1 == r2) using three nested loops.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 2 3 \n 1 2 3 \n 4 5 6 \n 3 2 \n 7 8 \n 9 10 \n 11 12
 *     Output : 58 64 \n 139 154
 *
 * Time Complexity : O(r1 * c1 * c2)
 * Space Complexity: O(r1 * c2)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q79: Perform diagonal traversal of a matrix. --- */
void solve_q79(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &mat[i][j]);
        int first = 1;
        for (int s = 0; s <= r + c - 2; s++) {
            if (s % 2 == 0) {
                int i = (s < r) ? s : r - 1;
                int j = s - i;
                while (i >= 0 && j < c) {
                    if (!first) printf(" ");
                    printf("%d", mat[i][j]);
                    first = 0;
                    i--;
                    j++;
                }
            } else {
                int j = (s < c) ? s : c - 1;
                int i = s - j;
                while (j >= 0 && i < r) {
                    if (!first) printf(" ");
                    printf("%d", mat[i][j]);
                    first = 0;
                    i++;
                    j--;
                }
            }
        }
        printf("\n");
    }
}

/* --- Q80: Multiply two matrices. --- */
void solve_q80(void) {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) == 2 && r1 > 0 && c1 > 0 && r1 <= 100 && c1 <= 100) {
        int a[100][100], b[100][100], res[100][100] = {{0}};
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        if (scanf("%d %d", &r2, &c2) == 2 && c1 == r2 && r2 <= 100 && c2 <= 100) {
            for (int i = 0; i < r2; i++)
                for (int j = 0; j < c2; j++)
                    scanf("%d", &b[i][j]);
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    res[i][j] = 0;
                    for (int k = 0; k < c1; k++) {
                        res[i][j] += a[i][k] * b[k][j];
                    }
                    printf("%d%s", res[i][j], (j == c2 - 1) ? "" : " ");
                }
                printf("\n");
            }
        }
    }
}

int main(void) {
    printf("=== Day 40 | Q79 ===\n");
    solve_q79();

    printf("\n=== Day 40 | Q80 ===\n");
    solve_q80();
    return 0;
}
