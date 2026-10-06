/*
 * ============================================================================
 * Day             : Day 51 (Day-051)
 * Date            : 6 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q101 (Logic Enhancers):
 *   Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 *   Note: Follow-up(optional): Can you do it in O(log n) Time Complexity?
 *
 * Explanation:
 *   Uses two binary searches on the sorted array to find the first and last occurrence indices of target in O(log n) time.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : nums = [5,7,7,8,8,10], target = 8
 *     Output : 3,4
 *   Test Case 2:
 *     Input  :  nums = [5,7,7,8,8,10], target = 6
 *     Output : -1,-1
 *   Test Case 3:
 *     Input  :  nums = [5,7,7,8,8,10], target = 10
 *     Output : 5,5
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
    int n, target;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int nums[1000];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", first, last);
    return 0;
}
