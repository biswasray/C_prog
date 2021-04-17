/*
Write a program using pointers to input a 4X5 matrix and then display it.
*/
#include<stdio.h>
void main() {
    int a[4][5],*p;
    p=a;
    printf("Enter data in 4x5 matrix :\n");
    for(int i=0;i<4;i++)
        for(int j=0;j<5;j++)
            scanf("%d",(p+i*5)+j);
    printf("The matrix is :\n");
    for(int i=0;i<4;i++) {
        for(int j=0;j<5;j++) {
            printf("%d\t",*((p+i*5)+j));
        }
        printf("\n");
    }
}
