/*
 * ============================================================================
 * Day             : Day 54 (Day-054)
 * Date            : 9 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q104 (Logic Enhancers):
 *   Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
 *   Note: Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
 *
 * Explanation:
 *   Uses the mathematical identity 1+2+...+x == x+...+n => x^2 = n*(n+1)/2, checking if total_sum is a perfect square in O(1) time.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : n = 8
 *     Output : 6
 *     Detail : 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
 *   Test Case 2:
 *     Input  : n = 1
 *     Output : 1
 *     Detail : 1 is the pivot integer since: 1 = 1.
 *   Test Case 3:
 *     Input  : n = 4
 *     Output : -1
 *     Detail : It can be proved that no such integer exists.
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter positive integer n: ");
    if (scanf("%d", &n) == 1) {
        long long total = (long long)n * (n + 1) / 2;
        long long x = (long long)round(sqrt((double)total));
        if (x * x == total) {
            printf("%lld\n", x);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
