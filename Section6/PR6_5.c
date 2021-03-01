/*
Write a program to find the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int s,c;
    s=c=0;
    for(int i=100;i<200;i++) {
        if(i%7==0) {
            c++;
            s+=i;
        }
    }
    printf("Sum of all %d numbers between 100 and 200 is %d",c,s);
    getch();
}
