#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    int value;

    printf("Enter your first coefficient: \n");
    scanf("%d", &a);
    printf("Enter your second coefficient: \n");
    scanf("%d", &b);
    printf("Enter your third coefficient: \n");
    scanf("%d", &c);

    value = pow(b, 2) - 4*a*c;
    printf("Your discriminant value is %d", value);

    return 0;
}
