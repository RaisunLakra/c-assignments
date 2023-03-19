/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
    int flag=1;
    char choice;
    int a,b,c;
    while (flag)
    {
        printf("Enter length of sides of triangle. : ");
        scanf("%d%d%d",&a,&b,&c);
        printf("Enter a choice. :\na. Check whether a given set of three numbers are lengths of an\nisosceles triangle or not \nb. Check whether a given set of three numbers are lengths of sides of\na right angled triangle or not\nc. Check whether a given set of three numbers are equilateral triangle\nor not\nd. Exit\n>>");
        scanf("%c",&choice);
        switch (choice)
        {
        case 'c':
            a==b&&b==c?printf("equilateral triangle."):printf("not an equilateral triangle.");
            break;
        case 'b':
            a*a==b*b + c*c || b*b==a*a + c*c || c*c == b*b + a*a?printf("Right angle triangle."):printf("not a right angle triangle.");
            break;
        case 'a':
            (a==b&&a==c)||(b==a&&b==c)||(c==a&&c==b)?printf("Isoscelus triangle."):printf("not an isoscelous triangle.");
        case 'd':
            flag=0;
            break;
        default:
            break;
        }
    }
    
}