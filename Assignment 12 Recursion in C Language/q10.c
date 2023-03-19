//Write a recursive function to print reverse of a given number
#include<stdio.h>
void rev(int n){
    printf("%d",n%10);
    if(n>9)rev(n/10);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    rev(n);
    return 0;
}
