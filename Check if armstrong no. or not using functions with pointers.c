#include<stdio.h>
int armstrong(int *n);
int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = armstrong(&num);
    if(result == 1)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
int armstrong(int *n){
    int original, remainder, sum = 0;
    original = *n;
    while(*n != 0){
        remainder = *n % 10;
        sum = sum + (remainder * remainder * remainder);
        *n = *n / 10;
    }
    if(sum == original)
        return 1;
    else
        return 0;
}
