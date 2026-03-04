#include<stdio.h>

float area(float r);

int main(){
    float radius, result;

    printf("Enter radius: ");
    scanf("%f", &radius);

    result = area(radius);

    printf("Area of circle = %.2f", result);

    return 0;
}

float area(float r){
    float pi = 3.14;
    return pi * r * r;
}
