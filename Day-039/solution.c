/*
 * ============================================================================
 * Day             : Day 39 (Day-039)
 * Date            : 24 September 2026
 * Topic           : 2D Arrays
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q77 (2D Arrays):
 *   Check if the elements on the diagonal of a matrix are distinct.
 *
 * Explanation:
 *   Checks whether all elements on the main diagonal (mat[i][i]) of a matrix are pairwise distinct.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 3 \n 1 2 3 \n 4 5 6 \n 7 8 1
 *     Output : False
 *   Test Case 2:
 *     Input  : 3 3 \n 1 2 3 \n 4 5 6 \n 7 8 9
 *     Output : True
 *
 * Time Complexity : O(min(r, c)^2)
 * Space Complexity: O(r * c)
 * ----------------------------------------------------------------------------
 *
 * Question Q78 (2D Arrays):
 *   Find the sum of main diagonal elements for a square matrix.
 *
 * Explanation:
 *   Sums the main diagonal elements (mat[i][i] for i = 0..n-1) of a square matrix.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 3 \n 1 2 3 \n 4 5 6 \n 7 8 9
 *     Output : 15
 *
 * Time Complexity : O(n^2) to read matrix, O(n) to sum diagonal
 * Space Complexity: O(n^2)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q77: Check if the elements on the diagonal of a matrix are distinct. --- */
void solve_q77(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &mat[i][j]);
        int d = (r < c) ? r : c;
        int distinct = 1;
        for (int i = 0; i < d && distinct; i++) {
            for (int j = i + 1; j < d; j++) {
                if (mat[i][i] == mat[j][j]) {
                    distinct = 0;
                    break;
                }
            }
        }
        printf("%s\n", distinct ? "True" : "False");
    }
}

/* --- Q78: Find the sum of main diagonal elements for a square matrix. --- */
void solve_q78(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0 && r <= 100 && c <= 100) {
        int mat[100][100], sum = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
                if (i == j) sum += mat[i][j];
            }
        }
        printf("%d\n", sum);
    }
}

int main(void) {
    printf("=== Day 39 | Q77 ===\n");
    solve_q77();

    printf("\n=== Day 39 | Q78 ===\n");
    solve_q78();
    return 0;
}
