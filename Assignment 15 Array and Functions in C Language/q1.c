//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int g_num(int a[],int n){
    int greatest=0;
    for(int i=0;i<n;i++)if(a[i]>greatest)greatest=a[i];
    return greatest;
}
int main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("greatest no = %d",g_num(a,n));
    return 0;
}