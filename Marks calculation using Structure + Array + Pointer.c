#include<stdio.h>
struct student{
    char name[50];
    int rollno;
    int marks;
};
int main(){
    struct student s[100];
    struct student *p;
    int i,n,sum=0;
    float avg;
    printf("Enter no. of students: \n");
    scanf("%d",&n);
    p=s;
    for (i=0;i<n;i++){
        printf("Enter name rollno and marks: ");
        scanf("%s %d %d",(p+i)->name,&(p+i)->rollno,&(p+i)->marks);
        sum+=(p+i)->marks;
    }
    avg=(float)sum/n;
    printf("Average marks: %.2f",avg);
}
