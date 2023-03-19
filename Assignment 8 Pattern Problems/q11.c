/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=5;
    for(int i=0;i<n;i++){
        char ch=64;
        for(int j=0;j<2*n-1;j++){
            if(j>=n-i-1 && j<n)printf("%c",++ch);
            else if(j>=n-1 && j<=n+i-1)printf("%c",--ch);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
