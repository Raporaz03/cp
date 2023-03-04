// square of loop unlnown number of times 
#include<stdio.h>
int main()
{
    int num;
    char ans;
    do
    {printf("Enter number :");
    scanf("%d",&num);
    printf("Square of number is %d",num*num);
    printf("\nDo you want to calculate more?");
    fflush(stdin);
    scanf("%c",&ans);
    
    }while(ans=='Y');


}