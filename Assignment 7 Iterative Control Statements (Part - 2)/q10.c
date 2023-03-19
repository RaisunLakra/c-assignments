//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
void main(){
    int n1=0,n2=1000;
    // printf("Enter two no. : ");
    // scanf("%d%d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        int k=i,n3=0;
        while (k)
        {
            n3+=(k%10)*(k%10)*(k%10);
            k/=10;
        }
        if(i==n3)printf("%d ",i);
    }
}