/*
 * ============================================================================
 * Day             : Day 19 (Day-019)
 * Date            : 4 September 2026
 * Topic           : Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q37 (Loops without Arrays/Strings):
 *   Write a program to find the LCM of two numbers.
 *
 * Explanation:
 *   Computes the LCM of two numbers using the relationship LCM(a, b) = (a * b) / GCD(a, b).
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 4 5
 *     Output : 20
 *   Test Case 2:
 *     Input  : 7 3
 *     Output : 21
 *
 * Time Complexity : O(log(min(a, b)))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q38 (Loops without Arrays/Strings):
 *   Write a program to find the sum of digits of a number.
 *
 * Explanation:
 *   Repeatedly extracts the last digit using n % 10 and adds it to the running sum until n becomes 0.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 123
 *     Output : 6
 *   Test Case 2:
 *     Input  : 999
 *     Output : 27
 *
 * Time Complexity : O(log10(n))
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q37: Write a program to find the LCM of two numbers. --- */
void solve_q37(void) {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        int x = a, y = b;
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        int gcd = x;
        int lcm = (a / gcd) * b;
        printf("%d\n", lcm);
    }
}

/* --- Q38: Write a program to find the sum of digits of a number. --- */
void solve_q38(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        if (n < 0) n = -n;
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        printf("%d\n", sum);
    }
}

int main(void) {
    printf("=== Day 19 | Q37 ===\n");
    solve_q37();

    printf("\n=== Day 19 | Q38 ===\n");
    solve_q38();
    return 0;
}
