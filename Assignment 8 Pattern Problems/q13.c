/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     CDBA
ABC       CBA
AB         BA
A           A
*/
#include<stdio.h>
void main(){
    int n=7;
    for(int i=0;i<n;i++){
        char ch=65;
        for(int j=0;j<2*n-1;j++){
            if(j<=n-1-i) printf("%c",ch++);
            // if(j<n-i) printf("%c",ch++);
            else if (j>=n-1+i) printf("%c",--ch);
            // else if (j>n-2+i) printf("%c",--ch);
            else printf(" ");
        }
        printf("\n");
    }
}