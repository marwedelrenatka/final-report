#include <stdio.h>

int main() {
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &i);

    for (i = 0; i < i; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j == i)
                break;
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
