#include<stdio.h>
int main()
{
    float x,power;
    int i,y;
    printf("Enter two powers ");
    scanf("%f%d",&x,&y);
    power=i=1;
    while(i<=y)
    {
        power=power*x;
        i++;    }
    printf("Result is %f",power) ;
    return 0;   
}   