/*
1234321
 12321
  121
   1
*/
#include<stdio.h>
void main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int k=0;
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>=i && j<=n)printf("%d",++k);
            else if(j>=n && j<=2*n-i)printf("%d",--k);
            else printf(" ");
        }
        printf("\n");
    }
}