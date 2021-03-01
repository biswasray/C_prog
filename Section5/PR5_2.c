/*
Write a program to input a number and print “ODD” if the number is odd and “EVEN” if
the number is even.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int a;
    printf("Enter a numbers : ");
    scanf("%d",&a);
    if(a%2==0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    getch();
}
