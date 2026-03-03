#include<stdio.h>
void reverseorder(char str[]);
int main(){
    char str[100];
    printf("Enter the sentence: ");
    scanf(" %[^\n]", str);
    reverseorder(str);
    printf("After reversing order = %s", str);
    return 0;
}
void reverseorder(char str[]){
    int i = 0, start = 0, end;
    char temp;
    while(str[i] != '\0'){
        i++;
    }
    end = i - 1;
    i = 0;
    while(i < end){
        temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        i++;
        end--;
    }
    i = 0;
    start = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            end = i - 1;
            while(start < end){
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
        i++;
    }
    end = i - 1;
    while(start < end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
