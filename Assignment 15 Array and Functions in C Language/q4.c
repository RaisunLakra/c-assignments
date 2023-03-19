//Write a function to rotate an array by n position in d direction. The d is an indicative value for 
//left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, 
//then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
void rotate(int a[],int size,int n,int d){
    int temp;
    if(d==2)//rotate right
    for(int i=0;i<n;i++)
        for(int j=1;j<size;j++){
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
    else if(d==1)
    for(int i=0;i<n;i++)
        for(int j=size-1;j>=1;j--){
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
    else printf("Invalide input.");
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter no. of element in array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter element of array : ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    int n,d;
    printf("enter no. of times you want to rotate the array. : ");
    scanf("%d",&n);
    printf("Enter 1 to rotate right and 2 to rotate left. : ");
    scanf("%d",&d);
    printf("Array before rotation : ");
    for(int i=0;i<size;i++)printf("%d ",a[i]);
    printf("\n");
    rotate(a,size,n,d);//function calling
    printf("Array after rotation : ");
    for(int i=0;i<size;i++)printf("%d ",a[i]);
    return 0;
}
