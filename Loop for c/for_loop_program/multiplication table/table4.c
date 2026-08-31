#include<stdio.h>
int main()
{
     int n, i;
     int sum = 0;
     
     printf(" Enter a number: ");
     scanf("%d", &n);

     printf("Multiplication table of %d is:\n", n);
     for( i=1;i<=10;i++)
     {
        printf("%d\n", n*i);
        sum = sum + (n*i);
     }   
            printf(" sum of numbersis: %d\n", sum);
        
     return 0;
}