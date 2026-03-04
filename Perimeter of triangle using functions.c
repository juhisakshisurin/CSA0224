#include<stdio.h>

float perimeter(float a, float b, float c);

int main(){
    float side1, side2, side3, result;

    printf("Enter side 1: ");
    scanf("%f", &side1);

    printf("Enter side 2: ");
    scanf("%f", &side2);

    printf("Enter side 3: ");
    scanf("%f", &side3);

    result = perimeter(side1, side2, side3);

    printf("Perimeter of triangle = %.2f", result);

    return 0;
}

float perimeter(float a, float b, float c){
    return (a + b + c);
}
