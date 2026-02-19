#include <stdio.h>
int main() {
    int n;
    printf("Enter table number to stop: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("\nTable of %d\n", i);
        for(int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
}
