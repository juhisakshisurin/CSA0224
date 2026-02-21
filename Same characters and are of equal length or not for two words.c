#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i, j, count1, count2;
    int result = 1;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        result = 0;}
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i] + 32;}
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] = str2[i] + 32;}
    if (result == 1) {ear
        for (i = 0; i < strlen(str1); i++) {
            count1 = 0;
            count2 = 0;
            for (j = 0; j < strlen(str1); j++) {
                if (str1[i] == str1[j])
                    count1++;}
            for (j = 0; j < strlen(str2); j++) {
                if (str1[i] == str2[j])
                    count2++;}
            if (count1 != count2) {
                result = 0;
                break;}
        }
    }
    if (result == 1)
        printf("The strings are properly connected.\n");
    else
        printf("The strings are not properly connected.\n");
    return 0;
}
