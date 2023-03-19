//Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
void array_copy(int a[],int c[]){
    for(int i=0;a[i];i++)c[i]=a[i];
}
int main()
{
    int n;
    printf("Enter no of element in array : ");
    scanf("%d",&n);
    int a[n],c[n];
    printf("Enter array elements. : ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    array_copy(a,c);
    for(int i=0;i<n;i++)printf("%d ",c[i]);
    return 0;
}
