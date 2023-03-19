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
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=n;j++){
            if(j==n-i || j==n)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)printf("*");
}