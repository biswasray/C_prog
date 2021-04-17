/*
Write a program that finds the sum of diagonal elements of a square matrix.
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
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i][i];
    printf("Sum of diagonal elements %d\n",sum);
}
