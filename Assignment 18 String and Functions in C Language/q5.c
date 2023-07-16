// Write a function to transform a string into lowercase

#include<stdio.h>

void toLower(char* str){
    while (*str){
        if(*str >= 'A' && *str <= 'Z')*str += 32;
        str++;
    }
}

int main() {
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]",str);

    toLower(str);

    printf("String converted to lowercase\n");
    printf("%s", str);
}