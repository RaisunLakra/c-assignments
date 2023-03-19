//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
void main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c>='a' && c<='z') printf("alphabate (lower case)");
    else if(c>='A'&&c<='Z') printf("alphabate (upper case)");
    else if(c>=0&&c<=9)printf("digit");
    else printf("specal character");
}