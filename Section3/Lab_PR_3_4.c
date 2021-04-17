/*
Write a program to input a character and check whether it is a vowel or consonant using
conditional operator. [Hint: compare against the ASCII range.]
*/
#include<stdio.h>
#include<conio.h>
void main() {
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'?printf("%c is vowel",a):printf("%c is consonant",a);
    getch();
}
