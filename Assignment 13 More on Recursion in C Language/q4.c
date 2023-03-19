//Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sum_of_sq_N(int n){
    if(n==1)return 1;
    return n*n + sum_of_sq_N(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("%d",sum_of_sq_N(n));
    return 0;
}
