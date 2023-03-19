//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i;
    char str[100],strc[100];
    printf("Enter a string. : ");
    scanf("%[^\n]%*c",str);
    for(i=0;str[i];i++)strc[i]=str[i];
    //strcpy(strc,str);
    printf("%s",strc);
    return 0;
}
