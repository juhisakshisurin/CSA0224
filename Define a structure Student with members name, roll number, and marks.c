#include<stdio.h>
struct student{
    char name[50];
    int rollno;
    int marks;
};
void calculateaveragemarks(struct student s[],int n);
int main(){
    struct student s[100];
    int i,n;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter name, roll no. and marks of student %d: \n",i+1);
        scanf("%s %d %d",s[i].name,&s[i].rollno,&s[i].marks);
    }
    calculateaveragemarks(s,n);
    return 0;
}
void calculateaveragemarks(struct student s[],int n){
    int i,sum=0;
    float avg;
    for (i=0;i<n;i++){
        sum+=s[i].marks;
    }
    avg=(float)sum/n;
    printf("Average marks= %.2f",avg);
}
