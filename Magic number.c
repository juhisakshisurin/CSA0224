#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;}
    return sum;
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num;
    while (result >= 10) {
        result = sumOfDigits(result);}
    if (result == 1) {
        printf("Magic Number.\n");}
    else {
        printf("Not a Magic Number.\n");}
    return 0;
}
