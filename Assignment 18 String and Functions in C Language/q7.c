// Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool is_palindrome(char* str, int n){
    char rstr[n];
    for(int i = n-1; i >= 0; --i) {
        rstr[n-i-1] = str[i];
    }
    return strcmp(rstr, str);
}

int main() {
    int n;
    printf("Enter a no. : ");
    scanf("%n", &n);
    char str[n];
    printf("Enter a sring: ");
    scanf("%[^\n]", str);
    if(is_palindrome(str, n)) printf("Given string is palindrome.");
    else printf("Given string is not a palindrome.");
}