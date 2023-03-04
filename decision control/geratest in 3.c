#include<stdio.h> 
int main()
{
    int a,b,c,great;
    printf("ENter three numners");
    scanf("%d%d%d",&a,&b,&c);
    great=a>b?(a>c?a:c):(b>c?b:c);
    printf("Greatest number is %d",great);
    }