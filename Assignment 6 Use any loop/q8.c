//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
void main(){
    int n,i,flag=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    if(n==0||n==1)flag=1;
    for(i=2;i<=n/2;i++)//IN CASE OF n WE CAN USE sqrt(n)
        if(n%i==0){
            flag=1;
            break;
        }
    if(flag==0)printf("Prime");
    else printf("Not prime");
}