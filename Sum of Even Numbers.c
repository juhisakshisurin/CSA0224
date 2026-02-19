#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {   // Check even number
            sum = sum + i;
        }
    }

    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
