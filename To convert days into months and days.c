#include <stdio.h>

int main() {
    int days, months, rem_days;
    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;
    rem_days = days % 30;

    printf("Months = %d\nRemaining Days = %d", months, rem_days);
    return 0;
}
