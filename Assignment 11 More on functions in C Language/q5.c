//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
int isprime(int j){
    if(j<2 || j==4)return 0;
    for(int i=2;i<j/2;i++)if(j%i==0)return 0;
    return 1;
}
void prime(int n){
    int num=0;
    int j=2;
    while(j){
        if(isprime(j)){printf("%d ",j);num++;}
        if(num==n)break;
        j++;
    }
}
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    prime(n);
}