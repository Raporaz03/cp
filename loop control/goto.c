#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    printf("Enter number:");
    scanf("%d",&i);
    if(i<=3)
     goto sos;
    else{
        printf("\nGoals is more than 3");
        exit(1);
    } 
    sos :
    printf("Goals is less than 3");
    return 0;

}