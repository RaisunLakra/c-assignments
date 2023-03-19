//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sum_of_odd_N(int n){
    if(n==1)return 1;
    return 2*n-1 + sum_of_odd_N(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. ; ");
    scanf("%d",&n);
    printf("%d",sum_of_odd_N(n));
    return 0;
}
