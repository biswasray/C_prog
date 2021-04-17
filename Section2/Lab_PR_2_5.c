/*
Rewrite the program mentioned in Experiment 2.2. However, rename the data types
‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
typedef float Decimal;
typedef int Integer;
void main() {
    Decimal p,r,i;
    Integer t;
    printf("Enter principal amount :");
    scanf("%f",&p);
    printf("Enter rate of interest in percent :");
    scanf("%f",&r);
    printf("Enter time as years :");
    scanf("%d",&t);
    i=(p*t*r)/100;
    printf("Simple interest is equal to %f\n",i);
    i=p*powf((1+r/100),t)-p;
    printf("Compound interest is equal to %f\n",i);
    getch();
}
