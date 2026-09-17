/*
 * ============================================================================
 * Day             : Day 32 (Day-032)
 * Date            : 17 September 2026
 * Topic           : Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q63 (Arrays (1D)):
 *   Merge two arrays.
 *
 * Explanation:
 *   Reads two arrays of sizes n1 and n2 and copies their elements sequentially into a merged array of size n1 + n2.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 3 \n 1 2 3 \n 2 \n 4 5
 *     Output : 1 2 3 4 5
 *
 * Time Complexity : O(n1 + n2)
 * Space Complexity: O(n1 + n2)
 * ----------------------------------------------------------------------------
 *
 * Question Q64 (Arrays (1D)):
 *   Find the digit that occurs the most times in an integer number.
 *
 * Explanation:
 *   Uses a frequency array of size 10 to count occurrences of each digit (0-9) and finds the digit with the highest count.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 112233
 *     Output : 1
 *   Test Case 2:
 *     Input  : 887799
 *     Output : 7
 *
 * Time Complexity : O(log10(n))
 * Space Complexity: O(1) (fixed array of 10 ints)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q63: Merge two arrays. --- */
void solve_q63(void) {
    int n1, n2;
    if (scanf("%d", &n1) == 1 && n1 >= 0 && n1 <= 500) {
        int arr1[500], arr2[500], merged[1000];
        for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
        if (scanf("%d", &n2) == 1 && n2 >= 0 && n2 <= 500) {
            for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
            for (int i = 0; i < n1; i++) merged[i] = arr1[i];
            for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];
            int total = n1 + n2;
            for (int i = 0; i < total; i++) {
                printf("%d%s", merged[i], (i == total - 1) ? "" : " ");
            }
            printf("\n");
        }
    }
}

/* --- Q64: Find the digit that occurs the most times in an integer number. --- */
void solve_q64(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        int freq[10] = {0};
        if (n == 0) freq[0] = 1;
        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }
        int best_digit = 0;
        for (int d = 1; d < 10; d++) {
            if (freq[d] > freq[best_digit]) {
                best_digit = d;
            }
        }
        printf("%d\n", best_digit);
    }
}

int main(void) {
    printf("=== Day 32 | Q63 ===\n");
    solve_q63();

    printf("\n=== Day 32 | Q64 ===\n");
    solve_q64();
    return 0;
}
