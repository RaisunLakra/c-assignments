//Write a program to reverse a given number
#include<stdio.h>
void main(){
    int n,rev=0,r;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while (n)
    {
        r=n%10;
        rev = rev*10+r;
        n/=10;
    }
    printf("%d",rev);
}