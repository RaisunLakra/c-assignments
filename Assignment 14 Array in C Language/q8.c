//Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
void sort_array(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array using space : ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort_array(a,n);
    printf("sorted array : ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");
    printf("second smallest element = %d",a[1]);
    return 0;
}
