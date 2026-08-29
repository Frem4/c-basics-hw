#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int sequence[100];
    int type = 0;
    int n = 0;

    printf("Enter number of elements (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid size \n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }

    printf("Select filter type. If you want from highest to lowest type 1, if you want from lowest to highest type 2. \n");
    scanf("%d", &type);

    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if (type == 1) 
            {
                if (sequence[j] < sequence[j + 1]) 
                {
                    swap(&sequence[j], &sequence[j + 1]);
                }
            } else 
            {
                if (sequence[j] > sequence[j + 1]) 
                {
                    swap(&sequence[j], &sequence[j + 1]);
                }
            }
        }
    }

    printf("Your sorted sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d", sequence[i]);
    }
    printf("\n");

    return 0;
}