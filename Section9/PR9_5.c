/*
Write a program which reads a string and prints it in alphabetical order. For example, the
word WELCOME should be displayed as CEELMOW
*/
#include<stdio.h>
void main()  {
    char string[50];
    printf("Enter a string : ");
    gets(string);
    for(int i=0;string[i]!='\0';i++) {
        for(int j=i+1;string[j]!='\0';j++) {
            if(string[i]>string[j]) {
                char t=string[i];
                string[i]=string[j];
                string[j]=t;
            }
        }
    }
    printf("After alphabetical order the string become : %s",string);
}
