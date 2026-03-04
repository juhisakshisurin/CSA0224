#include <stdio.h>

int isMagicNumber(int n)
{
    int sum = 0, digit;

    while(n > 9)
    {
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        n = sum;
    }

    if(n == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isMagicNumber(num))
        printf("%d is a magic number", num);
    else
        printf("%d is not a magic number", num);

    return 0;
}
