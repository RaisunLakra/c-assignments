//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int month;
    printf("Enter month no. : ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("31");
        break;
    case 2:
        printf("28/29");
        break;
    case 3:
        printf("31");
        break;
    case 4:
        printf("30");
        break;
    case 5:
        printf("31");
        break;
    case 6:
        printf("30");
        break;
    case 7:
        printf("31");
        break;
    case 8:
        printf("31");
        break;
    case 9:
        printf("30");
        break;
    case 10:
        printf("31");
        break;
    case 11:
        printf("30");
        break;
    case 12:
        printf("31");
        break;
    default:
        printf("Invalid month no.");
        break;
    }
    return 0;
}
