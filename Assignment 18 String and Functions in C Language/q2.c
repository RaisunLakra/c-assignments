#include <stdio.h>
#include <string.h>

void revString(char str[], int length) {
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    revString(str, length);
    printf("Reversed string: %s\n", str);
    return 0;
}