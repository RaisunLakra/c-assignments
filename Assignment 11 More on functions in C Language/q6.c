//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
int isprime(int n){
    if(n<2 || n==4)return 0;
    for (int i = 2; i < n/2; i++)if(n%i==0)return 0;
    return 1;
}
int primex(int n1,int n2){
    for(int i=n1+1;i<n2;i++)if(isprime(i))printf("%d ",i);
}
void main(){
    int n1,n2;
    printf("Enter two no using space. : ");
    scanf("%d%d",&n1,&n2);
    primex(n1,n2);
}