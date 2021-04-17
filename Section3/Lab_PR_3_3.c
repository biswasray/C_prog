/*
Write a program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.]
*/
#include<stdio.h>
#include<conio.h>
void main() {
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    a>=65&&a<91?printf("%c is upper case letter",a):printf("%c is lower case letter",a);
    getch();
}
