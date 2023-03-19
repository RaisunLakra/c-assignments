/*
ABCDCBA
 ABCBA
  ABA
   A
*/
#include<stdio.h>
void main(){
    int n=4;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<2*n-1;j++){
            if(j>=i && j<n-1) printf("%c",ch++);
            else if(j>=n-1 && j<=2*(n-1)-i)printf("%c",ch--);
            else printf(" ");
        }
        printf("\n");
    }
}