//Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int temp,a = 0,b=1;
    if(n==1)printf("%d",a);
    else if(n==2)printf("%d",b);
    else{
        for(int i = 3; i <= n; i++){
            temp=b+a;
            a=b;
            b=temp;
        }
        printf("%d",b);
    }
}