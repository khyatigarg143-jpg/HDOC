/*
 * ============================================================================
 * Day             : Day 30 (Day-030)
 * Date            : 15 September 2026
 * Topic           : Arrays (1D)
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q59 (Arrays (1D)):
 *   Count even and odd numbers in an array.
 *
 * Explanation:
 *   Traverses the array and increments even_count if arr[i] % 2 == 0, otherwise increments odd_count.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 6 \n 1 2 3 4 5 6
 *     Output : Even=3, Odd=3
 *   Test Case 2:
 *     Input  : 4 \n 2 4 6 8
 *     Output : Even=4, Odd=0
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 * ----------------------------------------------------------------------------
 *
 * Question Q60 (Arrays (1D)):
 *   Count positive, negative, and zero elements in an array.
 *
 * Explanation:
 *   Traverses the array and counts how many elements are strictly positive (>0), strictly negative (<0), and zero (==0).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 \n -1 0 1 2 -2
 *     Output : Positive=2, Negative=2, Zero=1
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

/* --- Q59: Count even and odd numbers in an array. --- */
void solve_q59(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000], even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) even++;
            else odd++;
        }
        printf("Even=%d, Odd=%d\n", even, odd);
    }
}

/* --- Q60: Count positive, negative, and zero elements in an array. --- */
void solve_q60(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1 && n > 0 && n <= 1000) {
        int arr[1000], pos = 0, neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] > 0) pos++;
            else if (arr[i] < 0) neg++;
            else zero++;
        }
        printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    }
}

int main(void) {
    printf("=== Day 30 | Q59 ===\n");
    solve_q59();

    printf("\n=== Day 30 | Q60 ===\n");
    solve_q60();
    return 0;
}
