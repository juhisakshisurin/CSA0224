#include <stdio.h>

void findLargestSmallestDigits(int n, int *largest, int *smallest)
{
    int digit;

    *largest = 0;
    *smallest = 9;

    while(n > 0)
    {
        digit = n % 10;

        if(digit > *largest)
            *largest = digit;

        if(digit < *smallest)
            *smallest = digit;

        n = n / 10;
    }
}

int main()
{
    int num, largest, smallest;

    printf("Enter a number: ");
    scanf("%d", &num);

    findLargestSmallestDigits(num, &largest, &smallest);

    printf("Largest digit is %d\n", largest);
    printf("Smallest digit is %d", smallest);

    return 0;
}
