#include <stdio.h>
int main() {
    int num;
    for(int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num <= 0)
            continue;
        printf("Positive: %d\n", num);
    }
    return 0;
}
