//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void even_rev(int n){
    printf("%d ",2*n);
    if(n>1)even_rev(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    even_rev(n);
    return 0;
}
