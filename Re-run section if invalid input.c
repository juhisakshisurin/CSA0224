#include <stdio.h>
int main() {
    int num;

input:
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Invalid! Try again.\n");
        goto input;
    }

    printf("Valid number entered: %d", num);
    return 0;
}
