#include <stdio.h>

#define STEP 8

int main()
{
    int input;

    printf("Enter your number: \n");
    scanf(" %d", &input);

    for(int i = 0; i<STEP; i++)
    {
        printf("%d ", input+i);
    }
}