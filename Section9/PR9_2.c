/*
Write a program that will count the number of occurrences of a specific character in a
given line of text.
*/
#include<stdio.h>
void main() {
    char string[50],a;
    printf("Enter a string : ");
    gets(string);
    int c,i;
    printf("Enter the character you want to find : ");
    scanf("%c",&a);
    for(i=0,c=0;string[i]!='\0';i++) {
        if(string[i]==a)
            c++;
    }
    printf("\'%c\' appear %d times in this string",a,c);
}
