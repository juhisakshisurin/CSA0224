#include <stdio.h>
int main() {
    int num, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;}
    if (num % sum == 0) {
        printf("Harshad Number.\n");}
    else {
        printf("Not a Harshad Number.\n");}
    return 0;
}
