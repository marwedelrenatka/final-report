#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int value = i + 2 * i % 5 - 3;
        printf("%d ", value);
    }

    return 0;
}
