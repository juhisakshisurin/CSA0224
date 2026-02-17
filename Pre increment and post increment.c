#include <stdio.h>

int main() {
    int x = 3;

    printf("Initial value of x = %d\n", x);

    printf("Post-increment (x++) = %d\n", x++);
    printf("Value of x after post-increment = %d\n", x);

    x = 3;  // Reset value

    printf("Pre-increment (++x) = %d\n", ++x);
    printf("Value of x after pre-increment = %d\n", x);

    return 0;
}
