//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fac(int n){
    if(n==0||n==1)return 1;
    return n*fac(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}
