#include <stdio.h>

int main() {
    int days, years, months, rem_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    months = days / 30;
    rem_days = days % 30;

    printf("Years = %d\nMonths = %d\nDays = %d", years, months, rem_days);
    return 0;
}
