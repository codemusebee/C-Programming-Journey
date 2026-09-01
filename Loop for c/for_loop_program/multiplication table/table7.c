#include<stdio.h>
int main()
{
    int i ;
    for(int table = 3; table <= 5; table++)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", table, i, table * i);
    }
}
return 0;
}