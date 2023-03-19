/*
  *****     *****
 *******   *******
********* *********
******MYSIRG*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/
#include<stdio.h>
void main(){
    int n=19;
    int m=3;
    int l=10;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)
            if((j>=n/4-i && j<=n/4+i+2) || (j>=3*n/4-i && j<=3*n/4+i+2) )printf("*");
            else printf(" ");
        printf("\n");
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=n;j++)
            {
                if(i==1 && j==n/2-2)printf("M");
                else if(i==1 && j==n/2-1)printf("Y");
                else if(i==1 && j==n/2)printf("S");
                else if(i==1 && j==n/2+1)printf("I");
                else if(i==1 && j==n/2+2)printf("R");
                else if(i==1 && j==n/2+3)printf("G");
                else if(j>=i && j<=n-i+1)printf("*");
                else printf(" ");
            }
        printf("\n");
    }
}