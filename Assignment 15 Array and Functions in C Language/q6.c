//Write a function in C to read n number of values in an array and display it in reverse
//order.
#include<stdio.h>
void reverseOfArray(int a[],int size){
    for(int i=size-1;i>=0;i--)printf("%d ",a[i]);
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter size of array. : ");
    scanf("%d",&size);
    printf("Enter array elements. : ");
    int a[size];
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    reverseOfArray(a,size);
    return 0;
}
