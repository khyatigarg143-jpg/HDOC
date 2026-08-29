/*
 * ============================================================================
 * Day             : Day 13 (Day-013)
 * Date            : 29 August 2026
 * Topic           : Conditional Statements / Loops without Arrays/Strings
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q25 (Conditional Statements):
 *   Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 *
 * Explanation:
 *   Reads two integers and an operator (+, -, *, /, %) and performs the corresponding arithmetic operation using switch-case.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 4 2 +
 *     Output : 6
 *   Test Case 2:
 *     Input  : 10 3 %
 *     Output : 1
 *   Test Case 3:
 *     Input  : 15 5 /
 *     Output : 3
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q26 (Loops without Arrays/Strings):
 *   Write a program to print numbers from 1 to n.
 *
 * Explanation:
 *   Uses a for loop to print numbers from 1 to n separated by spaces.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5
 *     Output : 1 2 3 4 5
 *   Test Case 2:
 *     Input  : 3
 *     Output : 1 2 3
 *
 * Time Complexity : O(n)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/* --- Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %. --- */
void solve_q25(void) {
    int a, b;
    char op;
    printf("Enter two numbers and an operator (e.g., 4 2 +): ");
    if (scanf("%d %d %c", &a, &b, &op) == 3) {
        switch (op) {
            case '+': printf("%d\n", a + b); break;
            case '-': printf("%d\n", a - b); break;
            case '*': printf("%d\n", a * b); break;
            case '/':
                if (b != 0) printf("%d\n", a / b);
                else printf("Division by zero error\n");
                break;
            case '%':
                if (b != 0) printf("%d\n", a % b);
                else printf("Modulo by zero error\n");
                break;
            default: printf("Invalid operator\n"); break;
        }
    }
}

/* --- Q26: Write a program to print numbers from 1 to n. --- */
void solve_q26(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            printf("%d%s", i, (i == n) ? "" : " ");
        }
        printf("\n");
    }
}

int main(void) {
    printf("=== Day 13 | Q25 ===\n");
    solve_q25();

    printf("\n=== Day 13 | Q26 ===\n");
    solve_q26();
    return 0;
}
