#include <stdio.h>

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("%d", n);
            } else if (i == 1 || i == n - 2 || j == 1 || j == n - 2) {
                printf("%d", n - 1);
            } else {
                printf("%d", n - 2);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter an even number: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Please enter an even number.\n");
    } else {
        printPattern(n);
    }

    return 0;
}
