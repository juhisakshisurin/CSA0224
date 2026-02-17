#include<stdio.h>

int main()
{
    int a, t;
    float i;

    printf("Enter the amount, time and interest rate:\n");
    scanf("%d %d %f", &a, &t, &i);

    float si = (a * t * i) / 100;

    printf("The Simple Interest is %.2f", si);

    return 0;
}
