#include <stdio.h>

int main()
{
    int fact;

    printf("Factorials from 1 to 5:\n");

    for(int n = 1; n <= 5; n++)
    {
        fact = 1;

        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("%d! = %d\n", n, fact);
    }

    return 0;
}