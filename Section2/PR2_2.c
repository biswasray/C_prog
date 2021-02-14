/*
Write a program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main() {
    float p,r,i;
    int t;
    printf("Enter principal amount :");
    scanf("%f",&p);
    printf("Enter rate of interest in percent :");
    scanf("%f",&r);
    printf("Enter time as years :");
    scanf("%d",&t);
    i=(p*t*r)/100;
    printf("Simple interest is equal to %f\n",i);
    i=p*powf((1+r/100),t)-p;
    printf("Compound interest is equal to %f\n",i);
    getch();
}
