//Write a program to count digits in a given number
#include<stdio.h>
void main(){
    int n,i;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int k=n;
    for(i=1;k/=10;i++);printf("digit = %d",i);
}