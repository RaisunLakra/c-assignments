/*
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>=i&&j<=2*n-i)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}