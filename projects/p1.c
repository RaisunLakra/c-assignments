#include<stdio.h>
void main(){
    int i,num;
    printf("Enter an even no. : ");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        if(num%2)printf("WRONG!!!\nEnter again.");
        else {
            printf("YOU WIN");
            break;
        }
    }
    if(i==4)printf("you loose.");
}