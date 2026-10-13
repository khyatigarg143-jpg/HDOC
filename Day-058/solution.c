/*
 * ============================================================================
 * Day             : Day 58 (Day-058)
 * Date            : 13 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q108 (Logic Enhancers):
 *   Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 *   Note: Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.
 *
 * Explanation:
 *   Computes prefix products in a forward pass and multiplies by suffix products in a backward pass in O(n) time without division.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums = [1,2,3,4]
 *     Output : [24,12,8,6]
 *   Test Case 2:
 *     Input  : nums = [-1,1,0,-3,3]
 *     Output : [0,0,9,0,0]
 *
 * Time Complexity : O(n)
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
    int nums[1000], answer[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", answer[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");
    return 0;
}
