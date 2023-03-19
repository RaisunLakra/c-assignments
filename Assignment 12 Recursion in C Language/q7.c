//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void sq(int n){
    if(n>1)sq(n-1);
    printf("%d ",n*n);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    sq(n);
    return 0;
}
