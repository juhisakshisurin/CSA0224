#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n % 2 == 0 && n % 5 == 0)
        printf("%d is divisible by both 2 and 5\n",n);
    else
        printf("%d is not divisible by 2 and 5",n);
    return 0;
}
