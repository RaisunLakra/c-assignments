// Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
#include<stdbool.h>

bool is_alphanumeric(char* str){
    bool alpha = false, numeric = false;
    while(*str){
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
            alpha = true;
        if(*str >= '0' && *str <= '9')
            numeric = true;
        str++;
    }
    return alpha & numeric;
}

int main() {
    char str[20];
    printf("Enter string: ");
    scanf("%[^\n]", str);

    if(is_alphanumeric(str))printf("given string is alphanumeric.");
    else printf("given string is not alphanumeric.");
    return 0;
}