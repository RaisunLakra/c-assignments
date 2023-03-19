//Write a function in C to merge two arrays of the same size sorted in descending
//order.
#include<stdio.h>
void sort(int a[],int size){
    for(int i=0;i<size-2;i++){
        for(int j=0;j<size-1;j++){
            int t;
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int* reverseSorting(int a[],int b[],int size1,int size2){
    int c[size1+size2];
    sort(a,size1);
    sort(b,size2);
    for(int i=0;i<)
}
int main(int argc, char const *argv[])
{
    int size1,size2;
    printf("Enter size of two array using space. : ");
    scanf("%d%d",size1,size2);
    int a[size1],b[size2];
    printf("Enter elements of 1st array. : ");
    for(int i=0;i<size1;i++)scanf("%d",a[i]);
    printf("Enter elements of 2nd array. : ");
    for(int i=0;i<size2;i++)scanf("%d",a[i]);
    int *p=reverseSorting(a,b,size1,size2);
    printf("Array after sorting in decreasing order. : ");
    for(int i=0;i<size1+size2;i++)printf("%d ",*(p+i));
    return 0;
}
