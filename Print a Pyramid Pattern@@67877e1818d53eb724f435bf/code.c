#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

    for (int i = 1; i <= rows; i++) {
        // Printing spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
