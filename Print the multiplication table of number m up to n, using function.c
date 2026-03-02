#include <stdio.h>
void table(int m, int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("%d x %d = %d\n", m, i, m * i);
    }
}

int main(){
    int m, n;
    printf("Enter the number (m): ");
    scanf("%d", &m);
    printf("Enter the limit (n): ");
    scanf("%d", &n);
    table(m, n);
    return 0;
}
