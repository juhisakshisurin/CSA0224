#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = min = a;   // Assume first number is both max and min

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    if (b < min)
        min = b;
    if (c < min)
        min = c;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
