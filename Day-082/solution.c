/*
 * ============================================================================
 * Day             : Day 82 (Day-082)
 * Date            : 6 November 2026
 * Topic           : Enum
 * Source          : https://maitysoumik.github.io/basic-coding-with-c/
 * ============================================================================
 *
 * Question Q132 (Enum):
 *   Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
 *
 * Explanation:
 *   Maps input string ('RED', 'YELLOW', 'GREEN') to an enum TrafficLight value and prints 'Stop', 'Wait', or 'Go'.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input  : GREEN
 *     Output : Go
 *     Detail : When the enum value is GREEN, the program prints 'Go'.
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

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    char input[20];
    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    if (scanf("%19s", input) == 1) {
        enum TrafficLight light = RED;
        if (strcmp(input, "RED") == 0) light = RED;
        else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
        else if (strcmp(input, "GREEN") == 0) light = GREEN;

        switch (light) {
            case RED:    printf("Stop\n"); break;
            case YELLOW: printf("Wait\n"); break;
            case GREEN:  printf("Go\n"); break;
        }
    }
    return 0;
}
