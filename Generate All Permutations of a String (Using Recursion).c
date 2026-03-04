#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char str[], int l, int r)
{
    int i;

    if(l == r)
        printf("%s\n", str);
    else
    {
        for(i = l; i <= r; i++)
        {
            swap(&str[l], &str[i]);
            permute(str, l + 1, r);
            swap(&str[l], &str[i]); // backtrack
        }
    }
}

int main()
{
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    printf("Permutations are:\n");
    permute(str, 0, n - 1);

    return 0;
}
