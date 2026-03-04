#include<stdio.h>

float perimeter(float r);

int main(){
    float radius, result;

    printf("Enter radius: ");
    scanf("%f", &radius);

    result = perimeter(radius);

    printf("Perimeter of circle = %.2f", result);

    return 0;
}

float perimeter(float r){
    float pi = 3.14;
    return 2 * pi * r;
}
