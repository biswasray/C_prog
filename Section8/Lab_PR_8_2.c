/*
Write a program to input a square matrix (a matrix of order n × n) and then print its upper
triangular matrix.
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
    printf("Its upper triangular matrix.\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            printf("\t");
        }
        for(int j=i;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
