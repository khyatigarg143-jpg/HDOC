/*
 * ============================================================================
 * Day             : Day 57 (Day-057)
 * Date            : 12 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q107 (Logic Enhancers):
 *   Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
 *   
 *   N.B:
 *   - Print the output for each element in a comma separated fashion.
 *   - Do not use Stack, use brute force approach (nested loop) to solve.
 *   Note: Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.
 *
 * Explanation:
 *   Uses a nested brute-force loop scanning left from i-1 down to 0 to find the nearest previous element greater than arr[i].
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr = [1, 3, 2, 4]
 *     Output : -1, -1, 3, -1
 *   Test Case 2:
 *     Input  : arr = [6, 8, 0, 1, 3]
 *     Output : -1, -1, 8, 8, 8
 *   Test Case 3:
 *     Input  : arr = [1, 2, 3, 5]
 *     Output : -1, -1, -1, -1
 *   Test Case 4:
 *     Input  : arr = [5, 4, 3, 1]
 *     Output : -1, 5, 4, 3
 *
 * Time Complexity : O(n^2)
 * Space Complexity: O(1) auxiliary space
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int prev_greater = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }
        printf("%d%s", prev_greater, (i == n - 1) ? "" : ", ");
    }
    printf("\n");
    return 0;
}
