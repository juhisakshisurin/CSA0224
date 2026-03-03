#include<stdio.h>
void reverse(char str[]);
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    reverse(str);
    printf("Reversed string: %s",str);
    return 0;
}
void reverse(char str[]){
    int i=0,j;
    int temp;
    while (str[i]!='\0'){
        i++;
    }
    j=i-1;
    i=0;
    while (i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
