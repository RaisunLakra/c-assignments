//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,count=0;
    char str[]="my name is Raisun Lakra";
    char c='a';
    for(i=0;str[i];i++)if(str[i]==c)count++;
    printf("%d",count);
    return 0;
}
