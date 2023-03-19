//Write a program to swap values of two int variables
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter two no. : ");
    scanf("%d%d",&num1,&num2);
    printf("num1=%d num2=%d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1=%d num2=%d",num1,num2);
}