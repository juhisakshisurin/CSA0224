#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;}
    return fact;
}
int main() {
    int num, temp, digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp = temp / 10;}
    if (sum == num) {
        printf("Strong Number.\n");}
    else {
        printf("Not a Strong Number.\n");}
    return 0;
}
