// Write a program to print the first N even natural numbers
#include<stdio.h>
int main(void){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=0;i<2*n;i+=2)printf("%d ",i+2);
}