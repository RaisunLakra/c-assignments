//Write a recursive function to print first N odd natural numbers in reverse order
void odd_rev(int n){
    printf("%d ",2*n-1);
    if(n>1)odd_rev(n-1);
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");scanf("%d",&n);
    odd_rev(n);
    return 0;
}
