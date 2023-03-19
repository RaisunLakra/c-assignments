//Write a program in C to find the square of any number using the function.
#include<stdio.h>
int sq(int n){
    return n*n;
}
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("square of %d = %d",n,sq(n));
}