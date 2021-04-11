/*
Write a program to find out the length of a string without using the strlen() function.
*/
#include<stdio.h>
void main() {
    char string[50];
    printf("Enter a string : ");
    gets(string);
    int c;
    for(c=0;string[c]!='\0';c++) {}
    printf("Length of this string is %d\n",c);
}
