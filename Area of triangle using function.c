#include<stdio.h>

float area(float base, float height);

int main(){
    float base, height, result;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    result = area(base, height);

    printf("Area of triangle = %.2f", result);

    return 0;
}

float area(float base, float height){
    return 0.5 * base * height;
}
