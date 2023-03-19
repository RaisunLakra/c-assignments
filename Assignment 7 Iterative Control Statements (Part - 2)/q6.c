//Write a program to print all Prime numbers under 100
#include<stdio.h>
void main(){
    int i,j;
    for(i=2;i<100;i++){
        int flag=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){flag=1;break;}
        }
        if(flag==0)printf("%d ",i);
    }
}