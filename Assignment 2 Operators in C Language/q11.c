//Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
#include<stdio.h>
void main(){
    int num,n;
    printf("Enter a no : ");
    scanf("%d",&num);
    printf("Enter a digit : ");
    scanf("%d",&n);
    num = num*10 + n;
    printf("new no = %d",num);
}