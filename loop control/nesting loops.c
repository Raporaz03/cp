#include<stdio.h>
void main()
{
    int r,c,sum;
    for(r=0;r<=3;r++)
     {
        for(c=0;c<=3;c++)
        {
            sum=r+c;
            printf("r=%d c=%d sum=%d",r,c,sum);
            printf("\n");
        }
        
     }
}
