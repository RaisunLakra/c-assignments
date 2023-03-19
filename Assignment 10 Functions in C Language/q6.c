//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fac(int n){
    int m=1,k=n;
    while (k)
    {
        m*=k--;
    }
    return m;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}