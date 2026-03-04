#include <stdio.h>

int sumEvenFibonacci(int a, int b, int limit)
{
    int next;

    next = a + b;

    if(next > limit)
        return 0;

    if(next % 2 == 0)
        return next + sumEvenFibonacci(b, next, limit);
    else
        return sumEvenFibonacci(b, next, limit);
}

int main()
{
    int limit, sum;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    sum = sumEvenFibonacci(0, 1, limit);

    printf("Sum of even Fibonacci numbers up to %d is %d", limit, sum);

    return 0;
}
