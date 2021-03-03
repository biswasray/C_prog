/*
Write a program to input ‘n’ numbers and sort them in descending order.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int n;
    printf("Enter how many numbers you want to insert : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        printf("Enter %d number : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nBefore sorting....\n");
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]<a[j]) {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nAfter sorting them in descending order....\n");
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    getch();
}
