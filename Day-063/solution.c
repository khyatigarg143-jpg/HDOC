/*
 * ============================================================================
 * Day             : Day 63 (Day-063)
 * Date            : 18 October 2026
 * Topic           : Logic Enhancers
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q113 (Logic Enhancers):
 *   Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
 *
 * Explanation:
 *   Sorts the array in ascending order using selection/bubble sort and prints the element at index k - 1.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
 *     Output : 5
 *     Detail : 4th smallest element in the given array is 5.
 *   Test Case 2:
 *     Input  : arr[] = [7, 10, 4, 3, 20, 15], k = 3
 *     Output : 7
 *     Detail : 3rd smallest element in the given array is 7.
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
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (k >= 1 && k <= n) {
        printf("%d\n", arr[k - 1]);
    }
    return 0;
}
