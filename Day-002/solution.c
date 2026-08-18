/*
 * ============================================================================
 * Day             : Day 2 (Day-002)
 * Date            : 18 August 2026
 * Topic           : User Inputs, Operations & Output
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q3 (User Inputs, Operations & Output):
 *   Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 *
 * Explanation:
 *   Calculates the area (length * breadth) and perimeter (2 * (length + breadth)) of a rectangle.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 5 10
 *     Output : Area=50, Perimeter=30
 *   Test Case 2:
 *     Input  : 3 7
 *     Output : Area=21, Perimeter=20
 *
 * Time Complexity : O(1)
 * Space Complexity: O(1)
 * ----------------------------------------------------------------------------
 *
 * Question Q4 (User Inputs, Operations & Output):
 *   Write a program to calculate the area and circumference of a circle given its radius.
 *
 * Explanation:
 *   Calculates the area (PI * r * r) and circumference (2 * PI * r) of a circle using PI = 3.141592653589793.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : 7
 *     Output : Area=153.94, Circumference=43.96
 *   Test Case 2:
 *     Input  : 3
 *     Output : Area=28.27, Circumference=18.85
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

/* --- Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth. --- */
void solve_q3(void) {
    int length, breadth;
    printf("Enter length and breadth: ");
    if (scanf("%d %d", &length, &breadth) == 2) {
        int area = length * breadth;
        int perimeter = 2 * (length + breadth);
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }
}

/* --- Q4: Write a program to calculate the area and circumference of a circle given its radius. --- */
void solve_q4(void) {
    double radius;
    const double PI = 3.14159265358979323846;
    printf("Enter radius: ");
    if (scanf("%lf", &radius) == 1) {
        double area = PI * radius * radius;
        double circumference = 2.0 * PI * radius;
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    }
}

int main(void) {
    printf("=== Day 2 | Q3 ===\n");
    solve_q3();

    printf("\n=== Day 2 | Q4 ===\n");
    solve_q4();
    return 0;
}
