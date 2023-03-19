//Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
void main(){
    int n,s=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)s+=i*i;
    printf("sum = %d",s);
}