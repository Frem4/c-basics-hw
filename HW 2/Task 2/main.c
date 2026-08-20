#include <stdio.h>

int isPrime(int number, int divisor)
{
    if(divisor==1)
    {
        return 1;
    } else {
        if(number%divisor==0){
            return 0;
        } else {
            return isPrime(number, divisor-1);
        }
    }
}

int main() 
{
    int number;

    printf("Enter your number: \n");
    scanf("%d", &number);

    if(isPrime(number, number/2)==1) {
        printf("Your number is prime \n");
    } else {
        printf("Your number is NOT prime");
    }

    return 0;
}