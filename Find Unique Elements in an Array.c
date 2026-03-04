#include <stdio.h>

void findUniqueElements(int arr[], int n, int unique[], int *uniqueCount)
{
    int i, j, count;

    *uniqueCount = 0;

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count == 1)
        {
            unique[*uniqueCount] = arr[i];
            (*uniqueCount)++;
        }
    }
}

int main()
{
    int arr[100], unique[100];
    int n, i, uniqueCount;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findUniqueElements(arr, n, unique, &uniqueCount);

    printf("Unique elements are: ");
    for(i = 0; i < uniqueCount; i++)
        printf("%d ", unique[i]);

    return 0;
}
