/*
Write a program to input three numbers and find out the smallest.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    float a,b,c,smallest;
    printf("Enter three numbers :\n");
    scanf("%f %f %f",&a,&b,&c);
    smallest=a;
    if(smallest>b)
        smallest=b;
    if(smallest>c)
        smallest=c;
    printf("\n%f is smallest number .",smallest);
    getch();
}
