//Write a program to convert a given string into uppercase
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    char name[]="raisun lakra";
    for(i=0;name[i];i++)
        if(name[i]>=97 && name[i]<=122)name[i]-=32;
    printf("%s",name);
    return 0;
}
