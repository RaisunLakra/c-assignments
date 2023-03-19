//Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
void main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    if(num^1==1) printf("Even");
    else printf("Odd");
    //not working check
}