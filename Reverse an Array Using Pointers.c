#include <stdio.h>

void reverseArray(int *arr, int n)
{
    int i, temp;

    for(i = 0; i < n/2; i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = temp;
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverseArray(arr, n);

    printf("Reversed array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
