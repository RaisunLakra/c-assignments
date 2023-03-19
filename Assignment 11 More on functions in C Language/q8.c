//Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
void p(int n){
    int i,j;
    for(i=0;i<n;i++){
        int num=1;
        int numereator=i;
        int denominator=1;
        for(j=1;j<=n;j++){
            if(j<n-i)printf(" ");  
        else {
            printf("%d ",num);
            num*=numereator;
            num/=denominator;
            numereator--;
            denominator++;
            }
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter length of triangle. : ");
    scanf("%d",&n);
    p(n);
    return 0;
}