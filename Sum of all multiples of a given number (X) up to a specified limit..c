#include <stdio.h>
int main() {
    int x, limit;
    int sum = 0;
    printf("Enter value of X: ");
    scanf("%d", &x);
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(int i = x; i <= limit; i = i + x)
        sum = sum + i;
    printf("Sum of multiples = %d", sum);
    return 0;
}
