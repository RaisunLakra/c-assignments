//Write a program to print the first N odd natural numbers
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=0;i<2*n;i+=2)printf("%d ",i+1);
}