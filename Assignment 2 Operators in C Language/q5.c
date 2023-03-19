//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter a three digit no. : ");
    scanf("%d",&num);
    //int k=num;
    //for(n=0;k/=10;n++);
    //printf("Enter digit : ");
    //scanf("%d",&n);
    sum=num%10;
    sum=sum+(num%100)/10;
    sum=sum+num/100;
    // for(int i=0;i<n;i++)
    //sum=sum+(num%(n*10))/10;
    printf("sum=%d",sum);
}