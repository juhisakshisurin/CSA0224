#include<stdio.h>
void display(int r,float m);
struct student{
    int roll;
    float marks;
};
int main(){
    struct student s={10,89.5};
    display(s.roll,s.marks);
    return 0;
}
void display(int r,float m){
    printf("Roll no.: %d\n",r);
    printf("Marks: %.2f",m);
}
