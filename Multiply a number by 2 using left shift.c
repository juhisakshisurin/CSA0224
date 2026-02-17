#include <stdio.h>
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num << 1;
    printf("Result = %d\n", result);
    return 0;
}
