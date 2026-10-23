/*
 * ============================================================================
 * Day             : Day 68 (Day-068)
 * Date            : 23 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q118 (Logic Enhancers):
 *   Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
 *
 * Explanation:
 *   Subtracts the actual sum of the n array elements from the expected sum n * (n + 1) / 2 to find the missing number in O(n) time.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums1 = [0,3,2,4]
 *     Output : 1
 *   Test Case 2:
 *     Input  : nums1 = [1,2,3]
 *     Output : 0
 *   Test Case 3:
 *     Input  : nums1 = [0,4,3,1,5]
 *     Output : 2
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
    printf("Enter size of array n: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        actual_sum += val;
    }
    printf("%d\n", expected_sum - actual_sum);
    return 0;
}
