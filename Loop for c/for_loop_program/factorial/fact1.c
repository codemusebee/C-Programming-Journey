#include<stdio.h>
int main()
{
    int fact=1;
     printf("factorial of 5 is: ");
     for(int i=1;i<=5;i++)
     {
         fact=fact*i;
     }
     printf("%d", fact);
     return 0;
}