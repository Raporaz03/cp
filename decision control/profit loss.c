#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter cost price and selling price");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
     printf("The seller made a profit ");
    if(l>0)
     printf("THe seller is made a loss ") ;
    if(p==l)
     printf("THere is no loss no profit ") ;
    return 0; 
}