#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    int sq=a*a;
    int cube=a*a*a;
    printf("Square = %d\nCube = %d", sq, cube);
    return 0;
}
