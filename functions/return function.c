#include<stdio.h>
int square(int);
int main()
{
    int a,sq;
    printf("Enter number");
    scanf("%d",&a);
    sq =square(a);
    printf("Square of number is %d",sq);
    return 0;
}
int square(int x)
{
    int y;
    y=x*x;
    return(y);
}