//Write a program to find next Prime number of a given number
#include<stdio.h>
void main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while (++n)
    {
        int flag=0;
        if(n==0||n==1)flag==1;
        else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d",n);
            break;
        }
        }
    }
    
}