#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char symbols[128];
    int count[128] = {0};
    int i = 0;
    int frequency = 0;
    char max;

    printf("Enter your text: \n");
    fgets(symbols, sizeof(symbols), stdin);

    symbols[strcspn(symbols, "\n")] = '\0';

    while (symbols[i]!='\0')
    {
        char index = symbols[i];
        count[index]++;
        i++;
    }

    for(int j = 0; j<128; j++)
    {
        if(count[j]>0)
        {
            if (j == ' ') {
                printf("Space: %d time(s)\n", count[j]);
            } else {
                printf("'%c': %d time(s)\n", j, count[j]);
            }

            if(count[j]>frequency)
            {
                max = j;
                frequency=count[j];
            }

        }
    }

    printf("The most frequent sumbol is %c and it appears %d times \n", max, frequency);
    
    return 0;
}