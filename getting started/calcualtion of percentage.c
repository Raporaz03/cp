#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("Enters marks ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per = (m1+m2+m3+m4+m5)/5;
    printf("Percentage is %f",per);
    return 0;
    
    
}