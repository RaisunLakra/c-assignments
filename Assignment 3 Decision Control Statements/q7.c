//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter a,b,c of the quadratic equation ax2 + bx + c = 0.\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)printf("real and equal roots.");
    else if(d>0) printf("real and distinct roots.");
    else printf("immaginary roots.");
}