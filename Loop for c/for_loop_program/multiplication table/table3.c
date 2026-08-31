#include<stdio.h>
int main()
{
     int n, i, g;
     
     printf(" Enter a number: ");
     scanf("%d", &n);
     printf(" enter the Ending number of the table: ");
     scanf("%d", &g);

     printf("Multiplication table of %d is:\n", n);
     for( i=1;i<=g;i++)
     {
        printf("%d*%d = %d\n", n,i, n*i);
     }

     return 0;
}