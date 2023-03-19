//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float si(int p,int r,int t){
    return p*r*t/100;
}
int main(int argc, char const *argv[])
{
    int p,r,t;
    printf("Enter principal,rate and time. : ");
    scanf("%d%d%d",&p,&r,&t);
    printf("simple interest = %.2f.",si(p,t,r));
    return 0;
}