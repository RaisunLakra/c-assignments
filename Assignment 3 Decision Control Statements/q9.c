//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
void main(){
    int num1,num2,num3;
    printf("Enter three no. : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>=num2) 
        if(num1>=num3)printf("%d is greatest.",num1);
        else printf("%d is greatest.",num3);
    else
        if (num2>=num3)printf("%d is greatest.",num2);
        else printf("%d is greatest",num3);
}