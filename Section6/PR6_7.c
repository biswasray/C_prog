/*
Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed e.g. 16461).
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
        s=s*10+d;
        t/=10;
    }
    if(n==s)
        printf("%d is palindrome number .",n);
    else
        printf("%d is not palindrome number .",n);
    getch();
}
