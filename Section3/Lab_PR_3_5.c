/*
Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.]
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int a,d,sum=0;
    printf("Enter a four-digit integer : ");
    scanf("%d",&a);
    d=a%10;
    sum+=d;
    a/=10;
    d=a%10;
    sum+=d;
    a/=10;
    d=a%10;
    sum+=d;
    a/=10;
    d=a%10;
    sum+=d;
    printf("Sum of its digits is %d",sum);
    getch();
}
