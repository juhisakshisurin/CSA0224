#include <stdio.h>
int sumOfSquares(int n) {
    int digit, sum = 0;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n = n / 10;}
    return sum;
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num;
    while (result != 1 && result != 4) {
        result = sumOfSquares(result);}
    if (result == 1) {
        printf("Magic Number.\n");}
    else {
        printf("Not a Magic Number.\n");}
    return 0;
}
