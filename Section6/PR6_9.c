/*
Write a program to input a number and check whether it is prefect or not (A number is
called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number
since 1+2+4+7+14=28).
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int n,t,d,s;
    printf("Input a number : ");
    scanf("%d",&n);
    t=1;
    s=0;
    while(t<n) {
        if(n%t==0)
            s+=t;
        t++;
    }
    if(n==s)
        printf("%d is prefect number .",n);
    else
        printf("%d is not prefect number .",n);
    getch();
}
