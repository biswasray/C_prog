/*
Write a program that finds the sum of each row and sum of each column of a matrix.
*/
#include<stdio.h>
void main() {
    int r,c;
    printf("Enter the row size : ");
    scanf("%d",&r);
    printf("Enter the column size : ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter data to square matrix\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    printf("\n");
    for(int i=0;i<r;i++) {
        int sum=0;
        for(int j=0;j<c;j++) {
            sum+=a[i][j];
        }
        printf("Sum of %d row = %d\n",i+1,sum);
    }
    printf("\n");
    for(int i=0;i<c;i++) {
        int sum=0;
        for(int j=0;j<r;j++) {
            sum+=a[j][i];
        }
        printf("Sum of %d column = %d\n",i+1,sum);
    }
}
