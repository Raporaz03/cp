#include<stdio.h>
/*int main()
{
    int year;
    printf("ENter year:");
    scanf("%d",&year);
    if(year%400==0)
     {
        if(year%100==0)
          printf("Year is leap year.");
        else
          printf("Year is not leap year"); 
     }

     else{
        if(year%4==0)
         printf("Year is leap year");
        else 
         printf("Year is not leap year");
     }
     return 0;
}
*/


int main()
{
  int yr;
  printf("Enter year");
  scanf("%d",&yr);
  if((yr%400==0)&&(yr%100==0)||(yr%4==0))
   printf("Given year is leap year");
  else 
  printf("Given year is not leap year"); 
  return 0;
}