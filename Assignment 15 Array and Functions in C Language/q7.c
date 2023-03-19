//Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int noOfduplicateElements(int a[],int size){
    int count=0;
    for(int i=0;i<size;i++)
    {
        int c=0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j])c++;
        }
        if(c>1)count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter size of array. : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of array. : ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    printf("No. of duplicate elements = %d",noOfduplicateElements(a,size));
    return 0;
}
