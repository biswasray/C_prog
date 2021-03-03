/*
Write a program to read ‘n’ real numbers and then insert a new real number at a given
position (after insertion, the array size should increase by 1).

*/
#include<stdio.h>
#include<conio.h>
void main() {
    int n,p;
    printf("Enter how many real numbers you want to insert : ");
    scanf("%d",&n);
    double a[n+1],t;
    for(int i=0;i<n;i++) {
        printf("Enter %d real number : ",i+1);
        scanf("%lf",&a[i]);
    }
    printf("\nBefore inserting....\n");
    for(int i=0;i<n;i++)
        printf("%lf  ",a[i]);
    printf("\nEnter the number to insert : ");
    scanf("%lf",&t);
    printf("\nEnter the position to insert : ");
    scanf("%d",&p);
    for(int i=n-1;i>=p;i--)
        a[i+1]=a[i];
    a[p]=t;
    n++;
    printf("\nAfter inserting....\n");
    for(int i=0;i<n;i++)
        printf("%lf  ",a[i]);

}
