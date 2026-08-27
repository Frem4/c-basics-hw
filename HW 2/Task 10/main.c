#include <stdio.h>

void flood_island(int matrix[10][10], int M, int N, int a, int b)
{
    if (a < 0 || a >= M || b < 0 || b >= N || matrix[a][b] == 0)
    {
        return;
    }

    matrix[a][b] = 0;

    flood_island(matrix, M, N, a - 1, b);
    flood_island(matrix, M, N, a + 1, b);
    flood_island(matrix, M, N, a, b - 1);
    flood_island(matrix, M, N, a, b + 1);
}

int main()
{
    int M = 10, N = 10;
    int counter = 0;

    int matrix[10][10] = {
        {1, 1, 0, 0, 0, 1, 1, 0, 0, 0},
        {1, 1, 0, 0, 0, 0, 1, 0, 1, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 1, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 1, 1, 1, 0},
        {1, 1, 0, 1, 1, 0, 1, 1, 1, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
        {1, 1, 1, 0, 0, 0, 1, 1, 0, 1},
        {1, 1, 1, 0, 0, 0, 0, 0, 0, 1}
    };

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]); 
        }
        printf("\n");
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(matrix[i][j] == 1)
            {
                counter++;
                flood_island(matrix, M, N, i, j);
            }
        }
    }

    printf("\nNumber of islands is %d. \n", counter);

    return 0;
}
