/*
 * ============================================================================
 * Day             : Day 60 (Day-060)
 * Date            : 15 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q110 (Logic Enhancers):
 *   Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 *
 * Explanation:
 *   Slides a window of size k from left to right and finds the maximum element in each subarray window.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
 *     Output : 3 3 4 5 5 5 6
 *     Detail : 1st contiguous subarray , max = 3; 2nd contiguous subarray , max = 3; 3rd contiguous subarray , max = 4; 4th contiguous subarray , max = 5; 5th contiguous subarray , max = 5; 6th contiguous subarray , max = 5; 7th contiguous subarray , max = 6.
 *   Test Case 2:
 *     Input  : arr[5, 1, 3, 4, 2] = , k = 1
 *     Output : 5 1 3 4 2
 *     Detail : When k = 1, each element in the array is its own subarray, so the output is simply the same array.
 *
 * Time Complexity : O(n * k)
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

    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max_val) max_val = arr[j];
        }
        printf("%d%s", max_val, (i == n - k) ? "" : " ");
    }
    printf("\n");
    return 0;
}
