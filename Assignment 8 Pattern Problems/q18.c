/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=13;//enter an odd no.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=n/2 && j>=n/2-i && j<=n/2+i)printf("*");
            else if(i>=n/2 && j>=(i+1)%((n+1)/2) && j<=n-1-(i+1)%((n+1)/2))printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    //int n=9;
    // for(int i=1;i<=n/2;i++){
    //     for(int j=1;j<=n;j++)
    //         if(j>=n/2+2-i && j<=n/2+i-1)printf("*");
    //         else printf(" ");
    //     printf("\n");
    // }
    // for(int i=1;i<=n/2+1;i++){
    //     for(int j=1;j<=n;j++)
    //         if(j>=i && j<=n-i+1)printf("*");
    //         else printf(" ");
    //     printf("\n");
    // }
    return 0;
}
