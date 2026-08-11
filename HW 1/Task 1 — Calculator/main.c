#include <stdio.h>

int calculate();

int main()
{
    while(1){
        calculate();
    }
    return 0;
}

int calculate() {
    char symbol;
    float num;
    float sum = 0.0;
    int error = 0;

    printf("Enter number: \n");
    while (scanf(" %f", &sum) != 1) {
        printf("Enter a valid number: \n");
        while(getchar() != '\n');
    }

    while(1) {
        
        while (1) {
            printf("Enter symbol (+, -, *, /, =): \n");
            scanf(" %c", &symbol);

            if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '=') {
                break;
            }

            while (getchar() != '\n'); 
            printf("Wrong symbol\n");
        }

        if(symbol=='='){
            printf("%f", sum);
            break;
        }

        printf("Enter number: \n");
        while(scanf(" %f", &sum) != 1) {
            printf("Enter a valid number: \n");
            while(getchar() != '\n');
        } 
        
        switch(symbol) {
            case '+':
                sum+=num;
                break;
            case'-':
                sum-=num;
                break;
            case'*':
                sum*=num;
                break;
            case '/':
                if (num<0.0000001 && num>-0.0000001) {
                    printf("\nYou can't divide by zero\n");
                    error = 1;
                } else {
                    sum/=num;
                }
                break;
            }
            if(error==1) {
                break;
            }
        }
    return sum;
}