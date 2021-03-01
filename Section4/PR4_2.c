/*
Write a program to read the string “WORDPROCESSING” form the terminal and display
the same in the following formats:
a) WORD PROCESSING
b) WORD
PROCESSING
c) W P
d) W. P.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    puts("Enter the string \"WORDPROCESSING\" : ");
    char s[15];
    gets(s);
    putchar('\n');
    for(int i=0;s[i]!='\0';i++) {
        if(i==4)
            putchar(' ');
        putchar(s[i]);
    }
    putchar('\n');
    for(int i=0;s[i]!='\0';i++) {
        if(i==0||i==4)
            putchar('\n');
        putchar(s[i]);
    }
    printf("\n\n");
    for(int i=0;s[i]!='\0';i++) {
        if(i==0||i==4)
            printf("%-2c",s[i]);
    }
    printf("\n\n");
    for(int i=0;s[i]!='\0';i++) {
        if(i==0||i==4)
            printf("%c. ",s[i]);
    }
    putchar('\n');
    //getch();
}
