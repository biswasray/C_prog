/*
An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
an additional surcharge of 15% of total amount is charged.
Write a program to read the name of a consumer and the number of units consumed and print the charge
with his/her name.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    printf("Enter the name of consumer : ");
    char name[50];
    gets(name);
    printf("Enter the number of units consumed by consumer : ");
    float unit;
    float total;
    scanf("%f",&unit);
    if(unit>300)
        total=(200*0.80)+(100*1.30)+(unit-300)*2.00;
    else if(unit>200)
        total=(200*0.80)+(unit-200)*1.30;
    else
        total=unit*0.80;

    total+=100;
    if(total>=400)
        total+=total*0.15;
    printf("\nConsumer name : %s\n",name);
    printf("Total bill amount : %0.2f\n",total);
    getch();
}
