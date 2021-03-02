/*
Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to
‘n’. (Hint: Fibonacci series: 1 1 2 3 5 8 13 21 ...)
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int n,a,b,c;
    printf("Input a number : ");
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    while(c<=n) {
        c=a+b;
        printf("%d ",b);
        a=b;
        b=c;
    }
    getch();
}
