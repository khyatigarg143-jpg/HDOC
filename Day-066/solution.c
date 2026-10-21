/*
 * ============================================================================
 * Day             : Day 66 (Day-066)
 * Date            : 21 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q116 (Logic Enhancers):
 *   Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
 *
 * Explanation:
 *   Uses two nested loops to find distinct indices i and j such that nums[i] + nums[j] == target.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums = [2,7,11,15], target = 9
 *     Output : 0 1
 *     Detail : Because nums[0] + nums[1] == 9, we return [0, 1].
 *   Test Case 2:
 *     Input  : nums = [3,2,4], target = 6
 *     Output : 1 2
 *   Test Case 3:
 *     Input  : nums = [3,3], target = 6
 *     Output : 0 1
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
    int n, target;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int nums[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}
