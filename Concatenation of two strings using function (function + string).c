#include<stdio.h>
void concatenation (char str1[],char str2[]);
int main(){
    char str1[100],str2[100];
    printf("Enter 1st string: ");
    scanf("%s",str1);
    printf("Enter 2nd string: ");
    scanf("%s",str2);
    concatenation(str1,str2);
    printf("Concatenated string: %s",str1);
    return 0;
}
void concatenation(char str1[],char str2[]){
    int i=0,j=0;
    while (str1[i]!='\0'){
        i++;
    }
    while (str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}
