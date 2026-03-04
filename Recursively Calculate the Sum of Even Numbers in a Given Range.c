#include <stdio.h>

int sumEven(int start, int end)
{
    if(start > end)
        return 0;

    if(start % 2 == 0)
        return start + sumEven(start + 1, end);
    else
        return sumEven(start + 1, end);
}

int main()
{
    int start, end, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    sum = sumEven(start, end);

    printf("Sum of even numbers from %d to %d is %d", start, end, sum);

    return 0;
}
