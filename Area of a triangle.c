#include<stdio.h>
int main()
{
    int b,h;
    printf("Enter base and height: ");
    scanf("%d %d",&b,&h);
    float area=0.5*b*h;
    printf("area of triangle= %.2f",area);
    return 0;
}
