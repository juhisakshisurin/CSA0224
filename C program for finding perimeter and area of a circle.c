//Perimeter and area of a cirlce
#include <stdio.h>
int main() {
    float r,area=0,circumference=0,pi=3.14;
    printf("Enter the radius value:");
    scanf("%f",&r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("Circumference= %2.f\n",circumference);
    printf("Area= %2.f",area);
    return 0;
}
