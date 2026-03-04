#include<stdio.h>

float simpleInterest(float p, float r, float t);

int main(){
    float principal, rate, time, si;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    si = simpleInterest(principal, rate, time);

    printf("Simple Interest = %.2f", si);

    return 0;
}

float simpleInterest(float p, float r, float t){
    return (p * r * t) / 100;
}
