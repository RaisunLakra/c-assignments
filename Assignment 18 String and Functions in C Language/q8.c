// Write a function to count words in a given string.

#include<stdio.h>

int count_word(char* str) {
    int count = 0;
    while(*str){
        if(*str == ' ' || *str == '\t' || *str == '\n')count++;
        str++;
    }
    return count + 1;
}

int main() {
    int n;
    int num;
    printf("Enter a no. : ");
    scanf("%d",&n);
    char str[n];
    printf("Enter a sring: ");
    scanf(" %[^\n]", str);
    num = count_word(str);
    printf("Total no of words: %d", num);
}