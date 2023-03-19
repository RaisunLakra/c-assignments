//Write a recursive function to print first N natural numbers
#include<stdio.h>
void naturalNo(int n){
    if(n>1)naturalNo(n-1);
    printf("%d ",n);
}
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    naturalNo(n);
}