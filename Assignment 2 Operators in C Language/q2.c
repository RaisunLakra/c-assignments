//Write a program to print a given number without its last digit.
#include<stdio.h>
void main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    printf("%d",num/10);
}