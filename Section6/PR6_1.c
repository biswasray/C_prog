/*
Write programs to print the following structure:
   *
  ***
 *****
*******

*/
#include<stdio.h>
#include<conio.h>
void main() {
    for(int i=0;i<4;i++) {
        for(int j=4-i;j>0;j--)
            printf(" ");
        for(int k=0;k<=2*i;k++)
            printf("*");
        printf("\n");
    }
}
