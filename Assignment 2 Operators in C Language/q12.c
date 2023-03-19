//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
void main(){
    float rs, usd;
    printf("Enter Indian rupees. : ");
    scanf("%f",&rs);
    usd = rs/76.23;
    printf("USD = %f",usd);
}