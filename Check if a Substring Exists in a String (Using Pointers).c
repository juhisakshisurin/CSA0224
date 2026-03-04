#include <stdio.h>

int isSubstring(char *str, char *sub)
{
    char *p, *q;

    while(*str)
    {
        p = str;
        q = sub;

        while(*p && *q && *p == *q)
        {
            p++;
            q++;
        }

        if(*q == '\0')
            return 1;

        str++;
    }

    return 0;
}

int main()
{
    char str[100], sub[100];

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    if(isSubstring(str, sub))
        printf("'%s' is a substring of '%s'", sub, str);
    else
        printf("'%s' is not a substring of '%s'", sub, str);

    return 0;
}
