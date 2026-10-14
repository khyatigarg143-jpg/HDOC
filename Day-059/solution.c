/*
 * ============================================================================
 * Day             : Day 59 (Day-059)
 * Date            : 14 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q109 (Logic Enhancers):
 *   Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 *
 * Explanation:
 *   Uses the sliding window technique: computes the sum of the first k elements, then slides the window by adding arr[i] and subtracting arr[i - k].
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr[100, 200, 300, 400] = , k = 2
 *     Output : 700
 *     Detail : arr2 + arr3 = 700, which is maximum.
 *   Test Case 2:
 *     Input  : arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
 *     Output : 39
 *     Detail : arr1 + arr2 + arr3 + arr4 = 39, which is maximum.
 *   Test Case 3:
 *     Input  : arr[100, 200, 300, 400] = , k = 1
 *     Output : 400
 *     Detail : arr3 = 400, which is maximum.
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

int main(void) {
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) return 0;
    int window_sum = 0;
    for (int i = 0; i < k; i++) window_sum += arr[i];
    int max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) max_sum = window_sum;
    }

    printf("%d\n", max_sum);
    return 0;
}
