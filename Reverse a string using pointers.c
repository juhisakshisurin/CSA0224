#include<stdio.h>
int main(){
    char str[100];
    char *p;
    int len=0;
    printf("Enter a string:");
    scanf("%s",str);
    p=str;
    while (*p!='\0'){
        len++;
        p++;
    }
    p--;
    printf("Reversed string:");
    while (len > 0){
        printf("%c",*p);
        p--;
        len--;
    }
    return 0;
}
