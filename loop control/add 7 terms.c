// series n/n!

#include<stdio.h>
int main()
{
    int i=1,j;
    float fact,sum;
    for(i;i<8;i++)
    {
        fact=1.0;
        for(j=1;j<=i;j++)
        fact=fact*i;
        sum=sum+i/fact;
    
      printf("Sum is %f",sum) ;
      return 0;  
    }
}