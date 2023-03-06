#include<stdio.h>
int fact(int ans);
int main()
{
    int num,factorial;
    printf("Enter nummber");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial is %d",factorial);
    return 0;
}
int fact(int x)
{
    int f ;
    if(x==1)
    return(1);
    else
     f=x*fact(x-1);
    return(f);
}