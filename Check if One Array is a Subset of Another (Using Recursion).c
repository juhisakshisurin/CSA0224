#include <stdio.h>

int search(int A[], int n, int key)
{
    if(n == 0)
        return 0;

    if(A[n-1] == key)
        return 1;

    return search(A, n-1, key);
}

int isSubset(int A[], int B[], int m, int n)
{
    if(n == 0)
        return 1;

    if(!search(A, m, B[n-1]))
        return 0;

    return isSubset(A, B, m, n-1);
}

int main()
{
    int A[100], B[100], m, n, i;

    printf("Enter the size of array A: ");
    scanf("%d", &m);

    printf("Enter elements of array A: ");
    for(i = 0; i < m; i++)
        scanf("%d", &A[i]);

    printf("Enter the size of array B: ");
    scanf("%d", &n);

    printf("Enter elements of array B: ");
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);

    if(isSubset(A, B, m, n))
        printf("Array B is a subset of array A.");
    else
        printf("Array B is not a subset of array A.");

    return 0;
}
