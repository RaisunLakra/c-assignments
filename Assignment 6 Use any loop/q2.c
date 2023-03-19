//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
void main(){
    int n,s=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while (n)
    {
        s+=2*n;
        n--;
    }
    printf("%d",s);
}