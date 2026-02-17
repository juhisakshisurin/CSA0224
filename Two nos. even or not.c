#include <stdio.h>
int main() {
    int a, b;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    if (a % 2 == 0 && b % 2 == 0)
        printf("Both numbers are even.\n");
    else
        printf("Both numbers are not even.\n");
    return 0;
}
