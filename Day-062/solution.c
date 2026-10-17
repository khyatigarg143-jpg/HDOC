/*
 * ============================================================================
 * Day             : Day 62 (Day-062)
 * Date            : 17 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q112 (Logic Enhancers):
 *   Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
 *
 * Explanation:
 *   Implements Kadane's algorithm: maintains the maximum subarray sum ending at index i and updates the global maximum sum.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr[] = [2, 3, -8, 7, -1, 2, 3]
 *     Output : 11
 *     Detail : The subarray [7, -1, 2, 3] has the largest sum 11.
 *   Test Case 2:
 *     Input  : arr[] = [-2, -4]
 *     Output : -2
 *     Detail : The subarray [-2] has the largest sum -2.
 *   Test Case 3:
 *     Input  : arr[] = [5, 4, 1, 7, 8]
 *     Output : 25
 *     Detail : The subarray has the largest sum 25.
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
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int curr_max = arr[0];
    for (int i = 1; i < n; i++) {
        if (curr_max + arr[i] > arr[i])
            curr_max = curr_max + arr[i];
        else
            curr_max = arr[i];
        if (curr_max > max_so_far)
            max_so_far = curr_max;
    }

    printf("%d\n", max_so_far);
    return 0;
}
