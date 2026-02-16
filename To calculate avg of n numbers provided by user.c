#include <stdio.h>
int main() {
    int n;
    float sum = 0, num, average;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;}
    average = sum / n;
    printf("Average = %.2f", average);
    return 0;
}
