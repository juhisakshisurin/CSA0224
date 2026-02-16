#include <stdio.h>
int main() {
    float height;
    printf("Enter the height in cm: ");
    scanf("%f", &height);
    if(height < 150)
        printf("Category: Dwarf");
    else if(height >= 150 && height <= 170)
        printf("Category: Average");
    else
        printf("Category: Taller");
    return 0;
}
