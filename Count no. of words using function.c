#include<stdio.h>
int wordcount(char str[]);
int main(){
    char str[100];
    int count;
    printf("Enter the string: ");
    scanf(" %[^\n]", str); 
    count = wordcount(str);
    printf("Number of words = %d", count);
    return 0;
}
int wordcount(char str[]){
    int i = 0, count = 0;
    if(str[0] != ' ' && str[0] != '\0'){
        count = 1;
    }
    while(str[i] != '\0'){
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
            count++;
        }
        i++;
    }
    return count;
}
