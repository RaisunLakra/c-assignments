/*
Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int unit;
    float amount;
    printf("Enter electric unit charge. >>");
    scanf("%d",&unit);
    switch (unit)
    {
    case 0 ... 50:
        amount=0.50*unit;
        break;
    case 51 ... 100:
        amount=0.75*unit;
        break;
    case 101 ... 250:
        amount=1.20*unit;
        break;
    default:
        amount=1.50*unit;
        break;
    }
    printf("Total Electric bill = %0.2f",amount+0.2*amount);
    return 0;
}
