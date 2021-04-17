/*
Write a program using pointers to read an array of integers and print its elements in
reverse order.
*/
#include<stdio.h>
void main() {
    int r,c;
    printf("Enter the row and column of matrix : ");
    scanf("%d%d",&r,&c);
    int a[r][c],*p;
    p=a;
    printf("Enter data in %dx%d matrix :\n",r,c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",(p+i*5)+j);
    printf("The matrix is :\n");
    for(int i=r-1;i>=0;i--) {
        for(int j=c-1;j>=0;j--) {
            printf("%d\t",*((p+i*5)+j));
        }
        printf("\n");
    }
}
