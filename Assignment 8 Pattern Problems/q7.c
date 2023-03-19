/*
**********
****  ****
***    ***
**      **
*        *
*/
#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
            if(j<=n+1-i || j>=n+i)printf("*");
            else printf(" ");
        printf("\n");
    }
}