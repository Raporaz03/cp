#include<stdio.h>
int power(int a,int b);
int main()
{
 int a,b,pow;
 printf("Enter two numbers");
 scanf("%d%d",&a,&b);
 pow=power(a,b);
 printf("Solution is %d",pow);
 return 0;
}
int power(int a ,int b)
{
    int i,ans=1;
    for(i=1;i<=b;i++)
    {
         
        ans=ans*a;
    }
    return(ans);
}