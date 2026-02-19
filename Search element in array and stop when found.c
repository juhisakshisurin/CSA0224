#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not found");
}
