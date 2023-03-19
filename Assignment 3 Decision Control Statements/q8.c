//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter year. : ");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0)printf("leap year.");
        else printf("non leap year.");
    }
    else
    {
        if(year%4==0) printf("Leep year.");
        else printf("Not a year.");
    }
    return 0;
}