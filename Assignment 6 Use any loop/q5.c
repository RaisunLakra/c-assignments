//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
void main(){
    int n,s=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while (n)
    {
        s+=n*n*n;
        n--;
    }
    printf("%d",s);
}