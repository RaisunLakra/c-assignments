//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
void main(){
    int n,s=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    // for(int i=1;i<=2*n-1;i+=2) s+=i; printf("sum = %d",s);
    for(n=2*n-1;n>0;n-=2) {
        printf("n = %d\n",n);
        s+=n;
    }
        printf("sum = %d",s);
}