//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void natural_rev(int n){
    printf("%d ",n);
    if(n>1)natural_rev(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    natural_rev(n);
    return 0;
}
