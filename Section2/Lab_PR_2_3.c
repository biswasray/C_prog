/*
Write a program that requests two float type numbers from the user and then divides the
1st number by the 2nd and displays the result along with the numbers.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    float a,b,c;
    printf("Enter 1st number :");
    scanf("%f",&a);
    printf("Enter 2nd number :");
    scanf("%f",&b);
    c=a/b;
    printf("%f / %f = %f\n",a,b,c);
    getch();
}