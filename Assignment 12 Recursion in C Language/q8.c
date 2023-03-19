//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void d2b(int n){
    if(n!=1)d2b(n/2);
    printf("%d",n%2);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    d2b(n);
    return 0;
}
