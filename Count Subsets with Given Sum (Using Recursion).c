#include <stdio.h>

int countSubsets(int arr[], int n, int sum)
{
    if(sum == 0)
        return 1;

    if(n == 0)
        return 0;

    if(arr[n-1] > sum)
        return countSubsets(arr, n-1, sum);

    return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}

int main()
{
    int arr[100], n, sum, i, result;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the target sum: ");
    scanf("%d", &sum);

    result = countSubsets(arr, n, sum);

    printf("Number of subsets with the given sum: %d", result);

    return 0;
}
