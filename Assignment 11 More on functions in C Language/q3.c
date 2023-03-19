//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int isprime(int n){
    if(n<2 || n==4)return 0;
    for(int i=2;i<sqrt(n);i++)if(!(n%i))return 0;
    return 1;
}
void main(){
    int n;
    printf("Enter a no : ");
    scanf("%d",&n);
    if(isprime(n))printf("Prime");
    else printf("not Prime");
}