/*
Write a program to create a structure COMPLEX to represent a complex number. Using
the structure write a program to add two complex numbers and display their sum
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    double x;
    double y;
}COMPLEX;
void main()
{
    COMPLEX a,b,c;
    printf("Enter for 1st Complex Number \n");
    printf("value of real part : ");
    scanf("%lf",&a.x);
    printf("value of imaginary part : ");
    scanf("%lf",&a.y);

    printf("\nEnter for 2nd Complex Number \n");
    printf("value of real part : ");
    scanf("%lf",&b.x);
    printf("value of imaginary part : ");
    scanf("%lf",&b.y);

    c.x=a.x+b.x;
    c.y=a.y+b.y;
    printf("Sum of %0.2lf+%0.2lfi and %0.2lf+%0.2lfi = %0.2lf+%0.2lfi",a.x,a.y,b.x,b.y,c.x,c.y);
}
