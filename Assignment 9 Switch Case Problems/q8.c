//Program to convert a positive number into a negative number and negative
//number into a positive number using a switch statement.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    int k=num>0?1:0;
    switch (k)
    {
    case 0:
        num*=-1;
        break;
    case 1:
        num*=-1;
        break;
    default:
        break;
    }
    printf("changed no. = %d",num);
    return 0;
}
