#include <stdio.h>
#include <string.h>

int checkBalanced(char str[], int index, int count)
{
    if(count < 0)
        return 0;

    if(str[index] == '\0')
        return count == 0;

    if(str[index] == '(')
        return checkBalanced(str, index + 1, count + 1);

    if(str[index] == ')')
        return checkBalanced(str, index + 1, count - 1);

    return checkBalanced(str, index + 1, count);
}

int main()
{
    char str[100];

    printf("Enter a string of parentheses: ");
    scanf("%s", str);

    if(checkBalanced(str, 0, 0))
        printf("The string is balanced.");
    else
        printf("The string is not balanced.");

    return 0;
}
