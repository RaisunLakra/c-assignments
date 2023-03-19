//1. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include<stdio.h>
void main(){
    int marks,total=0;
    printf("Enter marks of all subjects.");
    for(int i=0;i<5;i++){
        scanf("%d",&marks);
        if(marks<33){
            printf("Fail");
            break;
        }
        total=total+marks;
    }
    printf("total marks = %d\npercentage = %0.2f",total,(float)total/5);
}