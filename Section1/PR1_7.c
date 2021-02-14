/*
Write a program to swap two numbers without using a third variable.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int a,b;
    printf("Enter 1st number as a : ");
    scanf("%d",&a);
    printf("Enter 2nd number as b : ");
    scanf("%d",&b);
    printf("Before swapping\na=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;  //or a=(a+=b)-(b=a-b);
    a=a-b;
    printf("\nAfter swapping\na=%d\nb=%d",a,b);
    getch();
}