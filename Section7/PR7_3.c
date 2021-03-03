/*
Write a program to read ‘n’ characters and then delete the duplicate characters.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int n;
    printf("Enter how many characters you want to insert : ");
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++) {
        printf("\nEnter %d characters :",i+1);
        a[i]=getche();
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[i]==a[j]) {
                for(int k=i;k<n-1;k++) {
                    a[k]=a[k+1];
                }
                n--;
                i--;
            }
        }
    }
    printf("\nAfter delete the duplicate characters....\n");
    for(int i=0;i<n;i++)
        printf("%c  ",a[i]);
}
