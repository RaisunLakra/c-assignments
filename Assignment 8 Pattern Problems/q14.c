/*
*
**
* *
*  *
*****
*/
#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)printf("*");
}