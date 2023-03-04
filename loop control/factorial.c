#include<stdio.h>
int main()
{
    int num,i,fact;
    printf("Enter number ");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial value is %d",fact);
    return 0 ;
}