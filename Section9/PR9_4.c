/*
Write a program that reads two strings and then compares them without using the
strcmp() function.
*/
#include<stdio.h>
#include<string.h>
void main() {
    char a[50],b[50];
    printf("Enter 1st string : ");
    gets(a);
    printf("Enter 2nd string : ");
    gets(b);
    int x=0,i;
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++) {
        if(x==0&&a[i]>b[i])
            x=1;
        else if(x==0&&a[i]<b[i])
            x=-1;
    }
    if(x==0&&a[i]>b[i])
        x=1;
    else if(x==0&&a[i]<b[i])
        x=-1;
    if(x>0)
        printf("\"%s\" is greater than \"%s\"",a,b);
    else if(x<0)
        printf("\"%s\" is less than \"%s\"",a,b);
    else
        printf("\"%s\" and \"%s\" are equal",a,b);
}
