//Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[]="Raisun";
    int i;
    for(i=0;name[i];i++);
    printf("%d",i);
    return 0;
}
