//Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int check_digit(int num, int d){
    while (num)
    {
        if(num%10==d)return 1;
        num/=10;
    }
    return 0;
}
void main(){
    int d,num;
    while (1)
    {   
        printf("Enter number : ");
        scanf("%d",&num);
        printf("Enter digit : ");
        scanf("%d",&d);
        if(check_digit(num,d))printf("digit exist.\n");
        else printf("digit does not exist.\n");
    }
}