// Write a program to print the first 10 even natural numbers in reverse order.
#include<stdio.h>
int main(void){
    int n = 10;
    for(int i=2*n;i;i-=2) printf("%d\n",i);
}