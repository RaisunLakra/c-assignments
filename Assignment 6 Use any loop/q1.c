//  Write a program to calculate sum of first N natural numbers
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int sum=0;
    while (n){
        sum+=n;
        n--;
    }
    printf("%d",sum);
}