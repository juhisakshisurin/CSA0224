#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 100)
        printf("The number %d is between 1 and 100.\n", num);
     else
        printf("The number %d is NOT between 1 and 100.\n", num);
    return 0;
}
