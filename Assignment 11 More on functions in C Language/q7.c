//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void faab(n){
    int a=0,b=1,c;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        c=a;
        a=b;
        b+=c;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    faab(n);
    return 0;
}
