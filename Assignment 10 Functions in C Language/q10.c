//Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
int isprime(int i);
void prime_factor(int num){
    for(int i=2;i<=num;i++){
        if(isprime(i) && num%i==0){
            printf("%d ",i);
            num=num/i;
            i=1;
        }
    }
}
int isprime(int i){
   if(i<2 || i==0)return 0;
   for(int j=2;j<i/2;j++){
    if(i%j==0){return 0; break;}
   }
   return 1;
}
void main(){
    int num;
        printf("Enter a no. : ");
        scanf("%d",&num);
        prime_factor(num);
}