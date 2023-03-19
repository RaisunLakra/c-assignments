//Write a program to count vowels in a given string
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,count=0;
    char str[]="Raisun Lakra";
    char v[]="aeiouAEIOU";
    for(i=0;v[i];i++)   
        for(j=0;str[j];j++)
            if(v[i]==str[j])
            {
                count++;
                break;
            }
    printf("%d",count);
    return 0;
}
