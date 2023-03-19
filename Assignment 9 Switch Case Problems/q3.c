// Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
void main(){
    int day;
    printf("Enter day no. of a week. : \n1.monday \n...\n7.sunday \n");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tusday fasting");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday fasting");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Satursay holiday");
        break;
    case 7:
        printf("sunday holiday");
        break;
    default:
        printf("no. of choice must be greater than 1 and less than 7.");
        break;
    }
}