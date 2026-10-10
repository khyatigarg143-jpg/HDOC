/*
 * ============================================================================
 * Day             : Day 55 (Day-055)
 * Date            : 10 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q105 (Logic Enhancers):
 *   Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 *   Note: Follow-up (optional): Can you do it in O(n) Time Complexity?
 *
 * Explanation:
 *   Uses Boyer-Moore Voting Algorithm to find a candidate majority element in O(n) time, then verifies its count > n/2.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums = [3,2,3]
 *     Output : 3
 *     Detail : Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.
 *   Test Case 2:
 *     Input  : nums = [2,2,1,1,1,2,2]
 *     Output : 2
 *     Detail : Size = 7, Count of 2 = 4 → 4 > 7/2. Thus, 2 is the majority element.
 *   Test Case 3:
 *     Input  : nums = [2,2,1,1,1,2,2,3]
 *     Output : -1
 *     Detail : Size = 8, Count of 2 = 4 → 4 is not strictly greater than 8/2. Hence, no majority element exists.
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
    int nums[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) freq++;
    }

    if (freq > n / 2) printf("%d\n", candidate);
    else printf("-1\n");
    return 0;
}
