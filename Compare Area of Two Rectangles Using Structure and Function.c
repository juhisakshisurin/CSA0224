#include <stdio.h>

struct Rectangle
{
    int length;
    int width;
};

void compareRectangles(struct Rectangle r1, struct Rectangle r2)
{
    int area1, area2;

    area1 = r1.length * r1.width;
    area2 = r2.length * r2.width;

    if(area1 > area2)
        printf("Rectangle 1 has a larger area.");
    else if(area2 > area1)
        printf("Rectangle 2 has a larger area.");
    else
        printf("Both rectangles have equal area.");
}

int main()
{
    struct Rectangle r1, r2;

    printf("Enter length and width of rectangle 1: ");
    scanf("%d %d", &r1.length, &r1.width);

    printf("Enter length and width of rectangle 2: ");
    scanf("%d %d", &r2.length, &r2.width);

    compareRectangles(r1, r2);

    return 0;
}
