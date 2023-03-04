#include<stdio.h>
int main()
{
    float otpay;
    int hour,i=1;
    while(i<=10)
    {
      printf("Enter no of hours work:");
      scanf("%d",&hour);
      if(hour>=40)
       otpay=(hour-40)*12;
      else 
        otpay=0;
     printf("Overtime pay is %f",otpay);
     i++;
    }
    return 0;
} 