/*
Write a program that will read the value of x and evaluate the following function:

y = 1 for x>0
y = 0 for x=0
y = -1 for x<0

*/
#include<stdio.h>
#include<conio.h>
void main() {
    int x,y;
    printf("Enter value of x : ");
    scanf("%d",&x);
    if(x>0)
        y=1;
    else if(x<0)
        y=-1;
    else
        y=0;
    printf("y = %d\n",y);
    //getch();
}
