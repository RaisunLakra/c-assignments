//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price. : ");
    scanf("%d",&cp);
    printf("Enter selling price. : ");
    scanf("%d",&sp);
    /*if (sp>cp) printf("Profit percentage = %f",(float)(sp-cp)/cp*100);
    else if(sp<cp) printf("loss percentage = %f",(float)(cp-sp)/cp*100);
    else printf("neither profit nor loss.");*/
    float pl=(float)(sp-cp)/cp*100;
    if(pl < 0)printf("loss percentage = %0.3f",pl);
    else printf("profit percentage = %0.3f",pl);
    return 0;
}