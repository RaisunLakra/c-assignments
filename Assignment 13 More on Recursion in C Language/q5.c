//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_of_digits(int n){
    if(n<10)return n;
    return n%10 + sum_of_digits(n/10);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("%d",sum_of_digits(n));
    return 0;
}
