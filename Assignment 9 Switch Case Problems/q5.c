/*
Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int var;
    printf("Enter a no. between 1 to 3. :");
    scanf("%d",&var);
    switch (var)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}
