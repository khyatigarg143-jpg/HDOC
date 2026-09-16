/*
 * ============================================================================
 * Day             : Day 31 (Day-031)
 * Date            : 16 September 2026
 * Topic           : Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q61 (Arrays (1D)):
 *   Search for an element in an array using linear search.
 *
 * Explanation:
 *   Scans the array sequentially from index 0 to n-1 to find the target key and prints its 0-based index (or -1 if not found).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n 1 2 3 4 5 \n 3
 *     Output : Found at index 2
 *   Test Case 2:
 *     Input  : 4 \n 10 20 30 40 \n 25
 *     Output : -1
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 * ----------------------------------------------------------------------------
 *
 * Question Q62 (Arrays (1D)):
 *   Reverse an array without taking extra space.
 *
 * Explanation:
 *   Uses two pointers (left = 0, right = n - 1) to swap elements in-place until the pointers meet.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 4 \n 1 2 3 4
 *     Output : 4 3 2 1
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1) auxiliary space
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q61: Search for an element in an array using linear search. --- */
void solve_q61(void) {
    int n, key;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &key);
        int found = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                found = i;
                break;
            }
        }
        if (found != -1) {
            printf("Found at index %d\n", found);
        } else {
            printf("-1\n");
        }
    }
}

/* --- Q62: Reverse an array without taking extra space. --- */
void solve_q62(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int left = 0, right = n - 1;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        for (int i = 0; i < n; i++) {
            printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 31 | Q61 ===\n");
    solve_q61();

    printf("\n=== Day 31 | Q62 ===\n");
    solve_q62();
    return 0;
}
