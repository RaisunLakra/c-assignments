// Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int iseven(int n){
    return !(n%2);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    if(iseven(n)==0)printf("Odd");
    if(iseven(n)==1)printf("even");
    return 0;
}
