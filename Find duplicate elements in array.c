#include<stdio.h>
int main(){
    int n,arr[50];
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements:");
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}
