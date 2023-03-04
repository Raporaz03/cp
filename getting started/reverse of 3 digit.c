#include<stdio.h>
int main()
{
    int num,d1,d2,d3,revnum;
    printf("Ennter digit");
    scanf("%d",&num);
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    revnum=100*d1+10*d2+d3;
    printf("Reversed number is %d",revnum);
    return 0;

}