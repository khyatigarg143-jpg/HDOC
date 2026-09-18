/*
 * ============================================================================
 * Day             : Day 33 (Day-033)
 * Date            : 18 September 2026
 * Topic           : Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q65 (Arrays (1D)):
 *   Search in a sorted array using binary search.
 *
 * Explanation:
 *   Performs binary search on a sorted array by repeatedly halving the search interval [low, high].
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n 1 3 5 7 9 \n 7
 *     Output : Found at index 3
 *   Test Case 2:
 *     Input  : 5 \n 1 3 5 7 9 \n 6
 *     Output : -1
 *
 * Time Complexity : O(log n)
 * Space Complexity: O(1) auxiliary space
 * ----------------------------------------------------------------------------
 *
 * Question Q66 (Arrays (1D)):
 *   Insert an element in a sorted array at the appropriate position.
 *
 * Explanation:
 *   Shifts elements greater than the new key one position to the right and inserts the key at its sorted position.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n 1 2 4 5 6 \n 3
 *     Output : 1 2 3 4 5 6
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

/* --- Q65: Search in a sorted array using binary search. --- */
void solve_q65(void) {
    int n, key;
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d", &key);
        int low = 0, high = n - 1, found = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                found = mid;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (found != -1) printf("Found at index %d\n", found);
        else printf("-1\n");
    }
}

/* --- Q66: Insert an element in a sorted array at the appropriate position. --- */
void solve_q66(void) {
    int n, val;
    if (scanf("%d", &n) == 1 && n >= 0 && n < 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d", &val);
        int i = n - 1;
        while (i >= 0 && arr[i] > val) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = val;
        n++;
        for (int j = 0; j < n; j++) {
            printf("%d%s", arr[j], (j == n - 1) ? "" : " ");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 33 | Q65 ===\n");
    solve_q65();

    printf("\n=== Day 33 | Q66 ===\n");
    solve_q66();
    return 0;
}
