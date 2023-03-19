//Write a program to calculate HCF of two numbers.
#include<stdio.h>
void main(){
    int num1,num2,i;
    printf("Enter a no. : ");
    scanf("%d%d",&num1,&num2);
    int min = num1!=num2? (num1!= 2*num2 ? (num2!=2*num1 ? (num1>num2?num2/2:num1/2) : num1):num2):num1;//storing greatest no. that can divide atleast one of them by finding the smallest no and diiding it by 2
    printf("%d\n",min);
    for(i=min;i>1;i--)
    if(num1%i==0 && num2%i==0)break;
    printf("%d",i);
}