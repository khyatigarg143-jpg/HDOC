/*
 * ============================================================================
 * Day             : Day 56 (Day-056)
 * Date            : 11 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q106 (Logic Enhancers):
 *   Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
 *   
 *   N.B:
 *   - Print the output for each element in a comma separated fashion.
 *   - Do not use Stack, use brute force approach (nested loop) to solve.
 *   Note: Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.
 *
 * Explanation:
 *   Uses a nested brute-force loop to scan elements to the right of index i and find the first element strictly greater than arr[i].
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr = [1, 3, 2, 4]
 *     Output : 3, 4, 4, -1
 *     Detail : The next larger element to 1 is 3, for 3 it is 4, for 2 it is 4 and for 4 there is no next greater element so it is -1.
 *   Test Case 2:
 *     Input  : arr = [6, 8, 0, 1, 3]
 *     Output : 8, -1, 1, 3, -1
 *     Detail : Next greater element for 6 is 8, for 8 it is -1, for 0 it is 1, for 1 it is 3 and for 3 there is no greater element on right hence -1.
 *   Test Case 3:
 *     Input  : arr = [1, 2, 3, 5]
 *     Output : 2, 3, 5, -1
 *     Detail : In a sorted array, each element’s next greater is its immediate next element except for the last element which has none, so -1.
 *   Test Case 4:
 *     Input  : arr = [5, 4, 3, 1]
 *     Output : -1, -1, -1, -1
 *     Detail : No element has a greater element on its right, so all next greater elements are -1.
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
        int next_greater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        printf("%d%s", next_greater, (i == n - 1) ? "" : ", ");
    }
    printf("\n");
    return 0;
}
