#include<stdio.h>
int main()
{
     int n, i;
     
     printf(" Enter a number: ");
     scanf("%d", &n);

     printf("Multiplication table of %d is:\n", n);
     for( i=1;i<=10;i++)
     if ((n*i)%2!=0)
     {
        printf("%d*%d = %d(odd) \n", n,i, n*i);
     }
     else
     {
        printf("%d*%d = %d\n", n,i, n*i);
     }
     
     return 0;
}