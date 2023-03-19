//Write a function to print first N odd natural numbers. (TSRN)
void odd(int n){
    for(int i=1;i<=n;i++)printf("%d ",2*i-1);
}
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    odd(n);
}