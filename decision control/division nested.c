#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("ENter marks of student ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    if(per>=60)
     printf("First divison");
    else
     {
        if(per>=50)
        printf("\nSecond division");
        else
         {
            if(per>=40)
            printf("\nThird division");
             
             else
             {
                printf("Fail");
             }
         }
     } 
}