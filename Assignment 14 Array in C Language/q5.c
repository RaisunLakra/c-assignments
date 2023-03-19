//Write a program to find the smallest number stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    int smallest_num;
    for(int i=0;i<10;i++){
        printf("Enter no %d : ",i);
        scanf("%d",&a[i]);
    }
    smallest_num=a[0];
    for(int i=1;i<10;i++){
        if(a[i]<smallest_num)smallest_num=a[i];
    }
    printf("smallest no. = %d",smallest_num);
    return 0;
}
