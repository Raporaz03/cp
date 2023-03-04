#include<stdio.h>
int main()
{
    char ms,sex;
    int age;
    printf("Enter age ,sex and martial status",&age,&sex,&ms);
    scanf("%d%c%c",&age,&sex,&ms);
    if((ms='M')||((ms='U')&&(sex='M')&&(age>=30))||((ms='U')&&(sex='F')&&(age>=25)))
     printf("Driver should be insured");
      else 
      printf("Driver should not be insured");
    return 0;
}