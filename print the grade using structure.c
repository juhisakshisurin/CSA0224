#include<stdio.h>

struct Student{
    char name[50];
    int marks;
    char grade;
};

void calculateGrade(struct Student *s);

int main(){
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    calculateGrade(&s);

    printf("Grade = %c", s.grade);

    return 0;
}

void calculateGrade(struct Student *s){

    if(s->marks >= 90)
        s->grade = 'S';
    else if(s->marks >= 80)
        s->grade = 'A';
    else if(s->marks >= 70)
        s->grade = 'B';
    else if(s->marks >= 60)
        s->grade = 'C';
    else
        s->grade = 'D';
}
