/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char choice='e';
    int n1,n2,result;
    while (1)
    {
        printf("Enter a/b/c/d/e(any one of the following character to do the following options.)\na. Addition\nb. Substraction\nc. Multiplication\nd. Division\ne. Exit\n:");
        scanf(" : %c\n",&choice);
        switch (choice)
        {
        case 'a':
            printf("Enter two operand. : ");
            scanf("%d%d",&n1,&n2);
            result = n1+n2;
            printf(" : %d\n",result);
            break;
        case 'b':
            printf("Enter two operand. : ");
            scanf("%d%d",&n1,&n2);
            result=n1>n2?n1-n2:n2-n1;
            printf(" : %d\n",result);
            break;
        case 'c':
            printf("Enter two operand. : ");
            scanf("%d%d",&n1,&n2);
            result=n1*n2;
            printf(" : %d\n",result);
            break;
        case 'd':
            printf("Enter two operand. : ");
            scanf("%d%d",&n1,&n2);
            result=n1>n2?n1/n2:printf("Denominator must not be zero.");
            printf(" : %d\n",result);
            break;
        case 'e':
            exit(0);
            //break;
        default:
            printf("Invalid operaotor.\nRewrite your choide.");
            getch();
            exit(0);
            //clrscr();
            //break;
        }
    }
}