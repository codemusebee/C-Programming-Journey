#include<stdio.h>
int main ()
{
    int count=0;
    int sum=0;
     for(int i=1; i<=100; i++)
     {
        if(i%3==0)
        {
          count=count+1;
          sum=sum+i;
        }
     }
     printf("there are %d numbers which are divisible by 3\n",count);
     printf("Sum of these numbers is %d",sum);
     
     return 0;
}
       