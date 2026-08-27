#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 500

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
            array[i][j] = rand() % max;
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

int **add_arrays(int **array_1, int **array_2, int *size)
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
            array[i][j] = array_1[i][j] + array_2[i][j];
        }
    }
    return array;
}

int main()
{
    srand(time(NULL));

    int size = 0;

    printf("Enter size of an array: \n");
    scanf(" %d", &size);

    int **arr_1 = generate_array(&size);
    int **arr_2 = generate_array(&size);
    int **arr_3 = add_arrays(arr_1, arr_2, &size);

    printf("Your first array: \n");
    print_array(arr_1, size);
    printf("Your second array: \n");
    print_array(arr_2, size);
    printf("Result: \n");
    print_array(arr_3, size);

    free_array(arr_1, size);
    free_array(arr_2, size);
    free_array(arr_3, size);

}
