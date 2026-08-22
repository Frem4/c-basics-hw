#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("Enter maximum value in matrix: \n");
    scanf(" %d", &n);

    int size = 2*n-1;

    int **matrix = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) 
    {
        matrix[i] = (int *)malloc(size * sizeof(int));
    }

    for(int i=0; i<size; i++)
    {
        for(int j =0; j<size; j++)
        {
            for(int k=0; k<size; k++)
            {
                matrix[i][j]=n;
            }
        }
        n--;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}