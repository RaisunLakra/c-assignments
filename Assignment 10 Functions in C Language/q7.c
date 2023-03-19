//Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int no_of_combination(int n,int r){
    int c=1;
    if(r<=n)for(int i=0;i<r;i++)c*=n--;
    else c=0;
    return c;
}
int main(int argc, char const *argv[])
{
    int n,r;
    printf("Enter no of item and no of selections : ");
    scanf("%d%d",&n,&r);
    printf("no. of combination = %d",no_of_combination(n,r));
    return 0;
}
//no. of comnination from n item taken r at a time = nCr