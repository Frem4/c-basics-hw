#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int a, b = 0;
    int max = 1000;

    printf("Enter number of rows: \n");
    scanf(" %d", &a);
    printf("Enter number of columns: \n");
    scanf(" %d", &b);

    int **arr = malloc(b * sizeof(int *));

    for(int i = 0; i<b; i++)
    {
        arr[i] = malloc(a * sizeof(int *));
    }

    for(int i = 0; i<b; i++)
    {
        for(int j = 0; j<a; j++)
        {
            arr[i][j] = rand() % (max+1);
        }
    }

    for(int i = 0; i<b; i++)
    {
        for(int j = 0; j<a; j++)
        {
            printf(" %3d", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i<b; i++)
    {
        free(arr[i]);
    }

    free(arr);
    return 0;
}