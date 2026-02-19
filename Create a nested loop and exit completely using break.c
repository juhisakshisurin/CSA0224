#include <stdio.h>
int main() {

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {

            if(i == 2 && j == 2) {
                printf("Exit all loops\n");
                goto end;   // exit both loops
            }

            printf("i=%d j=%d\n", i, j);
        }
    }

end:
    return 0;
;
}
