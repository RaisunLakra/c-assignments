// Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#define MAX_LENGTH 200
int main(){
    char str[MAX_LENGTH];
    int count=0;
    printf("Enter string : ");
    scanf("%s",&str);
    for(int i=0;str[i];i++){
        count++;
    }
    printf("Length of string = %d",count);
}