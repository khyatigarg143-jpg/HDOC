/*
 * ============================================================================
 * Day             : Day 61 (Day-061)
 * Date            : 16 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q111 (Logic Enhancers):
 *   Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
 *
 * Explanation:
 *   Examines each window of size k from left to right and prints the first negative element found (or 0 if none exists).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr[] = [-8, 2, 3, -6, 10], k = 2
 *     Output : -8 0 -6 -6
 *     Detail : Window [-8, 2] First negative integer is -8. Window No negative integers, output is 0. Window [3, -6] First negative integer is -6. Window [-6, 10] First negative integer is -6.
 *   Test Case 2:
 *     Input  : arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
 *     Output : -1 -1 -7 -15 -15 0
 *     Detail : Window [12, -1, -7] First negative integer is -1. Window [-1, -7, 8] First negative integer is -1. Window [-7, 8, -15] First negative integer is -7. Window [8, -15, 30] First negative integer is -15. Window [-15, 30, 16] First negative integer is -15. Window No negative integers, output is 0.
 *   Test Case 3:
 *     Input  : arr[] = [12, 1, 3, 5], k = 3
 *     Output : 0 0
 *     Detail : Window No negative integers, output is 0. Window No negative integers, output is 0.
 *
 * Time Complexity : O(n * k)
 * Space Complexity: O(1) auxiliary space
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter window size k: ");
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int first_neg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_neg = arr[j];
                break;
            }
        }
        printf("%d%s", first_neg, (i == n - k) ? "" : " ");
    }
    printf("\n");
    return 0;
}
