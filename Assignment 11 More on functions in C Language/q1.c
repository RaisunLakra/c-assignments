//Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int lcm(int n1,int n2){
    int max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (!(max % n1) && !(max % n2)) {
            return max;
        }
        ++max;
    }
}
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("%d",lcm(n1,n2));
    return 0;
}