#include <stdio.h>
int main() {
    int choice;
    float a, b;

menu:
    printf("\n1.Add  2.Subtract  3.Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 3)
        return 0;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(choice == 1)
        printf("Result = %.2f\n", a + b);
    else if(choice == 2)
        printf("Result = %.2f\n", a - b);
    else
        printf("Invalid choice\n");

    goto menu;
}
