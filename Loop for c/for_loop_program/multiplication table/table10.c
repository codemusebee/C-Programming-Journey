#include<stdio.h>
int main()
{
    int i,n,m ;
    int table;

    printf("Enter the starting table number: ");
    scanf("%d", &n);
    printf("Enter the ending table number: ");
    scanf("%d", &m);

    for(int table = n; table <= m; table++)
{
    for(int i = 1; i <= 10; i++)
    {
        if((table * i) % 3 == 0)
        {
            printf("%d * %d = %d\n", table, i, table * i);
        }
    }
}

return 0;
}