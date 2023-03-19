//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
void main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    if(num>99 && num<1000) printf("Three digit no.");
    else printf("Not a three digit no.");
}