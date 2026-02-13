//Perimeter and area of a rectangle
#include <stdio.h>
int main() {
    int a,b,perimeter=0,area=0;
    printf("Enter the values:");
    scanf("%d %d",&a,&b);
    perimeter=2*a+b;
    area=a*b;
    printf("perimeter= %d\n",perimeter);
    printf("area= %d",area);
    return 0;
}
