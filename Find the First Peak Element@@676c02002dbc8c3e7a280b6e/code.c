#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Handle single-element array case
    if (n == 1) {
        printf("%d\n", arr[0]);
        return 0;
    }

    // Check first element
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return 0;
    }

    // Check for peak in the middle
    for (int j = 1; j < n - 1; j++) {
        if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) {
            printf("%d\n", arr[j]);
            return 0;
        }
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d\n", arr[n - 1]);
        return 0;
    }

    return 0;
}
