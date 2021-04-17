/*
Write a program to find out the HCF and LCM of two numbers.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int a,b,hcf,lcm;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a&&i<=b;i++) {
        if(a%i==0&&b%i==0)
            hcf=i;
    }
    lcm=(a*b)/hcf;
    printf("\nHCF of %d and %d is %d",a,b,hcf);
    printf("\nLCM of %d and %d is %d",a,b,lcm);
    getch();
}
