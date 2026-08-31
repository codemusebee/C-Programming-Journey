#include<stdio.h>
int main()
{
     int n, i;

     printf("Multiplication table of 1 :\n");
     for( i=1;i<=10;i++)
     {
        printf("%d*%d = %d\n", 1,i, 1*i);
     }


     printf("\n\nMultiplication table of 2 :\n");
     for( i=1;i<=10;i++)
     {
        printf("%d*%d = %d\n", 2,i, 2*i);
     }

        printf("\n\nMultiplication table of 3 :\n");
     for( i=1;i<=10;i++)
     {
        printf("%d*%d = %d\n", 3,i, 3*i);
     }

        printf("\n\nMultiplication table of 4 :\n");
     for( i=1;i<=10;i++)
     {
        printf("%d*%d = %d\n\n\n", 4,i, 4*i);
     }

        printf("Multiplication table of 5 :\n");
     for( i=1;i<=10;i++)
     {
        printf("%d*%d = %d\n", 5,i, 5*i);
     }

     return 0;
}