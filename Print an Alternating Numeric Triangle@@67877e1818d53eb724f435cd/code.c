#include <stdio.h>

int main() {
    int rows;

    // Taking input from user
    
    scanf("%d", &rows);

    // Printing the pattern
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}