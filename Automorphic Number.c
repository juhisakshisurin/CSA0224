#include <stdio.h>
int main() {
    int num, square, temp, digits = 0;
    int divisor = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = num * num;
    temp = num;
    while (temp > 0) {
        digits++;
        temp = temp / 10;}
    for (int i = 0; i < digits; i++) {
        divisor = divisor * 10;}
    if (square % divisor == num) {
        printf("Automorphic Number.\n");}
    else {
        printf("Not an Automorphic Number.\n");}
    return 0;
}
