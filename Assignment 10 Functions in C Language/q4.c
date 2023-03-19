//Write a function to print first N natural numbers (TSRN)
void n_natural_no(int n){
    for(int i=1;i<=n; i++)printf("%d ",i);
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    n_natural_no(n);
    return 0;
}
