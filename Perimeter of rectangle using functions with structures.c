#include<stdio.h>

struct Rectangle{
    float length;
    float breadth;
};

float perimeter(struct Rectangle r);

int main(){
    struct Rectangle r;
    float result;

    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter breadth: ");
    scanf("%f", &r.breadth);

    result = perimeter(r);

    printf("Perimeter of rectangle = %.2f", result);

    return 0;
}

float perimeter(struct Rectangle r){
    return 2 * (r.length + r.breadth);
}
