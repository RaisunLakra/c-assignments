//. Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
void main(){
    int m;
    printf("Enter month no. : ");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)printf("day = 31");
    else if(m==2)printf("day = 28 or 29");
    else if (m==4||m==6||m==9||m==11)printf("day = 30");
    else printf("Invalide month no.");
}