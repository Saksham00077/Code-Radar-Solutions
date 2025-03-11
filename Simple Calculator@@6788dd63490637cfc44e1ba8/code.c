#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    // Reading two integers
    scanf("%d %d", &a, &b);
    
    // Reading the operator (notice the space before %c)
    scanf(" %c", &c);
    
    // Performing the operation
    if (c == '+') {
        printf("%d", a + b);
    } else if (c == '-') {
        printf("%d", a - b);
    } else if (c == '*') {
        printf("%d", a * b);
    } else if (c == '/') {
        // Handling division by zero
        if (b == 0) {
            printf("error");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("error");
    }
    
    return 0;
}
