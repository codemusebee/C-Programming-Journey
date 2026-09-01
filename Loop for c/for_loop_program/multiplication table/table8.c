#include<stdio.h>
int main()
{
    int i ;
    int table;
    
    for(int table = 1; table <= 10; table++)
{
    if (table%2==0)
    {
    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", table, i, table * i);
    }
    }
}
return 0;
}