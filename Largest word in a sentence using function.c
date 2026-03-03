#include<stdio.h>
void largestword(char str[]);
int main(){
    char str[100];
    printf("Enter the sentence: ");
    scanf(" %[^\n]", str); 
    largestword(str);
    return 0;
}
void largestword(char str[]){
    int i = 0, max = 0, len = 0;
    int start = 0, maxstart = 0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            len++;
        }
        else{
            if(len > max){
                max = len;
                maxstart = start;
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }
    if(len > max){
        max = len;
        maxstart = start;
    }
    printf("Largest word = ");
    for(i = 0; i < max; i++){
        printf("%c", str[maxstart + i]);
    }
}
