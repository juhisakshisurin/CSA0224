#include <stdio.h>
int checkEqual(int a, int b){
    if(a == b)
        return 1; 
    else
        return 0;
}
int main(){
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = checkEqual(num1, num2);
    if(result == 1)
        printf("Both numbers are Equal\n");
    else
        printf("Both numbers are Not Equal\n");
    return 0;
}
