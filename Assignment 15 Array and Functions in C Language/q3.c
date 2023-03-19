//Write a function to sort an array of any size. (TSRS)
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
        for(int i=0;i<n;i++)printf("%d ",a[i]);
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sort_array(a,n);
    printf("sorted array : ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}
