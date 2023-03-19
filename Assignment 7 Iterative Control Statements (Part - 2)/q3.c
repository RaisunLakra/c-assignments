//Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
void main(){
    int n,temp,a=0,b=1;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while(n>=b){
        temp=a+b;
        a=b;
        b=temp;
    }
    if(n==a||n==b) printf("Fabonacci no. ");
    else printf("not a Fabonacci no. ");
}