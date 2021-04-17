/*
A student is represented by the following attributes:
  Roll number (int)
  Name (string)
  Mark in subject 1 (float)
  Mark in subject 2 (float)
  Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each
student and average mark of all students.
*/
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[100];
    int roll;
    float sub1,sub2,sub3;
};
int main()
{
    int i,total=3;
    float sum,avg=0.0;
    struct student s[50];

    for(i=0;i<total;i++)
    {
        printf("\nEnter No %d Student Name\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter Roll No\n");
        scanf("%d",&s[i].roll);
        printf("Enter All 3 Subject Marks\n");
        scanf("%f%f%f",&s[i].sub1,&s[i].sub2,&s[i].sub3);
    }
    printf("\nName\t\t Roll\t\t Total mark\n",i,sum);
    for(i=0;i<total;i++)
    {
        sum=s[i].sub1+s[i].sub2+s[i].sub3;
        printf("%s\t\t %d\t\t %0.0f\n",s[i].name,s[i].roll,sum);
    }
    for(i=0;i<total;i++)
    {
        avg=avg+s[i].sub1+s[i].sub2+s[i].sub3;
    }
    printf("Total Average For All Student=%0.2f",avg/total);
}
