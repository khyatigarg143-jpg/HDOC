/*
 * ============================================================================
 * Day             : Day 35 (Day-035)
 * Date            : 20 September 2026
 * Topic           : Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q69 (Arrays (1D)):
 *   Find the second largest element in an array.
 *
 * Explanation:
 *   Tracks the largest and second largest distinct elements in a single pass through the array.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n 10 20 30 40 50
 *     Output : 40
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 * ----------------------------------------------------------------------------
 *
 * Question Q70 (Arrays (1D)):
 *   Rotate an array to the right by k positions.
 *
 * Explanation:
 *   Rotates the array to the right by k positions (using k = k % n) and prints the rotated array.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n 1 2 3 4 5 \n 2
 *     Output : 4 5 1 2 3
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

/* --- Q69: Find the second largest element in an array. --- */
void solve_q69(void) {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2 && n <= 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int first = INT_MIN, second = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            } else if (arr[i] > second && arr[i] != first) {
                second = arr[i];
            }
        }
        printf("%d\n", second);
    }
}

/* --- Q70: Rotate an array to the right by k positions. --- */
void solve_q70(void) {
    int n, k;
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000], rotated[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d", &k);
        k = k % n;
        for (int i = 0; i < n; i++) {
            rotated[(i + k) % n] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            printf("%d%s", rotated[i], (i == n - 1) ? "" : " ");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 35 | Q69 ===\n");
    solve_q69();

    printf("\n=== Day 35 | Q70 ===\n");
    solve_q70();
    return 0;
}
