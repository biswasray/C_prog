/*
Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number.
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
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]<a[j]) {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nThe 2nd largest : %d",a[1]);
    printf("\nThe 2nd smallest : %d",a[n-2]);
    getch();
}
