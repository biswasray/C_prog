/*
Write a program to input a square matrix (a matrix of order n × n) and check whether it is
symmetric or not (A matrix A = (a[i][j]) is symmetric if a[i][j] = a[j][i], for all i and j).
*/
#include<stdio.h>
void main() {
    int n;
    printf("Enter the row and column size of square matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter data to square matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int check=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
                check=0;
    if(check)
        printf("It is symmetric matrix");
    else
        printf("It is not symmetric matrix");
}
