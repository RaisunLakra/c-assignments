//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
void main(){
    int n1,n2;
    printf("Enter two np. ");
    scanf("%d%d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        int flag=0;
        if(i==0||i==1)flag=1;
        for(int j=2;j<=i/2;j++)
            if(i%j==0){
                flag=1;
                break;
            }
        if(flag==0)printf("%d ",i);
    }
}