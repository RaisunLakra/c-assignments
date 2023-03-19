//Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter two no. : ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2) printf("%d is greater than %d",num1,num2);
    else if (num1<num2) printf("%d is greater than %d",num2,num1);
    else printf("Equal");
}