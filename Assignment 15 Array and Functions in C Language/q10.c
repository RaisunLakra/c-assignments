//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void count_frequecy(int a[],int size){
    int new[size],j;
    for(int i=0;i<size;i++)
        for(j=0;j<i;j++)
            if(a[i]!=new[j])new[j]=a[i];
    printf("seperated elements = ");
    for(int i=0;i<j;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<j;i++){
        int sum=0;
        for(int k=0;k<size;k++)if(new[i]==a[k])sum++;
        printf("frequency of %d = %d\n",new[i],sum);
    }
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter size of array. : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter element of array. : ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    count_frequecy(a,size);
    return 0;
}