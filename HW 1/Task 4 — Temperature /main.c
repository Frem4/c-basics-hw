#include <stdio.h>

int main(){
    int temperature;

    printf("Enter temperature value in Celsius: \n");
    scanf("%d", &temperature);

    temperature=(temperature*9/5)+32;
    printf("Your temperature in Fahrenheit: %d", temperature);
}