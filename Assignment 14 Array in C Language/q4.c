//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],greatest_num=0;
    for(int i=1;i<=10;i++){
        printf("Enter no %d : ",i);
        scanf("%d",&a[i]);
        if(a[i]>greatest_num)greatest_num=a[i];
    }
    printf("greatest no. = %d",greatest_num);
    return 0;
}