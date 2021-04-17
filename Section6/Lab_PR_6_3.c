/*
Write a program to count the number of digits in a number.
*/

#include<stdio.h>
#include<conio.h>
void main() {
    int n,c=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0) {
        c++;
        n/=10;
    }
    printf("The number of digits in an integer is : %d",c);
    getch();
}
