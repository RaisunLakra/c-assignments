//Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sum_of_even_N(int n){
    if(n==1)return 2;
    return 2*n+sum_of_even_N(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("%d",sum_of_even_N(n));
    return 0;
}
