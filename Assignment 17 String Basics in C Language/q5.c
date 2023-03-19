//Write a program to convert a given string into lowercase.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    char str[]="HELLO AND WELCOME!";
    for(i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<=90)str[i]+=32;
    }
    printf("%s",str);
    return 0;
}
