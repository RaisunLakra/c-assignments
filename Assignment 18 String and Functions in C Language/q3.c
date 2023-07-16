// Write a function to compare two strings.
// functions of string.h
// strcat
// strcmp
// strcpy
// strlen
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str1[500],str2[500];
    printf("Enter 1st strings : ");
    scanf("%s",str1);
    printf("Enter 2nd string : ");
    scanf("%s",str2);
    if(strcmp(str1,str2))printf("strings are not equal.");
    else printf("strings are equal.");
    return 0;
}