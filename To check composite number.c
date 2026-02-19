#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a Composite Number");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    if (count > 2)
        printf("%d is a Composite Number", n);
    else
        printf("%d is Not a Composite Number", n);

    return 0;
}
