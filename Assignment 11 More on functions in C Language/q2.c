//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int n1,int n2){
    int min = n1<n2?n1:n2;
    if(n1>0 && n2>0){
        if(n1%min==0 && n2%min==0)return min;
        for(int i=min/2;i>1;i--)if(!(n1%i) && !(n2/i))return i;
        return 1;
    }
    else printf("no must be greater than 0.");
    return 0;
}
void main(){
    int n1,n2;
    printf("Enter two no with space. : ");
    scanf("%d%d",&n1,&n2);
    printf("HCF = %d",hcf(n1,n2));
}