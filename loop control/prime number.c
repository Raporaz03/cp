#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter value of number");
    scanf("%d",&num);
    i=2;
    while(i<num)
    {
        if(num%i==0)
        {printf("Number is not prime number");
        break;}
        i++;
    }
    if(i=num)
     printf("Prime number");

}