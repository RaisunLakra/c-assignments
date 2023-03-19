//C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter a,b and c of quadratic equation ax2+bx+c=0. : ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)printf("imaginary roots.");
    else if(d==0){
        r1=-b/(float)(2*a);
        printf("root = %.2f",r1);
    }
    else {
        r1=(-b+sqrt(d))/(float)(2*a);
        r2=(-b-sqrt(d))/(float)(2*a);
        printf("root1 = %.2f\nroot2 = %.2d",r1,r2);
    }
    return 0;
}
