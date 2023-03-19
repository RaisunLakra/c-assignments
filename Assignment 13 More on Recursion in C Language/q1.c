//Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int fsum(int n){
    if(n==1)return 1;
    return fsum(n-1)+n;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("%d",fsum(n));
    return 0;
}
