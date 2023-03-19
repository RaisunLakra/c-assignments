//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int n){
    if(n>1)odd(n-1);
    printf("%d ",2*n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    odd(n);
    return 0;
}
