//. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row,col;
    int i,j;

    printf("Enter no of row and columns of matrix. : ");
    scanf("%d%d",&row,&col);
    int a1[row][col];
    printf("Enter 1st array : ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter 2nd array : ");
    int a2[row][col],sum[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            scanf("%d",&a2[i][j]);
            sum[i][j]=a1[i][j]+a2[i][j];
        }
    printf("sum\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%2d ",sum[i][j]);
        printf("\n");
    }
    return 0;
}
