/*
 * ============================================================================
 * Day             : Day 29 (Day-029)
 * Date            : 14 September 2026
 * Topic           : Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q57 (Arrays (1D)):
 *   Find the sum of array elements.
 *
 * Explanation:
 *   Iterates through the array elements and accumulates their sum in an integer variable.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 4 \n 2 4 6 8
 *     Output : 20
 *   Test Case 2:
 *     Input  : 3 \n 1 1 1
 *     Output : 3
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 * ----------------------------------------------------------------------------
 *
 * Question Q58 (Arrays (1D)):
 *   Find the maximum and minimum element in an array.
 *
 * Explanation:
 *   Initializes max and min with the first element of the array, then updates them while scanning the remaining elements.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n 2 9 1 4 7
 *     Output : Max=9, Min=1
 *   Test Case 2:
 *     Input  : 3 \n 10 10 10
 *     Output : Max=10, Min=10
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

/* --- Q57: Find the sum of array elements. --- */
void solve_q57(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000], sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        printf("%d\n", sum);
    }
}

/* --- Q58: Find the maximum and minimum element in an array. --- */
void solve_q58(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int max_val = arr[0], min_val = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max_val) max_val = arr[i];
            if (arr[i] < min_val) min_val = arr[i];
        }
        printf("Max=%d, Min=%d\n", max_val, min_val);
    }
}

int main(void) {
    printf("=== Day 29 | Q57 ===\n");
    solve_q57();

    printf("\n=== Day 29 | Q58 ===\n");
    solve_q58();
    return 0;
}
