//Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    if(n<0) printf("Negetive no.");
    else if(n>0)printf("Positive no.");
    else printf("Zero");
}