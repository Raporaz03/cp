#include<stdio.h> 
int fact(int x);

int main()
{
    int num,factorial;
    printf("Enter number ");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial is %d",factorial);
    return 0;
}
int fact(int x)
{
    int i;
    int ans=1;
    for(i=1;i<=x;i++)
     ans=ans*i;
    return (ans) ;
}