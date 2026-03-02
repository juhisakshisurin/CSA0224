#include<stdio.h>
int main(){
    int n,arr[10],count=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i] != 0){
            arr[count++]=arr[i];
        }
    }
    while (count<n){
        arr[count++]=0;
    }
    printf ("Final array:\n");
    for (int i=0;i<n;i++){
        printf ("%d ",arr[i]);
    }
    return 0;
}
