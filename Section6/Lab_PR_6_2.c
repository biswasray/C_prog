/*
Write programs to print the following structure:
4321234
 32123
  212
   1

*/
#include<stdio.h>
#include<conio.h>
void main() {
    for(int i=0;i<4;i++) {
        for(int j=0;j<i;j++)
            printf(" ");
        for(int k=4-i;k>0;k--)
            printf("%d",k);
        for(int l=2;l<=4-i;l++)
            printf("%d",l);
        printf("\n");
    }
    getch();
}
