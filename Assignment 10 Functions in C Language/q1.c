//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int r){
    return 2*3.14*r;
}
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter radius : ");
    scanf("%d",&r);
    printf("Area = %f",area(r));
    return 0;
}
