#include <stdio.h>

int main() {
    int choice;
    float balance = 5000, amt;

menu:
    printf("\n--- ATM Menu ---\n");
    printf("1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        printf("Balance = %.2f\n", balance);
        goto menu;

    case 2:
        printf("Enter amount: ");
        scanf("%f", &amt);
        balance += amt;
        printf("Deposited!\n");
        goto menu;

    case 3:
        printf("Enter amount: ");
        scanf("%f", &amt);

        if(amt > balance)
            printf("Insufficient Balance\n");
        else {
            balance -= amt;
            printf("Withdrawn!\n");
        }
        goto menu;

    case 4:
        printf("Thank you!\n");
        break;

    default:
        printf("Invalid choice\n");
        goto menu;
    }

    return 0;
}
