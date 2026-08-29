#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i = 0, j = 0;

    printf("Enter your text: \n");
    fgets(str, sizeof(str), stdin);

    if(str[i] == ' ')
    {
        i++;
    }

    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] != ' ')
        {
            str[j++] = str[i];
        } else if(j > 0 && str[j-1] != ' ')
        {
            str[j++] = ' ';
        }
        
        i++;
    }

    if (j>0 && str[j-1] == ' ') {
        j--;
    }

    str[j] = '\0';
    
    printf("%s", str);

    return 0;
}