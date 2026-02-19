#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    int attempts = 0;

login:
    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(password, "admin") == 0) {
        printf("Login Successful\n");
        return 0;
    }

    attempts++;
    if(attempts < 3) {
        printf("Try again\n");
        goto login;
    }

    printf("Too many attempts!\n");
    return 0;
}
