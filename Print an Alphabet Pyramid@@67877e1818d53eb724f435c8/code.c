#include <stdio.h>

int main() {
    int n;
    char ch;
    
    
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Rows
        ch = 'A';  // Reset character to 'A'
        for (int j = 1; j <= i; j++) {  // Columns
            printf("%c ", ch);
            ch++;  // Move to next character
        }
        printf("\n");
    }

    return 0;
}
// Your code here...
