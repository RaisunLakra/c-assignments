//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    int even_sum=0,odd_sum=0;
    for(int i=1;i<=10;i++){
        printf("Enter no. %d : ",i);
        scanf("%d",&a[i]);
        if(a[i]%2)odd_sum+=a[i];
        else even_sum+=a[i];
    }
    printf("sum of even nos : %d\n",even_sum);
    printf("sum of odd no. : %d",odd_sum);
    return 0;
}
