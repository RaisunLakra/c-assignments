// Program to Convert even number into its upper nearest odd number using
// Switch Statement.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int even;
    printf("Enter an even no. : ");
    scanf("%d",&even);
    int k=even%2?0:1;
    switch (k)
    {
        case 0:break;
        case 1:
            even++;
            break;
    }
    printf("%d",even);
    return 0;
}
