#include <stdio.h>

int main()
{
    int input = 0;

    printf("Enter maximum value of an array: \n");
    scanf(" %d", &input);

    if(input == 1 || input == 0)
    {
        return 0;
    }

    int max = 2 * input - 1;
    int array[max][max];

    for(int i = 0; i<input; i++)
    {
        for (int j = 0 + i; j < max - i; j++) 
        {
            for (int k = 0 + i; k < max - i; k++) 
            {
                array[j][k] = input - i;
            }    
        }
    
    }

    for (int i = 0; i < max; i++) 
    {    
        for (int j = 0; j < max; j++) 
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}