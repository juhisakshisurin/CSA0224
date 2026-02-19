#include <stdio.h>
int main() {

    printf("Using continue:\n");
    for(int i = 1; i <= 5; i++) {
        if(i == 3)
            continue;
        printf("%d ", i);
    }

    printf("\nUsing break:\n");
    for(int i = 1; i <= 5; i++) {
        if(i == 3)
            break;
        printf("%d ", i);
    }
}
