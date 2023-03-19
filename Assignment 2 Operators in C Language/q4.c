//Write a program to swap values of two int variables without using a third variable.
//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
void main(){
    int n1,n2;
    printf("Enter two no. : ");
    scanf("%d%d",&n1,&n2);
    printf("n1=%d n2=%d\n",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("n1=%d n2=%d",n1,n2);
}