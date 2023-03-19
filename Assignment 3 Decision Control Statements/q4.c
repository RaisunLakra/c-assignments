//Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
void main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    if(num&1) printf("Odd");
    else printf("Even");
}