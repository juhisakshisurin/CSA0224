#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age:");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("You are eligible for voting!");
    }
    else
    {
        printf("You are not eligible for voting!");
    }
    return 0;
}
