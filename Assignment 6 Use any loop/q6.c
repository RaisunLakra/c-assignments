//Write a program to calculate factorial of a number
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int fac=1;
    for(int i=n;i;i--)fac*=i;
    printf("factorial = %d",fac);
}