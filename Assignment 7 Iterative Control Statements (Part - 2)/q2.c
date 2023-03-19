//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
void main(){
    int n,a=0,b=1,temp;
    printf("Enter no. : ");
    scanf("%d",&n);
    printf("%d",a);
    for(int i=1;i<n;i++){
        printf(" %d",b);
        temp=a+b;
        a=b;
        b=temp;
    }
}