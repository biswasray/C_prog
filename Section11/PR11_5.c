/*
Write a program using function to input a m x n matrix (of integers) and then find the
largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it
*/
#include <stdio.h>
#include <stdlib.h>
void ls(int r,int c,int a[r][c])
{
      int i,j,temp;
      int* elem=a;
    for(i=0;i<r*c;i++)
    {
        for(j=i+1;j<r*c;j++)
        {
            if(*(elem+i)>*(elem+j))
            {
                temp=*(elem+i);
                *(elem+i)=*(elem+j);
                *(elem+j)=temp;
            }
        }
    }

   printf("2nd Smallest No Is %d & 2nd Largest No is %d\n",a[0][1],a[r-1][c-2]);

}
int main()
{
   int r,c;
   printf("Enter Number Of Rows\n");
   scanf("%d",&r);
   printf("Enter Number of Column\n");
   scanf("%d",&c);
   int a[r][c],*p,i,j;
   printf("Enter Elements in array\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }

   ls(r,c,a);
}
