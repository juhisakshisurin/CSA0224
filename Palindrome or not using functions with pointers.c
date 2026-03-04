#include<stdio.h>

int palindrome(char *str);

int main(){
    char str[100];
    int result;

    printf("Enter the string: ");
    scanf("%s", str);

    result = palindrome(str);

    if(result == 1)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}

int palindrome(char *str){
    char *start = str;
    char *end = str;

    // Move end pointer to last character
    while(*end != '\0'){
        end++;
    }
    end--;   // Move back from null character

    // Compare characters from both sides
    while(start < end){
        if(*start != *end)
            return 0;

        start++;
        end--;
    }

    return 1;
}
