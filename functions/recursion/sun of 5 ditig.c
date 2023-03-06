#include<stdio.h>
int sum(int x);
int main()
{
    int a,fsum;
    printf("Enter number ");
    scanf("%d",&a);
    fsum=sum(a);
    printf("Sum is %d",fsum);
    return 0;

}
int sum(int x)
{
    int s,rem;
    if(x!=0)
    {
        rem =x%10;
        s=rem+sum(x/10);
        
    }
    else
    return(0);

    return s;
}