#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **generate_array(int *size)
{
    int **array = malloc(*size * sizeof(int *));

    for(int i = 0; i<*size; i++)
    {
        array[i] = malloc(*size * sizeof(int));
    }

    for(int i = 0; i<*size; i++)
    {
        for(int j = 0; j<*size; j++)
        {
            array[i][j] = rand() % 1000;
        }
    }

    return array;
}

void print_array(int **array, int size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            printf(" %3d", array[i][j]);
        }
        printf("\n");
    }
}

void free_array(int **array, int size)
{
    for(int i = 0; i<size; i++)
    {
        free(array[i]);
    }

    free(array);
}

int main()
{
    srand(time(NULL));

    int size = 0;

    printf("Enter size of matrix: \n");
    scanf(" %d", &size);

    int **matrix = generate_array(&size);
    int max = matrix[0][0];
    int x = 0, y = 0;

    printf("Your array is: \n");
    print_array(matrix, size);

    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            if(matrix[i][j]>max)
            {
                max = matrix[i][j];
                x = i;
                y = j;
            }
        }
    }

    printf("Maximum value of your array is %3d. Its position is [%d][%d].", max, x, y);

    free_array(matrix, size);

    return 0;
}