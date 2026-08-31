#include<stdio.h>
int main ()
{
    int count=0;
     for(int i=1; i<=100; i++)
     {
        if(i%5==0)
        {
          count=count+1;
        }
     }
     printf("there are %d numbers which are divisible by 5",count);
     
     return 0;
}