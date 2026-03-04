#include <stdio.h>

struct Marks
{
    char subject[50];
    int score;
};

void findMaxMinMarks(struct Marks m[], int n)
{
    int i;
    int max = 0, min = 0;

    for(i = 1; i < n; i++)
    {
        if(m[i].score > m[max].score)
            max = i;

        if(m[i].score < m[min].score)
            min = i;
    }

    printf("\nMaximum marks: %d (Subject: %s)", m[max].score, m[max].subject);
    printf("\nMinimum marks: %d (Subject: %s)", m[min].score, m[min].subject);
}

int main()
{
    struct Marks m[100];
    int n, i;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter subject %d and marks: ", i + 1);
        scanf("%s %d", m[i].subject, &m[i].score);
    }

    findMaxMinMarks(m, n);

    return 0;
}
