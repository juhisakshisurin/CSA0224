#include<stdio.h>
void reversewords(char str[]);
int main(){
    char str[100];
    printf("Enter the sentence: ");
    scanf(" %[^\n]", str);
    reversewords(str);
    printf("After reversing words = %s", str);
    return 0;
}
void reversewords(char str[]){
    int i = 0, start = 0, end;
    char temp;
    while(str[i] != '\0'){
        if(str[i] == ' ' || str[i] == '\0'){
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
