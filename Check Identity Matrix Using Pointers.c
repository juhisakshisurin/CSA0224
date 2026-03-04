#include <stdio.h>

int isIdentityMatrix(int *matrix, int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(*(matrix + i*n + j) != 1)
                    return 0;
            }
            else
            {
                if(*(matrix + i*n + j) != 0)
                    return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int matrix[10][10], n, i, j;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    if(isIdentityMatrix((int *)matrix, n))
        printf("The matrix is an identity matrix");
    else
        printf("The matrix is not an identity matrix");

    return 0;
}
