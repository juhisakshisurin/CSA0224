#include <stdio.h>
int main() {
    int num, i, flag = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0 && num > 1)
        printf("Prime");
    else
        printf("Not Prime");
}
