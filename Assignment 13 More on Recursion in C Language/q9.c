//Write a program in C to count the digits of a given number using recursion
#include<stdio.h>
int count_digit(int n){
    static int c;
    if(n%10 == 0)return 1;
    return c++ + count_digit(n/10);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("%d",count_digit(n));
    return 0;
}
