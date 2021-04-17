/*
Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 33 + 73 + 13 = 371).
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int n,t,d,s;
    printf("Input a number : ");
    scanf("%d",&n);
    t=n;
    s=0;
    while(t!=0) {
        d=t%10;
        s=s+d*d*d;
        t/=10;
    }
    if(n==s)
        printf("%d is Armstrong number .",n);
    else
        printf("%d is not Armstrong number .",n);
    getch();
}
