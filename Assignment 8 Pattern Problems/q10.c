/*
1234321
123 321
12   21
1     1
*/
#include<stdio.h>
void main(){
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++){
            if(j>=1 && j<=n-i+1)printf("%d",j);
            else if(j>=n+i-1)printf("%d",2*n-j);
            else printf(" ");
        }
        printf("\n");
    }
}