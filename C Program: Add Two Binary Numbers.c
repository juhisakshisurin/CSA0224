#include <stdio.h>

int main() {
    long long b1, b2;
    int i = 0, carry = 0;
    int sum[20];

    printf("Enter first binary number: ");
    scanf("%lld", &b1);

    printf("Enter second binary number: ");
    scanf("%lld", &b2);

    // Binary addition
    while (b1 != 0 || b2 != 0) {
        sum[i] = (b1 % 10 + b2 % 10 + carry) % 2;
        carry = (b1 % 10 + b2 % 10 + carry) / 2;

        b1 = b1 / 10;
        b2 = b2 / 10;
        i++;
    }

    if (carry != 0) {
        sum[i] = carry;
        i++;
    }

    printf("Sum = ");

    // Print result in reverse
    for (i = i - 1; i >= 0; i--) {
        printf("%d", sum[i]);
    }

    return 0;
}
