#include<stdio.h>
int main()
{
    int fact=1;
    printf("factorial from number 1 to 5 is: ");
     for(int i=1;i<=5;i++)
     { 
        for(int i=1;i<=5;i++)

         {
         fact=fact*i;
        }

    }
     printf("%d", fact);
     return 0;
}