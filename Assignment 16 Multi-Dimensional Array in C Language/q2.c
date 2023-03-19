//. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a1[3][3],a2[3][3],p[3][3];
    int i,j,k;
    printf("Enter 1st array : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a1[i][j]);
    printf("Enter 2nd array : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a2[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                p[i][j]=a1[i][k]+a2[k][j];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)printf("%3d ",p[i][j]);
        printf("\n");
    }
    return 0;
}
