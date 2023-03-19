//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
void main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    if(num%3 && num%2) printf("No. is not divisible by 3 and 2.");
    else printf("no. is divisible by 3 and 2.");
}