//Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
void main(){
    int n1,n2,min=1;
    printf("Enter two no. : ");
    scanf("%d%d",&n1,&n2);
    min = n1==n2?n1:n1!=2*n2?n2!=2*n1?n1<n2?n1/2:n2/2:n1:n2;
    while(min>1){
        if(n1%min==0 && n2%min==0)break;
        min--;
    }
    if (min==1)printf("Co-prime");
    else printf("not co-prime.");
}