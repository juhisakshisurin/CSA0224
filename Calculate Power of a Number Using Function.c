#include <stdio.h>

double power(double base, int exponent)
{
    double result = 1;
    int i;

    for(i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    double base, result;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%.0lf raised to the power %d is %.0lf", base, exponent, result);

    return 0;
}
