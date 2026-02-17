#include <stdio.h>
int main() {
    int marks[5];
    int i, total = 0, count = 0;
    float average;
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 50)
            count++;
    }
    average = total / 5.0;
    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);
    if (average >= 90)
        printf("Grade: A+\n");
    else if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 70)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: Fail\n");
    printf("Subjects with marks below 50 = %d\n", count);
    return 0;
}
