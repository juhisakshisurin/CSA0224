#include <stdio.h>
int main(){
    int n;
    for(int i=1;i<=10;i++){
        scanf("%d",&n);
        if(n%2==0)
            printf("%d ",n);
    }
    return 0;
}
