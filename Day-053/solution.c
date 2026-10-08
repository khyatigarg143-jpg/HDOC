/*
 * ============================================================================
 * Day             : Day 53 (Day-053)
 * Date            : 8 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q103 (Logic Enhancers):
 *   Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
 *   Note: Follow-up(optional): Try to solve this in O(n) TC
 *
 * Explanation:
 *   Computes total sum first, then maintains left_sum in a single pass and checks if left_sum == total_sum - left_sum - nums[i].
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums = [1,7,3,6,5,6]
 *     Output : 3
 *     Detail : The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.
 *   Test Case 2:
 *     Input  : nums = [1,2,3]
 *     Output : -1
 *     Detail : There is no index that satisfies the conditions in the problem statement.
 *   Test Case 3:
 *     Input  : nums = [2,1,-1]
 *     Output : 0
 *     Detail : The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0.
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
    int nums[1000], total_sum = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total_sum += nums[i];
    }

    int left_sum = 0, pivot = -1;
    for (int i = 0; i < n; i++) {
        int right_sum = total_sum - left_sum - nums[i];
        if (left_sum == right_sum) {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }

    printf("%d\n", pivot);
    return 0;
}
