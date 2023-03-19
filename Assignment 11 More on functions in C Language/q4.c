//Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int isprime(int n){
    if(n<2 || n==4)return 0;
    for(int i=2;i<n/2;i++)if(n%i==0)return 0;
    return 1;
}
int nextPrime(int n){
    while(++n)if(isprime(n))return n;
}
void main(){
    int n;
    printf("Enter a no : ");
    scanf("%d",&n);
    printf("Next Prime no = %d",nextPrime(n));
}