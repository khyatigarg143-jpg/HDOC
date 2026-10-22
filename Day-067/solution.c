/*
 * ============================================================================
 * Day             : Day 67 (Day-067)
 * Date            : 22 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q117 (Logic Enhancers):
 *   Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
 *
 * Explanation:
 *   Uses the two-pointer merge technique from Merge Sort to combine two sorted arrays of sizes m and n into a single sorted array.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums1 = [2,7,11,15] nums2 = [4,8,10]
 *     Output : 2 4 7 8 10 11 15
 *   Test Case 2:
 *     Input  : nums1 = [1,2,7] nums2 = [9,10,17]
 *     Output : 1 2 7 9 10 17
 *   Test Case 3:
 *     Input  : nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
 *     Output : -10 -3 -2 -1 7 7
 *
 * Time Complexity : O(m + n)
 * Space Complexity: O(m + n)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int m, n;
    printf("Enter size of first sorted array: ");
    if (scanf("%d", &m) != 1 || m < 0) return 0;
    int nums1[1000], nums2[1000], merged[2000];
    for (int i = 0; i < m; i++) scanf("%d", &nums1[i]);

    printf("Enter size of second sorted array: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &nums2[i]);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) merged[k++] = nums1[i++];
        else merged[k++] = nums2[j++];
    }
    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    for (int idx = 0; idx < k; idx++) {
        printf("%d%s", merged[idx], (idx == k - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
