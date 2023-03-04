#include<stdio.h>
int main()
{
    int km,m,cm;
    printf("Enter value in km:");
    scanf("%d",&km);
    m=km*1000;
    cm=m*100;
    printf("Value in m and cm is %d and %d ",m,cm);
    return 0;
}