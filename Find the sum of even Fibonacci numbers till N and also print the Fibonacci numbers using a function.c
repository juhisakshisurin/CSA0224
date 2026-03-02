#include <stdio.h>
void evenFibonacciSum(int n){
    int a = 0, b = 1, c;
    int evenSum = 0;
    printf("Fibonacci Series up to %d:\n", n);
    while(a <= n){
        printf("%d ", a);
        if(a % 2 == 0){
            evenSum = evenSum + a;
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n\nSum of Even Fibonacci Numbers = %d\n", evenSum);
}
int main(){
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    evenFibonacciSum(n);
    return 0;
}
