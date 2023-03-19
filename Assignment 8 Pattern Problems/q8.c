/*
   1
  121
 12321
1234321
*/
#include<stdio.h>
void main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++)
            if(j>=n+1-i && j<=n) printf("%d",i-n+j);
            else if(j<=n-1+i && j>=n) printf("%d",i-j+n);
            else printf(" ");
        printf("\n");
    }
}