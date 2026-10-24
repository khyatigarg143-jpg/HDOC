/*
 * ============================================================================
 * Day             : Day 69 (Day-069)
 * Date            : 24 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q119 (Logic Enhancers):
 *   Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 *
 * Explanation:
 *   Uses a visited frequency array in a single loop iteration to detect and print the repeated element immediately.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums1 = [1,3,3,4]
 *     Output : 3
 *   Test Case 2:
 *     Input  : nums1 = [1,2,2]
 *     Output : 2
 *   Test Case 3:
 *     Input  : nums1 = [0,4,1,1,5]
 *     Output : 1
 *
 * Time Complexity : O(n) (single pass)
 * Space Complexity: O(n)
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
    int seen[10000] = {0};
    int repeated = -1;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (val >= 0 && val < 10000) {
            if (seen[val]) {
                repeated = val;
            }
            seen[val] = 1;
        }
    }
    printf("%d\n", repeated);
    return 0;
}
