#include<stdio.h>
#include<string.h>
void combinations(char str[],char result[],int start,int index,int len);
int main(){
    char str[100],result[100];
    int len;
    printf("Enter a string: ");
    scanf("%s",str);
    len=strlen(str);
    printf("Combinations:\n");
    combinations(str,result,0,0,len);
    return 0;
}
void combinations(char str[],char result[],int start,int index,int len){
    int i;
    for (i=start;i<len;i++){
        result[index]=str[i];
        result[index+1]='\0';
        printf("%s\n",result);
        combinations(str,result,i+1,i+1,len);
    }
}
