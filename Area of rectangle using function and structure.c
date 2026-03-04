#include<stdio.h>

struct Rectangle{
    float length;
    float breadth;
};

float area(struct Rectangle r);

int main(){
    struct Rectangle r;
    float result;

    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter breadth: ");
    scanf("%f", &r.breadth);

    result = area(r);

    printf("Area of rectangle = %.2f", result);

    return 0;
}

float area(struct Rectangle r){
    return (r.length * r.breadth);
}
