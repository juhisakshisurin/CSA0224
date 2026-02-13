#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float D,r1,r2;
    printf("Enter values:");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("The roots are= %.2f %.2f",r1,r2);
    return 0;
}
