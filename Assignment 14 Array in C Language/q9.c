//Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
void main(){
    int n,temp;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element : ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    //reverse code
    printf("step in \n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        for(int k=0;k<n;k++)printf("%d ",a[k]);
        printf("\n");
    }
    printf("step out \n");
    //print array
    printf("Reverse : ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
}