/*
*********
 *     *
  *   *
   * *
    *
*/
#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=2*n-1;i++)printf("*");
    printf("\n");
    for(int i=2;i<=n;i++){
        for(int j=1;j<=2*n-1;j++)
            if(j==i || j==2*n-i)printf("*");
            else printf(" ");
        printf("\n");
    }
}