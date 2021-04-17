/*
Write a program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise).
*/
#include<stdio.h>
#include<conio.h>
void main() {
    float a;
    printf("Enter the price of item in Rupees :");
    scanf("%f",&a);
    printf("%d paise\n",(int)(a*100));
    getch();
}