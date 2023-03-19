// Write a program to print a table of N
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)printf("%d  x %d = %2d\n",n,i,n*i);
}