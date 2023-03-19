// Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter year :");
    scanf("%d",&year);
    if(year%400==0)printf("leap year.");
    else if(year%100==0)printf("not a leap year.");
    else if (year%4==0)printf("leap year");
    else printf("not a leap year.");
}
