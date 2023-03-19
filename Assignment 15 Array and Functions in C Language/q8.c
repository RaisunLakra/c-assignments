//. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void print_unique_elements(int* a,int size){
    for(int* i=a;i<a+size;i++){
        int c=0;
        for(int* j=a;j<a+size;j++){
            //if(i==j)continue;
            if(*i==*j){
                c++;
                if(c==2)break;
            }
        }
        if(c==1)printf("%d ",*a);
    }
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter size of array. : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements. : ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    print_unique_elements(&a,size);
    return 0;
}
