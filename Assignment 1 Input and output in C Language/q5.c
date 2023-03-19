//WAP to calculate the length of String using printf function.
#include<stdio.h>
//#include<string.h>
void main(){
    char s[100];int i;
    //scanf("%c",&s);
    //s=getch();
    gets(s);
    //printf("%d",strlen(s));
    for(i=0;s[i];i++);
    printf("%d",i);
}