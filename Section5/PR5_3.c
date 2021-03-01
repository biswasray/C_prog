/*
Admission to professional course is subject to the following conditions:
a) Marks in Mathematics >= 60
b) Marks in Physics >= 50
c) Marks in Chemistry >= 40
d) Total in all three subjects >= 200 (OR) Total in Mathematics and Physics >= 150

Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is
admitted else displays “Not Admitted”.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int m,p,c;
    printf("Enter Marks in Mathematics : ");
    scanf("%d",&m);
    printf("Enter Marks in Physics : ");
    scanf("%d",&p);
    printf("Enter Marks in Chemistry : ");
    scanf("%d",&c);
    if(m+p+c>=200) {
        if(m>=60&&p>=50&&c>=40)
            printf("\nAdmitted\n");
        else
            printf("\nNot Admitted\n");
    }
    else if(m+p>=150) {
        if(m>=60&&p>=50&&c>=40)
            printf("\nAdmitted\n");
        else
            printf("\nNot Admitted\n");
    }
    else {
        printf("\nNot Admitted\n");
    }
    getch();
}
