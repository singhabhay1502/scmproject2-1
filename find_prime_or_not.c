#include<stdio.h>

int main()
{
int  n = 37;
int isPrime = 1 ;
for (int i = 2; i*i <n ; i++)


   if (n%i==0){
          isPrime=0;
   }
   if (isPrime){
    printf("the number%d is prime\n", n);

   }
   else{
    printf("the number %d is not prime\n", n);
   }



 return 0;
}