//Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
#include<stdio.h>
void main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    num=num-num%10;
    printf("%d",num);
}