//Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
void shrt(int a[]){
    int temp;
    for(int i=0;i<9;i++){
        for(int j=1;j<10;j++){
            if(a[j]>a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int a[10];
    printf("Enter 10 nos using space. : ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    shrt(a);
    printf("Sorted array : ");
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    printf("second largest elemant : %d",a[1]);
    return 0;
}
