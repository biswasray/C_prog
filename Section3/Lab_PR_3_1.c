/*
Write a program to compute the area of a triangle given its three sides.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main() {
    float s,a,b,c,area;
    printf("Enter 3 sides of triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %f ",area);
    getch();
}
