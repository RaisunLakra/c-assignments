#include <stdio.h>

// declaration
void toUpper(char*, int);

// function to make string uppercase
void toUpper(char* str, int n) {
    for (int i = 0; i < n; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
    }
}

int main() {
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter a string: ");
    scanf("%s", str);

    toUpper(str, n);

    printf("Transformed to upper case\n");
    printf("%s", str);
}
