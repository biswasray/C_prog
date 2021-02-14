/* 
Write a program to enter the temperature in degree Celsius and display it in Fahrenheit
and vice-versa.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    float deg,far;
    printf("Enter the temperature in degree Celsius : ");
    scanf("%f",&deg);
    far=(9*deg)/5+32;
    printf("%f degree Celsius is equal to %f Fahrenheit\n",deg,far);
    printf("Enter the temperature in degree Fahrenheit : ");
    scanf("%f",&far);
    deg=((far-32)*5)/9;
    printf("%f degree Fahrenheit is equal to %f Celsius\n",far,deg);
    getch();
}