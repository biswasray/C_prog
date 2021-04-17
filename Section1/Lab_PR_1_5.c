/*
Write a program that takes the radius of a circle and displays its area and perimeter.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main() {
    double r,a,p;
    printf("Enter radius of circle : ");
    scanf("%lf",&r);
    a=M_PI*r*r;
    p=2*M_PI*r;
    printf("Area of circle is equal to %lf\n",a);
    printf("Perimeter of circle is equal to %lf\n",p);
    getch();
}