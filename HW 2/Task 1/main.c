#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input1, input2 = 0;
    int n1 = 0, n2 = 1, next =0;

    printf("Enter first number: \n");
    scanf("%d", &input1);
    printf("Enter second number: \n");
    scanf("%d", &input2);

    if(input1>input2)
    {
        int temp = input2;
        input2 = input1;
        input1 = temp;
    }

    while(n1<=input2)
    {
        if(n1>=input1) 
        {
            printf(" %d", n1);
        }

        next = n1+n2;
        n1 = n2;
        n2 = next;
    }
    
    return 0;
}