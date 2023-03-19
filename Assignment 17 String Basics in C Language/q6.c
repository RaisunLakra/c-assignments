//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    //char reverse_str[100];
    printf("Enter a string : ");
    scanf("%s",&str);
    strrev(str);
    printf("%s",str);
    return 0;
}
