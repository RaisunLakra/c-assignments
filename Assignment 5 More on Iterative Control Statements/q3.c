//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=n;i;i--)printf("%d ",i);
}