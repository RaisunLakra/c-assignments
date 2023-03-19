//Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
void main(){
    int n=10;
    for(int i=2*n-1;i>0;i-=2)printf("%d\n",i);
}