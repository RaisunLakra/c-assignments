// Write a function to calculate length of the string
#include<stdio.h>
int main(){
    int count=0;
    char str[1000];
    printf("Enter string : ");
    scanf("%s",&str);
    for(int i=0;str[i];i++){
        count++;
    }
    printf("Length of string = %d",count);
}