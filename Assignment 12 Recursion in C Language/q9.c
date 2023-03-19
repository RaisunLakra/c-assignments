//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void d2o(int n){
    if(n>7)d2o(n/8);
    printf("%d",n%8);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    d2o(n);
    return 0;
}
