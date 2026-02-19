#include <stdio.h>
#include <string.h>

int main() {
    char b1[50], b2[50], sum[51];
    int i, j, k, carry = 0;

    printf("Enter first binary number: ");
    scanf("%s", b1);

    printf("Enter second binary number: ");
    scanf("%s", b2);

    i = strlen(b1) - 1;  // last index of b1
    j = strlen(b2) - 1;  // last index of b2
    k = 0;

    // Binary addition
    while (i >= 0 || j >= 0 || carry) {
        int bit1 = (i >= 0) ? b1[i] - '0' : 0;
        int bit2 = (j >= 0) ? b2[j] - '0' : 0;

        int total = bit1 + bit2 + carry;

        sum[k] = (total % 2) + '0';
        carry = total / 2;

        i--;
        j--;
        k++;
    }

    printf("Sum = ");

    // Print in reverse
    for (i = k - 1; i >= 0; i--) {
        printf("%c", sum[i]);
    }

    return 0;
}
