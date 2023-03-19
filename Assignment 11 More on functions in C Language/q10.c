//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fac(int);
int seriesSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++)sum+=fac(i)/i;
    return sum;
}
int fac(int n){
    int f=1;
    for(int i=2;i<=n;i++)f*=i;
    return f;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("sum = %d",seriesSum(n));
    return 0;
}
