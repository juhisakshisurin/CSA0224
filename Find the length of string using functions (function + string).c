#include<stdio.h>
int stringlength(char str[]);
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int length=stringlength(str);
    printf("Length of string= %d",length);
    return 0;
}
int stringlength(char str[]){
    int i=0;
    while (str[i]!='\0'){
        i++;
    }
    return i;
}
