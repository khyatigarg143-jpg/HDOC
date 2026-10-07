/*
 * ============================================================================
 * Day             : Day 52 (Day-052)
 * Date            : 7 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q102 (Logic Enhancers):
 *   Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
 *   Note: Follow-up(optional): Can you do it in O(log n) Time Complexity?
 *
 * Explanation:
 *   Uses binary search to find the smallest index with arr[mid] >= x (the ceil of x, first occurrence) in O(log n) time.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr = [1, 2, 8, 10, 11, 12, 19], x = 5
 *     Output : 2
 *     Detail : Smallest number greater than 5 is 8, whose index is 2.
 *   Test Case 2:
 *     Input  : arr = [1, 2, 8, 10, 11, 12, 19], x = 20
 *     Output : -1
 *     Detail : No element greater than 20 is found. So output is -1.
 *   Test Case 3:
 *     Input  : arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
 *     Output : 0
 *     Detail : Smallest number greater than 0 is 1, whose indices are 0 and 1. The index of the first occurrence is 0.
 *   Test Case 4:
 *     Input  : arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
 *     Output : 2
 *     Detail : If x is directly present, return the index of its first occurrence. 
 *
 * Time Complexity : O(log n)
 * Space Complexity: O(1) auxiliary space
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n, x;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[1000];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
