//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int s_num(int a[],int n){
    int small=a[n-1];
    for(int i=0;i<n;i++){
        if(small>a[i])small=a[i];
    }
    return small;
}
int main(int argc, char const *argv[])
{
    int n=0;
    printf("Enter no of elements of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Smallest element of array = %d",s_num(a,n));
    return 0;
}
