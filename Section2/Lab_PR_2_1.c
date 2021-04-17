/*
Write a program to compute the area of a triangle given its base and height.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    float b,h,a;
    printf("Enter base of triangle :");
    scanf("%f",&b);
    printf("Enter height of triangle :");
    scanf("%f",&h);
    a=0.5*b*h;
    printf("Area of a triangle is %f",a);
    getch();
}