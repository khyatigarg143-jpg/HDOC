/*
 * ============================================================================
 * Day             : Day 34 (Day-034)
 * Date            : 19 September 2026
 * Topic           : Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q67 (Arrays (1D)):
 *   Insert an element in an array at a given position.
 *
 * Explanation:
 *   Shifts elements from the target index to the right by one position and inserts the new element at the given position.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 4 \n 10 20 30 40 \n 2 15
 *     Output : 10 20 15 30 40
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 * ----------------------------------------------------------------------------
 *
 * Question Q68 (Arrays (1D)):
 *   Delete an element from an array.
 *
 * Explanation:
 *   Deletes the element at the specified index by shifting subsequent elements one position to the left.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n 1 2 3 4 5 \n 2
 *     Output : 1 2 4 5
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q67: Insert an element in an array at a given position. --- */
void solve_q67(void) {
    int n, pos, val;
    if (scanf("%d", &n) == 1 && n >= 0 && n < 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d %d", &pos, &val);
        if (pos < 0) pos = 0;
        if (pos > n) pos = n;
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
        n++;
        for (int i = 0; i < n; i++) {
            printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
        }
        printf("\n");
    }
}

/* --- Q68: Delete an element from an array. --- */
void solve_q68(void) {
    int n, pos;
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d", &pos);
        if (pos >= 0 && pos < n) {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }
        for (int i = 0; i < n; i++) {
            printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 34 | Q67 ===\n");
    solve_q67();

    printf("\n=== Day 34 | Q68 ===\n");
    solve_q68();
    return 0;
}
