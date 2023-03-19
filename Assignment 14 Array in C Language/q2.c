//Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    float av;
    int sum=0;
    for(int i=1;i<=10;i++){
        printf("Enter no. %d : ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    av = sum/10.0;
    printf("average of ten nos. = %f",av);
    return 0;
}
