#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void addTimes(struct Time t1, struct Time t2)
{
    struct Time result;

    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
    result.seconds = result.seconds % 60;

    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes = result.minutes % 60;

    printf("Total Time: %d hours %d minutes %d seconds",
           result.hours, result.minutes, result.seconds);
}

int main()
{
    struct Time t1, t2;

    printf("Enter time 1 (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter time 2 (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    addTimes(t1, t2);

    return 0;
}
