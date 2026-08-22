#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, max;

    printf("Enter lowest number: \n");
    scanf(" %d", &min);
    printf("Enter highest number: \n");
    scanf(" %d", &max);

    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }

    for(int next_number = min; next_number<=max; next_number++)
    {
        printf("%d \n", next_number);
    }
}