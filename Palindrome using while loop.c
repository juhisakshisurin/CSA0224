#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // Store original number

    // Reverse the number using while loop
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    // Check palindrome
    if (original == reverse) {
        printf("The number is a Palindrome.\n");
    } 
    else {
        printf("The number is not a Palindrome.\n");
    }

    return 0;
}
