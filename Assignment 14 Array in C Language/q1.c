//Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    int sum=0;
    for(int i=1;i<=10;i++){
        printf("Enter number %d : ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum = %d",sum);
    return 0;
}
