/*
Write a program to print the following structure using simple printf statements:
*
**
***
****

*/
#include<stdio.h>
#include<conio.h>
void main() {
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    /* or
    for(int i=0;i<4;i++) {
        for(int j=0;j<i;j++) {
            printf("*");
        }
        printf("\n");
    }
    */
   getch();
}