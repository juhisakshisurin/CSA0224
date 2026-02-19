#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i * i <= num; i++) {
        if (i * i == num) {
            printf("Perfect Square\n");
            return 0;
        }
    }
    printf("Not a Perfect Square\n");
    return 0;
}
