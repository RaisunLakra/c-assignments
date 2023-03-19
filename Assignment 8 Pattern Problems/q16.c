/*
    *
   * *
  *   *
 *     *
*********
*/
#include<stdio.h>
void main(){
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==n-i || j==n+i)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<2*n-1;i++)printf("*");
}