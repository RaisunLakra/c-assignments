//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
void main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    num=num%10*100+num/10;
    printf("%d",num);
}