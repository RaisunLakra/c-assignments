#include <stdio.h>
int main()
{
    int n,sum=0;
    while(1)
    {    
        printf("Enter a no. : ");
        scanf("%d",&n);
        sum+=n;
        if(n==0) break;
    }
    printf("sum = %d",sum);
    return 0;
}