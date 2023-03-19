//Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    int temp;
    printf("Enter 10 no using space. : ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<9;i++){
        for(int j=1;j<=10;j++){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    return 0;
}
