#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0, i;
    int digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    for(i = num; i != 0; i /= 10) {
        digits++;
    }

    // Calculate sum of powers
    for(i = num; i != 0; i /= 10) {
        remainder = i % 10;
        int power = 1;
        for(int j = 1; j <= digits; j++) {
            power *= remainder;
        }
        sum += power;
    }

    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
