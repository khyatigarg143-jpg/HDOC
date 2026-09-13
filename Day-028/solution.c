/*
 * ============================================================================
 * Day             : Day 28 (Day-028)
 * Date            : 13 September 2026
 * Topic           : Nested Loops without Arrays/Strings / Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q55 (Nested Loops without Arrays/Strings):
 *   Write a program to print all the prime numbers from 1 to n.
 *
 * Explanation:
 *   Uses nested loops to test each number from 2 to n for primality and prints all prime numbers.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 10
 *     Output : 2 3 5 7
 *   Test Case 2:
 *     Input  : 20
 *     Output : 2 3 5 7 11 13 17 19
 *
 * Time Complexity : O(n * sqrt(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q56 (Arrays (1D)):
 *   Read and print elements of a one-dimensional array.
 *
 * Explanation:
 *   Reads the size n of a 1D array, reads n integer elements into the array, and prints them separated by spaces.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 \n 10 20 30
 *     Output : 10 20 30
 *   Test Case 2:
 *     Input  : 5 \n 1 2 3 4 5
 *     Output : 1 2 3 4 5
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

/* --- Q55: Write a program to print all the prime numbers from 1 to n. --- */
void solve_q55(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) == 1) {
        int first = 1;
        for (int i = 2; i <= n; i++) {
            int is_prime = 1;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                if (!first) printf(" ");
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }
}

/* --- Q56: Read and print elements of a one-dimensional array. --- */
void solve_q56(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 28 | Q55 ===\n");
    solve_q55();

    printf("\n=== Day 28 | Q56 ===\n");
    solve_q56();
    return 0;
}
