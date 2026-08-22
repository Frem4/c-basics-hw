#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m = 0;
    char c = 0;

    printf("Enter first number: \n");
    scanf(" %d", &n);
    printf("Enter second number: \n");
    scanf(" %d", &m);
    printf("Enter symbol: \n");
    scanf(" %c", &c);

    char **matrix = (char **)malloc(n*sizeof(char *));
    for(int i =0; i<n; i++)
    {
        matrix[i] = (char *)malloc(m*sizeof(char));
    }

    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            matrix[i][j] = c;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}