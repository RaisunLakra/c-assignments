//Write a recursive function to print first N even natural numbers
#include<stdio.h>
void even(int n){
    if(n>1)even(n-1);
    printf("%d ",2*n);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    even(n);
    return 0;
}
