//. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
void main(){
    int s1,s2,s3;
    printf("Enter all three sides of the triangle. : ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2) printf("valid triangle");
    else printf("Invalid");
} 