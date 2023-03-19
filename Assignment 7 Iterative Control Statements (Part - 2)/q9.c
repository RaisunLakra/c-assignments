//Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int k=n,n1=0;
    while(k){
        n1+=(k%10)*(k%10)*(k%10);
        k/=10;
    }
    if(n1==n)printf("Armstrong no. ");
    else printf("not an Armstrong no. ");
}