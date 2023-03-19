//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
void main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c>=65 && c<=90) printf("upper case character.");
    if(c>='a' && c<='z') printf("lower case character");
}