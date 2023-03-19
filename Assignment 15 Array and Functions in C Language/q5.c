//Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>
int f_occurence(int a[],int size){
    for(int i=0;i<size;i++)if(a[i]==a[i+1])return a[i];
    printf("no duplicate value.\n");
    return-1;
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter size of array. : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements. : ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    printf("First occurence of adjacent duplicate value : %d",f_occurence(a,size));
    return 0;
}